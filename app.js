const files = document.getElementById("files");
const heading = document.getElementById("heading");
const previous = document.getElementById("previous");
const folders_list = ["Dynamic Programmng", "Divide and conquer", "Searching"];

const dynamic_programming_files = ["Knapsack"]
const dynamic_programming_files_links = ["https://github.com/princev89/DataStructureAndAlgo/blob/main/dynamic_programming/knapsack.cpp"]

const divideAndCounquer = [""]


document.getElementById("folders").addEventListener("click", function() {
    files.style.display = "grid";
    document.getElementById("folders").style.display = "none";
});
previous.addEventListener("click", function() {
    document.getElementById("heading").innerHTML = "Folders";
    files.style.display = "none";
    document.getElementById("folders").style.display = "grid";
});

function showFolders() {
    for (let i = 0; i < folders_list.length; i++) {
        folders = document.getElementById("folders");
        let element = document.createElement("div");
        element.setAttribute("id", folders_list[i]);
        element.setAttribute("onclick", "showFolderItems(this.id)");
        let img = document.createElement("img");
        img.setAttribute("src", "./folder.png");
        element.append(img);
        element.setAttribute("class", "folder_element");
        element.innerHTML += folders_list[i];
        folders.append(element);
    }

}

function showFolderItems(event) {
    console.log(event);
    files.innerHTML = "";
    switch (event) {
        case folders_list[0]:
            heading.innerHTML = folders_list[0];
            for (let i = 0; i < dynamic_programming_files.length; i++) {
                let ele = document.createElement("a");
                ele.innerHTML = dynamic_programming_files[i];
                ele.setAttribute("href", dynamic_programming_files_links[0]);
                files.append(ele);
            }
            break;
        case folders_list[1]:
            heading.innerHTML = folders_list[1];
            for (let i = 0; i < dynamic_programming_files.length; i++) {
                let ele = document.createElement("a");
                ele.innerHTML = dynamic_programming_files[i];
                ele.setAttribute("href", dynamic_programming_files_links[0]);
                files.append(ele);
            }
            break;
        case folders_list[2]:
            heading.innerHTML = folders_list[2];
            for (let i = 0; i < dynamic_programming_files.length; i++) {
                let ele = document.createElement("a");
                ele.innerHTML = dynamic_programming_files[i];
                ele.setAttribute("href", dynamic_programming_files_links[0]);
                files.append(ele);
            }
            break;

    }
}