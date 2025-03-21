import express from 'express';

const app = express();
const port = 3000;

app.get("/", (req, res) => {
    res.send("Hello, World!");
});

// app.get("/contact", (req, res) => {
//     res.send("<h1>Contact</h1><p>Contact me ig:kishore2106</p>");
// });

// app.get("/about", (req, res) => {
//     res.send("<h1>About Me</h1><p>My name is Kishore</p>");
// });

app.post("/register", (req, res) => {
    res.sendStatus(201);
});

app.put("/kishore", (req, res) => {
    res.sendStatus(200);
});

app.patch("/kishore", (req, res) => {
    res.sendStatus(200);
});

app.listen(port, () => {
    console.log(`Server is running on port ${port}`);
});