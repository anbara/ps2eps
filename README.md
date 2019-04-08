# ps2eps

主にOffice製品からprnファイル出力したときにBB自動選択してepsファイルにしてくれる．

実際はes2epsiっていうコマンド使ってやってくれるだけ．

C++書く練習なので汚いのはしょうがない．

## Requnipent
- g++
- Ghostscript

## Usage
### Ghostscript
- Ghostscriptのインストール
- Ghostscriptのbinとlibにパスを通す(ps2epsiを使えるようにするため)

### フォルダ
psとepsフォルダ作ってもらって，psに変換したいprnファイル入れる．

┗フォルダー  
　　┣ exeファイル  
　　┣ ps  
　　┃ ┗ prnファイル  
　　┗eps  

### 実行
ダブルクリックしてもらえばOK．

## auther
あんばら(@ism__m)