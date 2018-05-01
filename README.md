# sanke == snake ???
thay đổi ý tưởng game: từ game dò mìn sang game snake
-quá trình thực hiện ý tưởng làm game:
-
-mô tả về game: rắn di chuyển và ăn thức ăn, có chỉ số mạng. nếu rắn cắn trúng thân mình mà mạng >0 thì sẽ bị trừ 1 mạng,cứ sau 5,15,25 thức ăn lv1 thì sẽ xuất hiện thức ăn lv2, khi ăn được cộng thêm 1 mạng. còn có chỉ số thời gian, nếu trong 15 s mà rắn không ăn được thức ăn lv1 thì sẽ bị trừ 1 mạng. nếu mạng <0 thì sẽ thua game. bên cạnh đố để tăng độ khó cho game thì cứ ăn 1 thức ăn lv1 tốc độ của rắn sẽ nhanh lên 1 chút và cứ sau 10 thức ăn lv1 tốc độ của rắn sẽ làm lại về gần giống ban đầu(nhanh hơn 1 chút).
- file gồm tệp 
  -cosole.h: chứa 1 số hàm tô màu và di chuyển trên màn hình console
  -Point2D.h:chứa 1 struct về tọa độ 2D
  -food.h: chứa các hàm vẽ thức ăn loại 1,loại 2,xóa thức ăn
  -screen.h:chứa các hàm vẽ trên màn hình console như vẽ khung, vẽ điểm,vẽ mạng,vẽ thời gian.
  -snake.h:chứa khai báo về độ dài ban đầu của rắn,1 mảng để chứa thông tin về vị trí của các đốt rắn, 2 hàm về di  chuyển rắn và vẽ rắn
  -main.cpp: +khai báo 1 số biến khởi đầu như heart=0;time=15 s;hướng di chuyển đầu tiên của rắn; biến kiểm điều kiện dừng của game
            +1 hàm mainloop xử lý logic cho game( va chạm,hết thời gian cho phép ... )
            +hàm main thì sẽ gọi các hàm trên ra để xử lý
-
-
-
-game sẽ như sau: vẽ những thứ ban đầu( khung ,rắn,thức ăn,điểm,mạng..) -> rắn di chuyển-> xử lý-> update hình ảnh
-....
