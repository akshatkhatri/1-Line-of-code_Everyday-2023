// $(function(){
//     $("p").mouseenter(function(){
//         $(this).addClass("highlighted");
//     });

//     $("p").mouseleave(function () {
//         $(this).removeClass("highlighted");
//     });
// });

// $("p").click(function() {
//     if($(this).hasClass("highlighted")){
//         alert("class already there");
//     }

//     else{
//         $(this).addClass("highlighted");
//     }
// });f

$("p").click(function(){
    $(this).toggleClass("highlighted");
});