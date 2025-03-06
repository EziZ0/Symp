async function getFirebaseConfig() {
  const response = await fetch("/api/config");
  return await response.json();
}

const firebaseConfig = await getFirebaseConfig();

const { initializeApp } = await import(
  "https://www.gstatic.com/firebasejs/10.8.0/firebase-app.js"
);

const { getFirestore, collection, addDoc } = await import(
  "https://www.gstatic.com/firebasejs/10.8.0/firebase-firestore.js"
);

// Initialize Firebase
const app = initializeApp(firebaseConfig);
const db = getFirestore(app);

const addToFirebase = (() => {
  // Function to add data
  return async function addToFirebase(collection_name, formData) {
    try {
      await addDoc(collection(db, collection_name), formData);
      window.location.href = "success.html";
    } catch (err) {
      console.log(err);
    }
  };
})();

// Export the resolved function
export default addToFirebase;
