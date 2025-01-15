/*
1. Use the inquirer npm package to get user input.
2. Use the qr-image npm package to turn the user entered URL into a QR code image.
3. Create a txt file to save the user input using the native fs node module.
*/ 

import inquirer from 'inquirer';
import qr from 'qr-image';
import fs from 'fs';

var question = {
    type: 'input',
    name: 'url',
    message: 'Enter a URL',
    };

inquirer
  .prompt(question).then((answer) => {
    console.log(answer.url);
    var qr_svg = qr.image(answer.url, {type: 'svg'});
    fs.writeFile("text.txt",answer.url, (err) => {
        if (err) throw err;
        console.log('It\'s saved!');
    });
    qr_svg.pipe(fs.createWriteStream("kishore_git_hub_URL.svg"));
  })
  .catch((err) => {
    if (err) throw err;
  });