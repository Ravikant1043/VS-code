
var numSelected = null;
var tileSelected = null;

var errors = 0;
var board = [[], [], [], [], [], [], [], [], []]

function hello() {
	var xhrRequest = new XMLHttpRequest()
	xhrRequest.onload = function () {
		var response = JSON.parse(xhrRequest.response)
		console.log(response)
		tp = response.board
	}
	xhrRequest.open('get','https://sugoku.onrender.com/board?difficulty=medium')
	xhrRequest.send()
    board=tp;
    help_me_bro();
    setGame();
    
}
var solution = [
    "387491625",
    "241568379",
    "569327418",
    "758619234",
    "123784596",
    "496253187",
    "934176852",
    "675832941",
    "812945763"
]

// window.onload = function() {
//     setGame();
// }

function setGame() {
    // Digits 1-9
    
    for (let i = 1; i <= 9; i++) {
        //<div id="1" class="number">1</div>
        let number = document.createElement("div");
        number.id = i
        number.innerText = i;
        number.addEventListener("click", selectNumber);
        number.classList.add("number");
        document.getElementById("digits").appendChild(number);
    }

    // Board 9x9
    for (let r = 0; r < 9; r++) {
        for (let c = 0; c < 9; c++) {
            let tile = document.createElement("div");
            tile.id = r.toString() + "-" + c.toString();
            if (board[r][c] != "0") {
                tile.innerText = board[r][c];
                tile.classList.add("tile-start");
            }
            if (r == 2 || r == 5) {
                tile.classList.add("horizontal-line");
            }
            if (c == 2 || c == 5) {
                tile.classList.add("vertical-line");
            }
            tile.addEventListener("click", selectTile);
            tile.classList.add("tile");
            document.getElementById("board").append(tile);
        }
    }
    
}

function selectNumber(){
    if (numSelected != null) {
        numSelected.classList.remove("number-selected");
    }
    numSelected = this;
    numSelected.classList.add("number-selected");
}

function selectTile() {
    if (numSelected) {
        if (this.innerText != "") {
            return;
        }

        // "0-0" "0-1" .. "3-1"
        let coords = this.id.split("-"); //["0", "0"]
        let r = parseInt(coords[0]);
        let c = parseInt(coords[1]);

        if (solution[r][c] == numSelected.id) {
            this.innerText = numSelected.id;
        }
        else {
            errors += 1;
            document.getElementById("errors").innerText = errors;
        }
    }
}

function help_me_bro(){
    var arr = [[], [], [], [], [], [], [], [], []];
    for(let i=0;i<9;i++){
        for(let j=0;j<9;j++){
            arr[i][j]=board[i][j];
        }
    }
    sodukoSolver(arr);
    for(let i=0;i<9;i++){
        for(let j=0;j<9;j++){
            solution[i][j]=arr[i][j];
        }
    }
    console.log(solution);
}
function isValid(board, row, col, k) {
    for (let i = 0; i < 9; i++) {
        const m = 3 * Math.floor(row / 3) + Math.floor(i / 3);
        const n = 3 * Math.floor(col / 3) + i % 3;
        if (board[row][i] == k || board[i][col] == k || board[m][n] == k) {
          return false;
        }
    }
    return true;
  }
  
  
  
  function sodokoSolver(board) {
    for (let i = 0; i < 9; i++) {
      for (let j = 0; j < 9; j++) {
        if (board[i][j] == '0') {
          for (let k = 1; k <= 9; k++) {
            if (isValid(board, i, j, k)) {
              board[i][j] = `${k}`;
              arr[i][j].innerHTML = k;
              arr[i][j].style.backgroundColor ="blue";
            if (sodokoSolver(board)) {
             return true;
            } else {
             board[i][j] = '0';
             arr[i][j].innerHTML = '';
             arr[i][j].style.backgroundColor ="#e8e6e6";
            }
           }
         }
         return false;
       }
     }
   }
   return true;
  }