//Copyright (c) 2008-2013 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_QVM_2C807EC599D5E980B2EAC9CC53BF67D6
#define BOOST_QVM_2C807EC599D5E980B2EAC9CC53BF67D6

//This file was generated by a program. Do not edit manually.

#include <boost/qvm/deduce_v.hpp>
#include <boost/qvm/enable_if.hpp>
#include <boost/qvm/inline.hpp>
#include <boost/qvm/m_traits.hpp>

namespace
boost
    {
    namespace
    qvm
        {
        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            m_traits<A>::rows==3 && m_traits<A>::cols==3 &&
            v_traits<B>::dim==3,
            deduce_v2<A,B,3> >::type
        operator*( A const & a, B const & b )
            {
            typedef typename m_traits<A>::scalar_type Ta;
            typedef typename v_traits<B>::scalar_type Tb;
            Ta const a00 = m_traits<A>::template r<0,0>(a);
            Ta const a01 = m_traits<A>::template r<0,1>(a);
            Ta const a02 = m_traits<A>::template r<0,2>(a);
            Ta const a10 = m_traits<A>::template r<1,0>(a);
            Ta const a11 = m_traits<A>::template r<1,1>(a);
            Ta const a12 = m_traits<A>::template r<1,2>(a);
            Ta const a20 = m_traits<A>::template r<2,0>(a);
            Ta const a21 = m_traits<A>::template r<2,1>(a);
            Ta const a22 = m_traits<A>::template r<2,2>(a);
            Tb const b0 = v_traits<B>::template r<0>(b);
            Tb const b1 = v_traits<B>::template r<1>(b);
            Tb const b2 = v_traits<B>::template r<2>(b);
            typedef typename deduce_v2<A,B,3>::type R;
            BOOST_QVM_STATIC_ASSERT(v_traits<R>::dim==3);
            R r;
            v_traits<R>::template w<0>(r)=a00*b0+a01*b1+a02*b2;
            v_traits<R>::template w<1>(r)=a10*b0+a11*b1+a12*b2;
            v_traits<R>::template w<2>(r)=a20*b0+a21*b1+a22*b2;
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator*;
            }

        namespace
        qvm_detail
            {
            template <int R,int C>
            struct mul_mv_defined;

            template <>
            struct
            mul_mv_defined<3,3>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            m_traits<B>::rows==3 && m_traits<B>::cols==3 &&
            v_traits<A>::dim==3,
            deduce_v2<A,B,3> >::type
        operator*( A const & a, B const & b )
            {
            typedef typename v_traits<A>::scalar_type Ta;
            typedef typename m_traits<B>::scalar_type Tb;
            Ta const a0 = v_traits<A>::template r<0>(a);
            Ta const a1 = v_traits<A>::template r<1>(a);
            Ta const a2 = v_traits<A>::template r<2>(a);
            Tb const b00 = m_traits<B>::template r<0,0>(b);
            Tb const b01 = m_traits<B>::template r<0,1>(b);
            Tb const b02 = m_traits<B>::template r<0,2>(b);
            Tb const b10 = m_traits<B>::template r<1,0>(b);
            Tb const b11 = m_traits<B>::template r<1,1>(b);
            Tb const b12 = m_traits<B>::template r<1,2>(b);
            Tb const b20 = m_traits<B>::template r<2,0>(b);
            Tb const b21 = m_traits<B>::template r<2,1>(b);
            Tb const b22 = m_traits<B>::template r<2,2>(b);
            typedef typename deduce_v2<A,B,3>::type R;
            BOOST_QVM_STATIC_ASSERT(v_traits<R>::dim==3);
            R r;
            v_traits<R>::template w<0>(r)=a0*b00+a1*b10+a2*b20;
            v_traits<R>::template w<1>(r)=a0*b01+a1*b11+a2*b21;
            v_traits<R>::template w<2>(r)=a0*b02+a1*b12+a2*b22;
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator*;
            }

        namespace
        qvm_detail
            {
            template <int R,int C>
            struct mul_vm_defined;

            template <>
            struct
            mul_vm_defined<3,3>
                {
                static bool const value=true;
                };
            }

        }
    }

#endif
