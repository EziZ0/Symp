async function getFirebaseConfig() {
  const response = await fetch("/api/config");
  return await response.json();
}

getFirebaseConfig().then((firebaseConfig) => {
  import("https://www.gstatic.com/firebasejs/10.8.0/firebase-app.js").then(({ initializeApp }) => {
    import("https://www.gstatic.com/firebasejs/10.8.0/firebase-firestore.js").then(({ getFirestore, collection, addDoc }) => {
      const app = initializeApp(firebaseConfig);
      const db = getFirestore(app);

      async function addToFirebase(collection_name, formData) {
        try {
          const docRef = await addDoc(collection(db, collection_name), formData);
          window.location.href = "success.html";
        } catch (err) {
          console.log(err);
        }
      }

      window.addToFirebase = addToFirebase;
    });
  });
});
