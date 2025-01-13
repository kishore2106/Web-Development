// document.querySelector("h1").style.color = "red";

// // Selecting Elements with jQuery
// $("h1").css("color","red");
// or
// jQuery("h1").css("color","red");

// Manipulating Styles with jQuery
$("h1").addClass("heading margin-5");

// // Manipulating Text with jQuery
// $("h1").text("Good bye");
// $("button").text("Dont click me");
// $("button").html("<em>Dont click me<em/>");

// // Manipulating Attributes with jQuery
// $("a").attr("href","https://www.google.com");
// console.log($("img").attr("src"));

// // Adding Event Listeners with jQuery
// $("button").click(function (){
//     // $("h1").slideUp(1000);
//     $("h1").css("color","purple");
// });

// $("input").keypress(function (event){
//     console.log(event.key);
//     $("h1").text(event.key);
// });

// $("h1").on("mouseover", function (){
//     $("h1").css("color","purple");
// });

// Adding and Removing Elements with jQuery
$("h1").before("<button>before</button>");
$("h1").after("<button>after</button>");
$("h1").prepend("<button>prepend</button>");
$("h1").append("<button>append</button>");