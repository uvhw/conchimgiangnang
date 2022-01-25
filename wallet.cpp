<!DOCTYPE html>
<html>
  <head>
    <script src="https://mempool.space/mempool.js"></script>
    <script>
      const init = async () => {
        
        const { bitcoin: { blocks } } = mempoolJS({
          hostname: 'mempool.space'
        });

        const blocksTipHeight = await blocks.getBlocksTipHeight();

        document.getElementById("result").textContent = JSON.stringify(blocksTipHeight, undefined, 2);
        
      };
      init();
    </script>
  </head>
  <body>
    <pre id="result"></pre>
  </body>
</html>
