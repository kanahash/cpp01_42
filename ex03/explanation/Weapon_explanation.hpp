/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon_explanation.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahash <kanahash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:46:35 by kanahash          #+#    #+#             */
/*   Updated: 2025/07/17 00:46:41 by kanahash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP // ヘッダーガードの開始: WEAPON_HPPがまだ定義されていない場合のみ、以下のコードがコンパイルされます。
                   // これにより、同じヘッダーファイルが複数回インクルードされることを防ぎ、多重定義エラーを回避します。
#define WEAPON_HPP // WEAPON_HPPを定義します。

#include <string>   // std::stringクラスを使用するために必要です。文字列を扱います。
#include <iostream> // std::coutなどの標準入出力機能を使用するために必要です。

class Weapon // Weaponという名前のクラスを宣言します。
{
    private: // privateセクション: これらのメンバーはクラスの外部から直接アクセスできません。
        std::string type; // 武器の種類（例: "sword", "axe", "club"など）を保存するstring型のメンバー変数です。
                          // privateにすることで、Weaponオブジェクトの内部状態が不正に変更されるのを防ぎます。
    public: // publicセクション: これらのメンバーはクラスの外部からアクセスできます。
        // デフォルトコンストラクター: 引数なしでWeaponオブジェクトを作成するときに呼び出されます。
        Weapon();
        
        // 引数付きコンストラクター: 武器のタイプを指定してWeaponオブジェクトを作成するときに呼び出されます。
        Weapon(std::string type);
        
        // デストラクター: Weaponオブジェクトが破棄されるときに呼び出されます。
        // オブジェクトが使用していたリソース（例えば、動的に確保されたメモリ）を解放するのに使われます。
        ~Weapon();

        // getTypeメソッド: 武器のタイプを取得するために使用されます。
        // 'const std::string&'は、stringへの定数参照を返すことを意味します。
        // これにより、文字列の不要なコピーを避け、パフォーマンスが向上します。
        // また、返された文字列がこのメソッド内で変更されないことを保証します。
        // 'const'は、このメソッドがWeaponオブジェクトのメンバー変数を変更しないことを保証します。
        const std::string& getType() const;
        
        // setTypeメソッド: 武器のタイプを変更するために使用されます。
        // 引数として、新しいタイプを示すconst std::string& newTypeを受け取ります。
        // 'const std::string&'を使用することで、引数の文字列がコピーされるのを防ぎ、効率的です。
        void setType(const std::string& newType);
};

#endif // ヘッダーガードの終了: WEAPON_HPPが定義されていれば、#ifndefから#endifまでのコードはスキップされます。
