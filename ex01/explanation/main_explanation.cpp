/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_explanation.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahash <kanahash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:45:48 by kanahash          #+#    #+#             */
/*   Updated: 2025/07/16 22:45:54 by kanahash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" // Zombieクラスの定義を含むヘッダーファイルをインクルードします。

// main関数：プログラムのエントリーポイント
int main(void)
{
	Zombie *Zombie_horde; // Zombieオブジェクトのポインタを宣言します。ゾンビの群れ（配列）を指すために使われます。
	int N;                // 生成するゾンビの数を保持する整数変数です。
	int i;                // ループカウンタとして使用する整数変数です。

	i = 0; // ループカウンタiを0で初期化します。
	N = 5; // 生成するゾンビの数を5に設定します。

	// zombieHorde関数を呼び出し、N個の"Zombie_Horde"という名前のゾンビの群れを生成します。
	// この関数は、新しく生成されたZombieオブジェクトの配列へのポインタを返します。
	Zombie_horde = zombieHorde(N, "Zombie_Horde");

	// whileループを使って、生成されたゾンビの群れを順番に処理します。
	while(i < N) // iがN未満の間、ループを続けます。
	{
		std::cout << "Index " << i << ": " << std::endl; // 現在のゾンビのインデックスを表示します。
		Zombie_horde[i].announce(); // 群れの中のi番目のゾンビにannounce（叫び声）させます。
		i++; // ループカウンタiをインクリメントします。
	}

	// ゾンビの群れに割り当てられたメモリを解放します。
	// new[]で確保したメモリはdelete[]で解放する必要があります。
	delete[] Zombie_horde;

	return(0); // プログラムが正常終了したことを示します。
}
