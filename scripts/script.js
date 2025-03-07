import addToFirebase from "../base.js";

function goBack() {
  window.history.back();
}

document.getElementById("registrationForm").addEventListener("submit", async function (event) {
  event.preventDefault();

  const registerBtn = document.getElementById("registerBtn");
  const btnText = document.getElementById("btnText");
  const loadingSpinner = document.getElementById("loadingSpinner");

  // Show loading, disable button
  registerBtn.disabled = true;
  btnText.style.display = "none";
  loadingSpinner.style.display = "inline-block";

  const formData = {
    participantName: document.getElementById("participantName").value,
    email: document.getElementById("email").value,
    event_name: document.getElementById("event_name").value,
    phoneNumber: document.getElementById("phoneNumber").value,
    college: document.getElementById("college").value,
    year: document.getElementById("year").value,
    participantsCount: parseInt(document.getElementById("participantsCount").value),
  };

  (await addToFirebase)(formData.event_name, formData);
  console.log(formData);
});
