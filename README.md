Daniel Ricardo Reyes Aroca

# Parcial #01


# 1. Diagrama DE Estados (AFD)
Implementa un Automata Finio Determinista en awk que acepte las siguientes expresiones regulares

   +
   ++
   [0-9]+
   ([0-9]+)”.”([0-9])+

A cada expresion se le debe de devolver el token:

   Para su uso: echo -e "555\n14.16\n+\n++\nBDF" | awk -f AFD.awk
   
   Salida:
   
      Expresión: 555 -> Token: ENTERO
      Expresión: 14.16 -> Token: REAL
      Expresión: + -> Token: SUMA
      Expresión: ++ -> Token: INCR
      Expresión: BDF -> Token: DESCONOCIDO

# 2. Gramática Regular para Función Lambda en LEX
Este programa analiza un archivo de texto para verificar si tiene la funcion lambda:

Ejemplo de entrada:
(preueba.txt)
lex lambda.l
gcc lex.yy.c -o verificar_lambda -ll
echo "square = lambda x: x ** 2" > prueba.txt
./verificar_lambda < prueba.txt
NO ACEPTA

# 3. Contador de palabras clave
Este programa en C cuenta cuántas veces aparece una palabra clave en un archivo de texto.
   Ejemplo prueba de entrada:
   El arroz es un alimento básico.
   Me gusta comer arroz todos los días.
   El arroz con leche es delicioso.
   Prefiero arroz integral.

### :keyboard: Activity: Enable GitHub Pages

1. Open a new browser tab, and work on the steps in your second tab while you read the instructions in this tab.
1. Under your repository name, click **Settings**.
1. Click **Pages** in the **Code and automation** section.
1. Ensure "Deploy from a branch" is selected from the **Source** drop-down menu, and then select `main` from the **Branch** drop-down menu.
1. Click the **Save** button.
1. Wait about _one minute_ then refresh this page (the one you're following instructions from). [GitHub Actions](https://docs.github.com/en/actions) will automatically update to the next step.
   > Turning on GitHub Pages creates a deployment of your repository. GitHub Actions may take up to a minute to respond while waiting for the deployment. Future steps will be about 20 seconds; this step is slower.
   > **Note**: In the **Pages** of **Settings**, the **Visit site** button will appear at the top. Click the button to see your GitHub Pages site.

<footer>

<!--
  <<< Author notes: Footer >>>
  Add a link to get support, GitHub status page, code of conduct, license link.
-->

---

Get help: [Post in our discussion board](https://github.com/orgs/skills/discussions/categories/github-pages) &bull; [Review the GitHub status page](https://www.githubstatus.com/)

&copy; 2023 GitHub &bull; [Code of Conduct](https://www.contributor-covenant.org/version/2/1/code_of_conduct/code_of_conduct.md) &bull; [MIT License](https://gh.io/mit)

</footer>
