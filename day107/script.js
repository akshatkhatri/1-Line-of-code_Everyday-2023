$(function(){

    $("#closed").hide();  // Initially hiding the element with the ID "closed".

    $("#open, #closed").click(function(event){
        $(this).css({
            "text-decoration": "underline",
            "color": "blue",
            "background-color": "#f0f0f0",
            "font-weight": "bold"
        });  // Adding an underline style when clicked.
        
        $("#open, #closed").toggle("slow");  // Toggling the visibility of elements with IDs "open" and "closed".
        alert("font size is " + $(this).css("font-size"));  // Alerting the font size of the clicked element.
    });
});

