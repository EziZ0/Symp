import addToFirebase from "../base.js";
document.addEventListener("DOMContentLoaded", function () {
    particlesJS("particles-js", {
        particles: {
            number: { value: 100, density: { enable: true, value_area: 800 } },
            color: { value: "#00FFFF" },
            shape: { type: "circle" },
            opacity: { value: 0.5, random: true },
            size: { value: 3, random: true },
            line_linked: {
                enable: true,
                distance: 150,
                color: "#00FFFF",
                opacity: 0.4,
                width: 1
            },
            move: {
                enable: true,
                speed: 2,
                direction: "none",
                random: false,
                out_mode: "out"
            }
        },
        interactivity: {
            events: {
                onhover: { enable: true, mode: "grab" },
                onclick: { enable: true, mode: "push" }
            }
        },
        retina_detect: true
    });
});

function goBack() {
    window.history.back();
}

document.getElementById("registrationForm").addEventListener("submit", function (event) {
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
        event_name:document.getElementById("event_name").value,
        phoneNumber: document.getElementById("phoneNumber").value,
        college: document.getElementById("college").value,
        year: document.getElementById("year").value,
        participantsCount: parseInt(1)
    };

    addToFirebase(formData.event_name,formData);

});


// fetch("https://courageous-simplicity-production.up.railway.app/project", {
//     method: "POST",
//     headers: {
//         "Content-Type": "application/json"
//     },
//     body: JSON.stringify(formData)
// })
// .then(response => {
//     if (response.ok) {
//         return response.json();
//     }
//     throw new Error("Registration failed");
// })
// .then(data => {
//     window.location.href = "success.html"; // Redirect on success
// })
// .catch(error => {
//     alert("Error submitting form. Please try again.");
//     registerBtn.disabled = false;  // Re-enable button
//     btnText.style.display = "inline";
//     loadingSpinner.style.display = "none";
// });