$(document).ready(function () {
$("input[name='email']").focus(function(){
    if($(this).val()=="person@example.com"){
        $(this).val("");
        $(this).css("color","black");
    }
});

$("input[name='email']".blur(function(){
    if($(this).val()==""){
        $(this).val("person@example.com");
        $(this).css("color","#999");
    }
}));

$("#submit_btn").removeAttr("disabled");
});



// $(document).ready(function () {
//     $("input[name='email']").focus(function () {
//         if ($(this).val() === "person@example.com") {
//             $(this).val("");
//             $(this).css("color", "black");
//         }
//     }).blur(function () {
//         if ($(this).val() === "") {
//             $(this).val("person@example.com");
//             $(this).css("color", "#999");
//         }
//     });

//     $("#submit_btn").removeAttr("disabled");
// });
