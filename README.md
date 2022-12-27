# 2022cce

# week06-1 利用2層迴圈畫星星。
# week06-2 用「左手i 當鷹架, 右手j 一直做」的口訣, 用星星畫出等腰三角形。
# week06-3 暴力試數字都試看看能不能整除、能不能約分。
# week06-4 利用輾轉相除法找最大公因數。
# week07-1 用long long int 計算出很長的整數。比較 int及long long int,long long int 可以裝比較長的整數。
# week07-2 用 long long int 計算出最大公因數。
# week07-3 輾轉相除法改用 long long int 計算。
# week07-4 使用剝皮的技巧將10進位轉2進位。
# week08-1 使用for迴圈判斷1個質數。用int bad=0。
# week08-2 先用一個大迴圈, 印出全部的數字。接下來判斷 n 是不是質數。
# week08-3 增加迴圈的熟悉度,輸入5個數字加起來。迴圈前面int sum=0,中間修改sum += n,後面把sum印出來。
# week08-4 直角三角形作法是1.建立鷹樓層i,2.做出星星,3.空格搞定,4.再拆掉鷹架。
# week08-5 用2個for迴圈寫出直角三角形,口訣是正方形,先用星星印出正方形,接下來if判斷何時印空格。
# week08-6 用2個while迴圈畫出有空格、有星星的右方直角三角形。有正方形, 用if判斷誰印空格、星星後, 把前一個程式把for迴圈的前面初變數、中間判斷、後面收尾, 成while迴圈。
# week10-1 「陣列」 陣列的宣告就是用方括號講有幾格,一次把n個值都放進去n個格子。最後用for迴圈, 把值印出來。
# week10-2 用a[0]取最前面的整數變數。如果沒有初始給值,會先是亂碼,但是a[0] = 33給值後 a[0] 就會為33。
# week10-3 陣列正陣列正、倒著印, for迴圈的寫法反過來。
# week11-1 做三數排序的步驟:三數最大值,先讓int max = a;之後看b是否比max大,有則取代。再看c是否比max大,有則取代。
# week11-2 排序:讓數字從小到大排好,先比a、b把大的放右邊, 再比b、c把大的放右邊,最大就跑到右邊,剩下在左邊。最後a、b再比一次, 就能把三個數字從小到大。
# week11-3 有100個數字想從小到大排序,口訣「從左到右巡,相鄰大小不對就交換」巡完一輪後, 最大在最大邊。
# week11-4 接續前一個,將從左到右巡,相鄰大小不對就交換及印出陣列」重覆做很多次,觀察它的結果,右邊大的數字會累積起來。
# week11-5 把剛剛的「從左到右巡一次」的迴圈做很多次。
# week12-1 練習Selection Sort 選擇排序法,口訣:左手i 右手j, 左右比大小, 不對就交換。迴圈寫法簡單只要考量 for(int j=i+1 。
# week12-2 複習int a; int b=10; int c[10]; int d[10]={...};複習完陣列宣告,接下來模仿剛剛的方式, 宣告二維陣列, 並給它初始值。
# week12-3 二維陣列的使用,口訣:左手i 右手j, 因此迴圈在寫的時候, 左邊迴圈i, 右邊迴圈j。在使用陣列時,括號裡也是[i][j],注意跳行的部分。
# week12-4 先做矩陣加法,了解矩陣的左手i右手j的口訣,用了好多次,加深印象。請使用瘋狂程設-上週實習課的題目(矩陣乘法),但是改寫成矩陣加法的簡化版本。
# week12-5 是矩陣乘法。有了剛剛矩陣加法的程式架構,便可以再修改重點是c[i][j] 的值,是用向量乘法,c[i][j]+= a[i][k]*b[k][j]; 的迴圈k 逐項(相乘)加起來。
# week13-1 有一題比較有變化的費氏數列,實作最基礎的Fibonacci費氏數列。
# week13-2 函數函式,什麼是函數、函式其實int main()也是函式,會return 0;照課本實作int addnum(int a, int b)的函式return a+b 的結果,熟悉函式的定義、宣告、函式的使用。
# week13-3 函式的圖畫像一個有魔法的神奇箱子,左邊會return吐出來, 上方會傳數值進去箱子。不過有的函式不吐東西出來,就會在函式宣告時,在左邊寫 void 註明它不會吐東西出來。
# week13-4 式在使用之前, 需要先定義or 告它的形狀。
# week13-5 陣順時針旋轉。要用到第一節課「左手i右手j」的口訣,先畫出簡單but錯誤的結果, 再照著錯誤的結果,去想「output的迴圈要怎麼跑」, 腦海中出現兩個箭頭,思考迴圈從哪裡到哪裡。
# week14-1 函式的宣告declare 定義define 及使用/呼叫call,參數的部分, int sum(int a, int b); int a,int b。在使用前,要先宣告或定義。
# week14-2 變數的範圍(variable scope),房間裡的變數(local variable),只能在房間裡看到。外面的變數(global variable)可以被大家看到。
# week14-3 房間裡的變數(local) 只能在房間裡看到。在funcA()裡有int a=10; 在funcB()裡有int a=30;在外面global變數有int a=20;大家有自己看得到的範圍。
# week14-4 ,先用 51,68練習,使用for迴圈暴力法,看能不能整除、約分。再用while迴圈,老大a、b、生出c, c是0時, b是答案。最後用函式呼叫函式int gcd(int a, int b)。
# week15-1 先看int a[4]={1, 2, 3, 4};用%d印出來。接下來char b[4]={49, 50, 51, 52};看它用%c及%d印出來的是什麼,了解字元用不同的方法印出來是不同。
# week15-2 為了解Decimal數值10進位和Char字母/字元的差別,用printf("%d : %c \n", 97, 97 )試了幾個數值。
# week15-3 講解ASCII美國國家資訊標準交換碼,接著介紹課本%d %f %c %s的意思,利用for迴圈來印出對照表。
# week15-4 char字母是1byte,int整數是4byte,了解字串是什麼。宣告一個字串(字母陣列)利用for迴圈配合陣列,把每個字母印出來。
# week15-5 利用scanf()配合%s讀入字串,在printf()配合%s會印出字串。利用for迴圈,寫出特別、專屬字串的迴圈, 數一數有幾個字母。
# week15-6 是要把字串反過來印。用字串的迴圈,找出長度 N,再利用反過來的迴圈完成。過程中,複習字串的 scanf()及printf()還有%s及%c的差別。
# week16-1 #include其實是檔案,裡面有函式的宣告,我們才能使用函式。int a整數變數是比較大的盒子,字元變數是比較小的盒子。變數的4個性質最後一&也就是變數的盒子放哪裡。了解scanf()怎麼把數字放在某個位置的盒子,複習%d及%c的差別
# week16-2 了解字串的函式,strlen() strcpy() strcat() strcmp()。使用scanf()配合 %s可讀入字串,使用strlen()得到長度,strcpy()可以複製。
# week16-3 了解address位址&,利用C Tutor Python接著照課本介紹的指標pointer 的寫法,準備4個指標,分別指到int a;float f;char c;char line[10],觀察看看指標的箭頭
# week16-4 複習之前的題目為了讓大家實習上機考試順利, 把隔壁班上機考的題目逐題講解錄影
# week17-1 background_size_rect_line 用了4個函式來畫圖
# week17-2 setup_draw 可以利用 void setup() 設定, void draw() 每秒畫60次, 做出可互動的程式
# week17-3 painter_mousePressed_keyPressed_stroke 可以利用 mouse 及 key 進行互動, 配合 stroke()換色
# week17-4 PImage_loadImage_image 可以宣告圖片的變數, 讀入圖片、畫出image。要小心, 圖檔要事先拉到程式碼中
# week17-5 oundFile_loop 要先把 Processing 的 Sketch-Library-Manage Libraries 裡, 找到 sound 的 library, Install 好後, 便可以有相關的範例
# week17-6 random 最後一個程式, 要亂數抽籤 (週五老師會做個教學,示範怎麼轉成 HTML/JavaScript 放到網頁)
