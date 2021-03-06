/*
 *  Copyright 2008-2010 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


/*! \file fill.h
 *  \brief Device implementation of fill.
 */

#pragma once

#include <thrust/detail/device/dispatch/fill.h>
#include <thrust/iterator/iterator_traits.h>

namespace thrust
{
namespace detail
{
namespace device
{

template<typename ForwardIterator, typename T>
  void fill(ForwardIterator first,
            ForwardIterator last,
            const T &exemplar)
{
    // dispatch on space
    thrust::detail::device::dispatch::fill(first, last, exemplar,
            typename thrust::iterator_space<ForwardIterator>::type());
}

} // end namespace device
} // end namespace detail
} // end namespace thrust

