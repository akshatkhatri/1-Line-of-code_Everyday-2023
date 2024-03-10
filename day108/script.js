$(function(){
    $("p").mouseenter(function(){
        $(this).addClass("highlighted");
    }).mouseleave(function () {
        $(this).removeClass("highlighted");
    });
});
