document.addEventListener("DOMContentLoaded", () => {
    const loginForm = document.getElementById("loginForm");
    const registerForm = document.getElementById("registerForm");
    const showRegister = document.getElementById("showRegister");
    const showLogin = document.getElementById("showLogin");

    showRegister.addEventListener("click", () => {
        loginForm.style.display = "none";
        registerForm.style.display = "block";
    });

    showLogin.addEventListener("click", () => {
        registerForm.style.display = "none";
        loginForm.style.display = "block";
    });
});
