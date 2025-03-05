Daniel Ricardo Reyes Aroca

# Parcial #01

Diagrama de EStados

# 1. Diagrama DE Estados (AFD)
implementa un programa en awk que acepte las siguientes expresiones regulares

   +
   ++
   [0-9]+
   ([0-9]+)”.”([0-9])+

A cada expresion se le debe de devolver el token:

   -Para su uso: echo -e "555\n14.16\n+\n++\nBDF" | awk -f AFD.awk
   -Salida:
   Expresión: 555 -> Token: ENTERO
   Expresión: 14.16 -> Token: REAL
   Expresión: + -> Token: SUMA
   Expresión: ++ -> Token: INCR
   Expresión: BDF -> Token: DESCONOCIDO



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
