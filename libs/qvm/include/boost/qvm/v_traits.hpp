//Copyright (c) 2008-2013 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UUID_01224884FC4111DF9570F7E4DED72085
#define UUID_01224884FC4111DF9570F7E4DED72085

namespace
boost
    {
    namespace
    qvm
        {
        template <class V>
        struct
        v_traits
            {
            static int const dim=0;
            typedef void scalar_type;
            };

        template <class T>
        struct
        is_v
            {
            static bool const value=v_traits<T>::dim>0;
            };
        }
    }

#endif
