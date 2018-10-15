// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Cards/Weapon.h>
#include <hspp/Commons/Macros.h>

namespace Hearthstonepp
{
Weapon::Weapon(const Card* pCard) : Entity(pCard)
{
#ifndef HEARTHSTONEPP_MACOSX
    durability = pCard->durability.has_value() ? pCard->durability.value() : 0;
#else
    durability = (pCard->durability != std::experimental::nullopt)
                     ? *(pCard->durability)
                     : 0;
#endif
}

Weapon::~Weapon()
{
    // Do nothing
}
}  // namespace Hearthstonepp