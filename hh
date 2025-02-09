.event-cards-container {
    padding: 50px 20px;
    max-width: 1400px;
    margin: 0 auto;
}

.event-cards-heading {
    text-align: center;
    color: #00FF99;
    font-size: 2.8em;
    margin-bottom: 40px;
    font-family: 'Poppins', sans-serif;
    font-weight: 600;
    letter-spacing: 1px;
    text-transform: uppercase;
}

.event-cards-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(300px, 1fr)); /* Adjust minmax width */
    gap: 30px;
}

.event-card {
    background-color: #111;
    border-radius: 15px;
    overflow: hidden;
    transition: transform 0.3s ease, box-shadow 0.3s ease;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.3);
    position: relative; /* Required for absolute positioning */
    height: 500px; /* Set a fixed height for a vertical rectangle */
}

/* New Hover Effect Styles */
.event-card-hover-content {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    background-color: rgba(0, 0, 0, 0.8);
    color: #fff;
    opacity: 0;
    transition: opacity 0.3s ease;
    z-index: 2; /* Ensure it's on top of the image */
}

.event-card:hover .event-card-hover-content {
    opacity: 1;
}

.event-card:hover .event-card-image img {
    filter: blur(10px); /* Apply blur on hover */
    transform: scale(1.2); /* slightly zoom in */
}

.event-card-image {
    height: 200px; /* Reduced image height */
    overflow: hidden;
}

.event-card-image img {
    width: 100%;
    height: 100%;
    object-fit: cover;
    display: block;
    transition: filter 0.3s ease, transform 0.3s ease;
}

.event-card-content {
    padding: 20px;
    position: relative;
    z-index: 1;
}

.event-card-title {
    font-size: 1.6em;
    margin-bottom: 10px;
    color: #fff;
    font-family: 'Poppins', sans-serif;
    font-weight: 500;
}

.event-card-tags {
    font-size: 0.9em;
    color: #bbb;
    margin-bottom: 15px;
    font-family: 'Poppins', sans-serif;
}

.event-card-description {
    font-size: 1.1em;
    color: #ddd;
    line-height: 1.6;
    font-family: 'Poppins', sans-serif;
    transition: opacity 0.3s ease; /* Fade out description on hover */
}

.event-card:hover .event-card-description {
    opacity: 0;
}

.event-card-hover-content p {
    font-size: 1em;
    color: #aaa;
    margin-bottom: 5px;
    font-family: 'Poppins', sans-serif;
    text-align: center; /* Center the detail text */
}

.event-card-hover-content p:last-child {
    margin-bottom: 0;
}

.event-card-link {
    display: inline-block;
    margin-top: 15px;
    color: cyan;
    text-decoration: none;
    font-weight: bold;
    font-family: 'Poppins', sans-serif;
    border: 1px solid cyan;
    padding: 8px 16px;
    border-radius: 5px;
    transition: all 0.3s ease;
}

.event-card-link:hover {
    background-color: rgba(0, 255, 255, 0.1);
    text-decoration: underline;
}

/* ADDED: Enhanced Border Effect on Hover */
.event-card::before {
    content: '';
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    border: 2px solid transparent;
    border-radius: 15px;
    transition: border-color 0.5s ease, box-shadow 0.5s ease, transform 0.5s ease;
    pointer-events: none; /* Prevent the pseudo-element from interfering with hover */
}

.event-card:hover::before {
    border-color: cyan; /* Match the website's color */
    box-shadow: 0 0 25px cyan; /* Match the website's color */
    transform: scale(1.05); /* Slightly scale up */
}

/* Event Details Page Styles */
.event-details-container {
    background-color: #000;
    color: #fff;
    font-family: 'Poppins', sans-serif;
    padding: 50px 20px;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    min-height: 100vh;
}

.event-details-card {
    background-color: #111;
    border-radius: 15px;
    overflow: hidden;
    display: flex;
    max-width: 900px;
    margin-bottom: 30px; /* Add margin between card and rules */
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.5);
}

.event-details-image {
    flex: 0 0 40%;
    position: relative;
}

.event-details-image img {
    width: 100%;
    height: 100%;
    object-fit: cover;
    display: block;
}

.event-details-border {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    border: 3px solid cyan;
    box-sizing: border-box;
    pointer-events: none;
}

.event-details-content {
    flex: 1;
    padding: 30px;
}

.event-details-title {
    font-size: 2.2em;
    margin-bottom: 15px;
    font-weight: 600;
    color: cyan;
}

.event-details-subtitle {
    font-size: 1.4em;
    margin-bottom: 10px;
    font-weight: 500;
    color: #eee;
}

.event-details-description {
    font-size: 1.1em;
    line-height: 1.7;
    color: #ddd;
    margin-bottom: 20px;
}

.event-details-info {
    margin-bottom: 15px;
}

.event-details-info p {
    font-size: 1em;
    color: #aaa;
    margin-bottom: 8px;
}

.event-details-value {
    color: #fff;
    font-weight: bold;
}

.event-details-register-button {
    display: inline-block;
    padding: 12px 24px;
    background-color: cyan;
    color: #000;
    text-decoration: none;
    font-weight: bold;
    border-radius: 5px;
    transition: background-color 0.3s ease;
    margin-top: 20px;
}

.event-details-register-button:hover {
    background-color: #00FF99;
}

.event-details-disclaimer {
    font-size: 0.9em;
    color: #888;
    margin-top: 10px;
}

/* Styles for Rules and Regulations Section */
.event-rules-container {
    background-color: #111;
    border-radius: 15px;
    padding: 30px;
    max-width: 900px;
    margin: 0 auto;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.5);
}

.event-rules-heading {
    font-size: 1.8em;
    margin-bottom: 20px;
    font-weight: 600;
    color: cyan;
    text-align: center;
}

.event-rules-list {
    list-style-type: disc;
    padding-left: 25px;
}

.event-rules-list li {
    font-size: 1.1em;
    color: #ddd;
    line-height: 1.7;
    margin-bottom: 10px;
}
body::before {
    content: '';
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    /* background: url('data:image/svg+xml,%3Csvg xmlns="http://www.w3.org/2000/svg" width="100" height="100" viewBox="0 0 100 100"%3E%3Cdefs%3E%3Cpattern id="dots" width="10" height="10" patternUnits="userSpaceOnUse"%3E%3Ccircle cx="5" cy="5" r="2" fill="%2300FF99" /%3E%3C/pattern%3E%3C/defs%3E%3Crect width="100%" height="100%" fill="url(%23dots)" /%3E%3C/svg%3E'); */
    opacity: 0.2;
    z-index: -1;
    pointer-events: none; /* Allows clicking through */
}

body::after {
    content: '';
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    /* background: url('data:image/svg+xml,%3Csvg xmlns="http://www.w3.org/2000/svg" width="200" height="200" viewBox="0 0 200 200"%3E%3Cpath d="M67.8 44.5c-4.3 5.9-8.5 11.8-12.8 17.7-6.7 9.4-17.3 21.6-18.8 23.5-2.3 2.9-2.3 6.9 0 9.8 1.5 1.9 12.1 14.1 18.8 23.5 4.3 5.9 8.5 11.8 12.8 17.7 2.9 3.9 7.6 3.9 10.4 0 4.3-5.9 8.5-11.8 12.8-17.7 6.7-9.4 17.3-21.6 18.8-23.5 2.3-2.9 2.3-6.9 0-9.8-1.5-1.9-12.1-14.1-18.8-23.5-4.3-5.9-8.5-11.8-12.8-17.7-2.9-3.9-7.6-3.9-10.4 0z" fill="%2300FF99" /%3E%3C/svg%3E'); */
    opacity: 0.1;
    z-index: -1;
    pointer-events: none;
}

/* Existing styles (General reset, body, header, hero, events section, etc.) */
/* ... Your existing CSS ... */

/* General Styles for Sections */
.section-heading {
    text-align: center;
    color: cyan;
    font-size: 2.5em;
    margin-bottom: 30px;
    font-family: 'Poppins', sans-serif;
    font-weight: 600;
    letter-spacing: 1px;
    text-transform: uppercase;
}

.section-heading span {
    color: #fff; /* For multi-color headings */
}
