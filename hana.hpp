/*!
@file
Includes all the library components except the adapters for external
libraries.

@copyright Louis Dionne 2013-2016
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_HANA_HPP
#define BOOST_HANA_HPP

//! @defgroup group-concepts Concepts
//! Concepts provided by the library.

//! @defgroup group-datatypes Data types
//! General purpose data types provided by the library.

//! @defgroup group-functional Functional
//! General purpose function objects.

//! @defgroup group-core Core
//! Core utilities of the library.

//! @defgroup group-experimental Experimental features
//! Experimental features that may or may not make it into the library.
//! These features should not expected to be stable.

//! @defgroup group-ext External adapters
//! Adapters for external libraries.

//! @defgroup group-config Configuration options
//! Configurable options to tweak the global behavior of the library.

//! @defgroup group-assertions Assertions
//! Macros to perform different kinds of assertions.

//! @defgroup group-details Details
//! Implementation details. Do not rely on anything here, even if it is
//! documented.

// Include config.hpp first, so that warning messages about compiler support
// appear as soon as possible.
#include <hana/config.hpp>


#ifdef BOOST_HANA_DOXYGEN_INVOKED
namespace boost {
    //! Namespace containing everything in the library.
    namespace hana {
        //! Namespace containing C++14 user-defined literals provided by Hana.
        namespace literals {}
    }
}
#endif

#include <hana/accessors.hpp>
#include <hana/adapt_adt.hpp>
#include <hana/adapt_struct.hpp>
#include <hana/adjust.hpp>
#include <hana/adjust_if.hpp>
#include <hana/all.hpp>
#include <hana/all_of.hpp>
#include <hana/and.hpp>
#include <hana/any.hpp>
#include <hana/any_of.hpp>
#include <hana/ap.hpp>
#include <hana/append.hpp>
#include <hana/assert.hpp>
#include <hana/at.hpp>
#include <hana/at_key.hpp>
#include <hana/back.hpp>
#include <hana/basic_tuple.hpp>
#include <hana/bool.hpp>
#include <hana/cartesian_product.hpp>
#include <hana/chain.hpp>
#include <hana/comparing.hpp>
#include <hana/concat.hpp>
#include <hana/concept.hpp>
#include <hana/contains.hpp>
#include <hana/core.hpp>
#include <hana/count.hpp>
#include <hana/count_if.hpp>
#include <hana/cycle.hpp>
#include <hana/define_struct.hpp>
#include <hana/difference.hpp>
#include <hana/div.hpp>
#include <hana/drop_back.hpp>
#include <hana/drop_front.hpp>
#include <hana/drop_front_exactly.hpp>
#include <hana/drop_while.hpp>
#include <hana/duplicate.hpp>
#include <hana/empty.hpp>
#include <hana/equal.hpp>
#include <hana/erase_key.hpp>
#include <hana/eval.hpp>
#include <hana/eval_if.hpp>
#include <hana/extend.hpp>
#include <hana/extract.hpp>
#include <hana/fill.hpp>
#include <hana/filter.hpp>
#include <hana/find.hpp>
#include <hana/find_if.hpp>
#include <hana/first.hpp>
#include <hana/flatten.hpp>
#include <hana/fold.hpp>
#include <hana/fold_left.hpp>
#include <hana/fold_right.hpp>
#include <hana/for_each.hpp>
#include <hana/front.hpp>
#include <hana/functional.hpp>
#include <hana/fuse.hpp>
#include <hana/greater.hpp>
#include <hana/greater_equal.hpp>
#include <hana/group.hpp>
#include <hana/if.hpp>
#include <hana/insert.hpp>
#include <hana/insert_range.hpp>
#include <hana/integral_constant.hpp>
#include <hana/intersection.hpp>
#include <hana/intersperse.hpp>
#include <hana/is_disjoint.hpp>
#include <hana/is_empty.hpp>
#include <hana/is_subset.hpp>
#include <hana/keys.hpp>
#include <hana/lazy.hpp>
#include <hana/length.hpp>
#include <hana/less.hpp>
#include <hana/less_equal.hpp>
#include <hana/lexicographical_compare.hpp>
#include <hana/lift.hpp>
#include <hana/map.hpp>
#include <hana/max.hpp>
#include <hana/maximum.hpp>
#include <hana/members.hpp>
#include <hana/min.hpp>
#include <hana/minimum.hpp>
#include <hana/minus.hpp>
#include <hana/mod.hpp>
#include <hana/monadic_compose.hpp>
#include <hana/monadic_fold_left.hpp>
#include <hana/monadic_fold_right.hpp>
#include <hana/mult.hpp>
#include <hana/negate.hpp>
#include <hana/none.hpp>
#include <hana/none_of.hpp>
#include <hana/not.hpp>
#include <hana/not_equal.hpp>
#include <hana/one.hpp>
#include <hana/optional.hpp>
#include <hana/or.hpp>
#include <hana/ordering.hpp>
#include <hana/pair.hpp>
#include <hana/partition.hpp>
#include <hana/permutations.hpp>
#include <hana/plus.hpp>
#include <hana/power.hpp>
#include <hana/prefix.hpp>
#include <hana/prepend.hpp>
#include <hana/product.hpp>
#include <hana/range.hpp>
#include <hana/remove.hpp>
#include <hana/remove_at.hpp>
#include <hana/remove_if.hpp>
#include <hana/remove_range.hpp>
#include <hana/repeat.hpp>
#include <hana/replace.hpp>
#include <hana/replace_if.hpp>
#include <hana/replicate.hpp>
#include <hana/reverse.hpp>
#include <hana/reverse_fold.hpp>
#include <hana/scan_left.hpp>
#include <hana/scan_right.hpp>
#include <hana/second.hpp>
#include <hana/set.hpp>
#include <hana/size.hpp>
#include <hana/slice.hpp>
#include <hana/sort.hpp>
#include <hana/span.hpp>
#include <hana/string.hpp>
#include <hana/suffix.hpp>
#include <hana/sum.hpp>
#include <hana/symmetric_difference.hpp>
#include <hana/take_back.hpp>
#include <hana/take_front.hpp>
#include <hana/take_while.hpp>
#include <hana/tap.hpp>
#include <hana/then.hpp>
#include <hana/traits.hpp>
#include <hana/transform.hpp>
#include <hana/tuple.hpp>
#include <hana/type.hpp>
#include <hana/unfold_left.hpp>
#include <hana/unfold_right.hpp>
#include <hana/union.hpp>
#include <hana/unique.hpp>
#include <hana/unpack.hpp>
#include <hana/value.hpp>
#include <hana/version.hpp>
#include <hana/while.hpp>
#include <hana/zero.hpp>
#include <hana/zip.hpp>
#include <hana/zip_shortest.hpp>
#include <hana/zip_shortest_with.hpp>
#include <hana/zip_with.hpp>

#endif // !BOOST_HANA_HPP
