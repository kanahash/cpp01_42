/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie_explanation.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahash <kanahash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:46:19 by kanahash          #+#    #+#             */
/*   Updated: 2025/07/16 22:46:25 by kanahash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP // インクルードガードの開始：ZOMBIE_HPPがまだ定義されていない場合、以下のコードをコンパイルします。
                   // これにより、同じヘッダーファイルが複数回インクルードされるのを防ぎ、多重定義エラーを回避します。
#define ZOMBIE_HPP // ZOMBIE_HPPを定義します。

#include <string>     // std::stringクラスを使用するために必要なヘッダーファイルをインクルードします。
#include <iostream>   // 標準入出力（std::cout, std::endlなど）を使用するために必要なヘッダーファイルをインクルードします。

// Zombieクラスの定義
class Zombie
{
    private: // privateメンバ：クラスの外部から直接アクセスできません。
        std::string name; // ゾンビの名前を保持する文字列型のメンバ変数です。

    public: // publicメンバ：クラスの外部からアクセスできます。
        Zombie(); // デフォルトコンストラクタ：引数なしでZombieオブジェクトが作成されるときに呼び出されます。
        Zombie(std::string name); // 引数付きコンストラクタ：名前を指定してZombieオブジェクトが作成されるときに呼び出されます。
        ~Zombie(); // デストラクタ：Zombieオブジェクトが破棄されるときに呼び出されます。

        void announce(void); // ゾンビが叫び声を上げる動作を行うメンバ関数です。
};

// zombieHorde関数のプロトタイプ宣言
// この関数は、指定された数Nのゾンビを生成し、それぞれに指定された名前を付けます。
// 戻り値は、生成されたZombieオブジェクトの配列へのポインタです。
Zombie* zombieHorde( int N, std::string name );

#endif // インクルードガードの終了：ZOMBIE_HPPが定義されているため、これより下のコードはコンパイルされません。
