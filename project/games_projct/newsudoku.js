var arr = [[], [], [], [], [], [], [], [], []]
function help(){
    for (var i = 0; i < 9; i++) {
        for (var j = 0; j < 9; j++) {
            arr[i][j] = document.getElementById(i * 9 + j);
        }
    }
}

var board = [[], [], [], [], [], [], [], [], []]

function FillBoard(board) {
	for (var i = 0; i < 9; i++) {
		for (var j = 0; j < 9; j++) {
			if (board[i][j] != 0) {
				arr[i][j].innerText = board[i][j]
        arr[i][j].style.backgroundColor ="grey";
			}
			else
      {
        arr[i][j].innerText = ''
        arr[i][j].style.backgroundColor ="#e8e6e6";
      }
		}
	}
}

let GetPuzzle = document.getElementById('GetPuzzle')
let SolvePuzzle = document.getElementById('SolvePuzzle')

GetPuzzle.onclick = function () {
	var xhrRequest = new XMLHttpRequest()
	xhrRequest.onload = function () {
		var response = JSON.parse(xhrRequest.response)
		console.log(response)
		board = response.board
        help();
		FillBoard(board);
    print(board);
	}
	xhrRequest.open('get','https://sugoku.onrender.com/board?difficulty=medium')
	xhrRequest.send()
}

SolvePuzzle.onclick = () => {
	sodokoSolver(board);
};

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