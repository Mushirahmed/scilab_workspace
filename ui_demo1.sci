f=figure();
// create a figure
h=uicontrol(f,'style','listbox', ...
   "callback","gui_callback",...
   "tag", "list_demo",...
   "position", [10 10 150 160]);
// create a listbox
set(h, 'string', "item 1|item 2|item3");
// fill the list
set(h, 'value', [1]);
// select item 1 and 3 in the list
//close(f);
// close the figure
