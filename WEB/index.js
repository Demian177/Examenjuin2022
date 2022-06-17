let cell = 64;
const selector = document.querySelector(".echec");

let plateau = [
  0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0,
  1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1,
  0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0,
];

// let position = [
//   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
// ];

let position = [
    'b.tour', 'b.cavalier', 'b.fou', 'b.roi','b.dame','b.fou', 'b.cavalier', 'b.tour',
    'b.pion', 'b.pion', 'b.pion', 'b.pion', 'b.pion', 'b.pion', 'b.pion','b.pion',
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    'n.pion', 'n.pion', 'n.pion', 'n.pion', 'n.pion', 'n.pion', 'n.pion','n.pion',
    'n.tour', 'n.cavalier', 'n.fou','n.dame', 'n.roi', 'n.fou', 'n.cavalier', 'n.tour',
  ];

let positionRef = {
  b: {
    roi: "&#9812",
    dame: "&#9813",
    tour: "&#9814",
    fou: "&#9815",
    cavalier: "&#9816",
    pion: "&#9817",
  },

  n: {
    roi: "&#9818",
    dame: "&#9819",
    tour: "&#9820",
    fou: "&#9821",
    cavalier: "&#9822",
    pion: "&#9823",
  },
};

plateau.forEach(function (val, index) {
  let span = document.createElement("span");
  span.classList.add("cell");

  val ? span.classList.add("black") : span.classList.add("white");

  position[index] ? span.innerHTML = positionRef[position[index].split(".")[0]][position[index].split(".")[1]] : '';

  position[index] ? span.classList.add(position[index] ? position[index].split(".")[0] : '') : '';
  position[index] ? span.classList.add(position[index] ? position[index].split(".")[1] : '') : '';
  selector.append(span);
});


const spanSelect = document.querySelectorAll(".cell");

spanSelect.forEach(function (el, index) {
  el.addEventListener("click", function (e) {
    removeOrange();
    el.innerText ? getPosition(index,el) : "";
  });
});

function removeOrange() {
  spanSelect.forEach((el) => {
    el.classList.remove("orange");
  });
}

function getPosition(index,el) {
  switch (el.classList[3]){
    case 'pion':
      pion(index)
      break;
    // case 'roi':
    //   roi(index)
    //   break;
    // case 'dame':
    //   dame(index)
    //   break;
    // case 'tour':
    //   tour(index)
    //   break;
    // case 'cavalier':
    //   cavalier(index)
    //   break;
    // case 'fou':
    //   fou(index)
    //   break;
    default:
  }
}

function pion(index){
  spanSelect[index + 1] && position[index + 1] == 0 ? spanSelect[index + 1].classList.add("orange") : "";
  spanSelect[index - 1] && position[index - 1] == 0 ? spanSelect[index - 1].classList.add("orange") : "";
  spanSelect[index + 8] && position[index + 8] == 0 ? spanSelect[index + 8].classList.add("orange") : "";
  spanSelect[index - 8] && position[index - 8] == 0 ? spanSelect[index - 8].classList.add("orange") : "";
}

//timer
let max = 4;
let myInterval = setInterval(myTImer, 1000);
let i = 0;
let bool = true;
const player = document.querySelector(".player");

function myTImer() {
  i++;
  document.querySelector(".time").innerText = i;

  if (i == max) {
    if (bool) {
      player.innerText = "Player 2";
      bool = false;
    } else {
      player.innerText = "Player 1";
      bool = true;
    }
    i = 0;

    clearTimeout(myInterval);
    myInterval = setInterval(myTImer, 1000);
  }
}
