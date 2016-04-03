#include<stdio.h>

main()
{
    char a[] = "<script>document.addEventListener('DOMContentLoaded',function(){document.body.innerHTML='<h1>readme</h1><p>this is my first attempt at creating a <a href=\"https://en.wikipedia.org/wiki/Polyglot_%28computing%29\">polyglot</a>.</p><h3>source code</h3><code>&#35;include&lt;stdio.h&gt;<br><br>main()<br>{<br>&nbsp;&nbsp;&nbsp;&nbsp;char a[0] = \"&lt;script&gt;document.addEventListener(&#39;DOMContentLoaded&#39;,function(){document.body.innerHTML=&#39;&lt;contents of this page&gt;&#39;},false);&lt;/script&gt;\";<br>&nbsp;&nbsp;&nbsp;&nbsp;printf(\"this executable was compiled from source code written in c.&#92;nto learn more about it open it in your web browser.&#92;n\");<br>}</code><h3>creation and use</h3><code>$ gcc -o selfdoc.html selfdoc.c<br>$ ./selfdoc.html<br>this executable was compiled from source code written in c.<br>to learn more about it open it in your web browser.<br>$ firefox selfdoc.html</code>';},false);</script>";
    printf("this executable was compiled from source code written in c.\nto learn more about it open it in your web browser.\n");
}
