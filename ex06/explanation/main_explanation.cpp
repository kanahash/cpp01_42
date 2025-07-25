/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_explanation.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahash <kanahash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:47:45 by kanahash          #+#    #+#             */
/*   Updated: 2025/07/24 14:47:56 by kanahash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp" // Harlクラスの定義を含むヘッダーファイルをインクルードします。
                     // これにより、main関数内でHarlクラスを使用できるようになります。

// main関数はC++プログラムのエントリポイント（開始点）です。
// int ac: コマンドライン引数の数（argument count）を表します。
//         プログラム名自体も1つの引数として数えられます。
// char **av: コマンドライン引数の文字列配列（argument vector）を表します。
//            av[0]はプログラム名、av[1]以降はユーザーが入力した引数になります。
int main(int ac, char **av)
{
    // Harlクラスのオブジェクトをスタック上に作成します。
    // これにより、Harlクラスのコンストラクタが呼び出されます。
    Harl harl;

    // コマンドライン引数の数をチェックします。
    // プログラムが正しく動作するためには、プログラム名（av[0]）と
    // ログレベル（av[1]）の合計2つの引数が必要です。
    if(ac != 2) // 引数の数が2ではない場合（つまり、ログレベルが指定されていない場合）
    {
        // プログラムの正しい使用方法をユーザーに表示します。
        std::cout << "Usage: ./harlFilter <LOG_LEVEL>" << std::endl;
        std::cout << "Available levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
        return(1); // エラーコード1を返してプログラムを終了します。
                   // 0以外の戻り値は通常、プログラムが異常終了したことを示します。
    }

    // Harlオブジェクトのcomplainメソッドを呼び出します。
    // av[1]は、ユーザーがコマンドラインで指定したログレベルの文字列です。
    // 例: ./harlFilter "WARNING" の場合、av[1]は"WARNING"になります。
    harl.complain(av[1]);

    return(0); // 正常終了コード0を返してプログラムを終了します。
               // 0の戻り値は通常、プログラムが正常に実行されたことを示します。
}
