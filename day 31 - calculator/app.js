const theme = document.getElementById('theme');

theme.addEventListener('click', () => {
    const currentColor = window.getComputedStyle(theme).backgroundColor;

    if(currentColor === 'rgb(198, 196, 196)') { // white
        theme.style.backgroundColor = 'rgb(198, 196, 195)';
        theme.textContent = "LIGHT";
        theme.style.color = 'black';
        document.body.classList.remove('dark-theme');
        document.body.classList.add('light-theme');
    } else { /*black*/
        theme.style.backgroundColor = 'rgb(198, 196, 196)';
        theme.style.color = 'black';
        theme.textContent = "DARK";
        document.body.classList.remove('light-theme');
        document.body.classList.add('dark-theme');
        
    }
});



const btns = document.querySelectorAll(".btn");
const display_numbers = document.querySelector(".display-numbers");

btns.forEach(btn => {
  btn.addEventListener("click", () => {
    const value = btn.textContent;
    if (value === "C") {
      display_numbers.textContent = "0";
      return;
    }

    if (value === "←") {
      display_numbers.textContent = display_numbers.textContent.slice(0, -1) || "0";
      return;
    }

    if (value === "=") {
      try {
        let expression = display_numbers.textContent
          .replace(/÷/g, "/")
          .replace(/×/g, "*");

        display_numbers.textContent = eval(expression); 
      } catch {
        display_numbers.textContent = "Error";
      }
      return;
    }

    if (display_numbers.textContent === "0") {
      display_numbers.textContent = value;
    } else {
      display_numbers.textContent += value;
    }
  });
});
