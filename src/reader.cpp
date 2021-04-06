/* Generated through 'instantiate_templates.py', do not edit manually. */

/*    Read and write sparse matrices in text format:
*     <labels(s)> <column>:<value> <column>:<value> ...
* 
*     BSD 2-Clause License
*     Copyright (c) 2021, David Cortes
*     All rights reserved.
*     Redistribution and use in source and binary forms, with or without
*     modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright notice, this
*       list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright notice,
*       this list of conditions and the following disclaimer in the documentation
*       and/or other materials provided with the distribution.
*     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
*     AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*     IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
*     FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
*     DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
*     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*     CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
*     OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*     OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "reader.h"

#ifdef _FOR_R

bool read_multi_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

#elif defined(_FOR_PYTHON)

bool read_multi_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

#else

bool read_multi_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<size_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<size_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<size_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<size_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<size_t> &indptr_lab,
    std::vector<size_t> &indices_lab,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<int> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<size_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<size_t> &indptr_lab,
    std::vector<size_t> &indices_lab,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<int> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<size_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    FILE *input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<size_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &indptr_lab,
    std::vector<int> &indices_lab,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<size_t> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int> &indptr,
    std::vector<int> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<size_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &indptr_lab,
    std::vector<int64_t> &indices_lab,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<size_t> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<int64_t> &indptr,
    std::vector<int64_t> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<int64_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<size_t> &indptr_lab,
    std::vector<size_t> &indices_lab,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<int> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<int64_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<size_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<float> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<float> &values,
    std::vector<double> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_multi_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<size_t> &indptr_lab,
    std::vector<size_t> &indices_lab,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_multi_label_template(
        input_file,
        indptr,
        indices,
        values,
        indptr_lab,
        indices_lab,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<int> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<int64_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<size_t> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<float> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

bool read_single_label
(
    std::istream &input_file,
    std::vector<size_t> &indptr,
    std::vector<size_t> &indices,
    std::vector<double> &values,
    std::vector<double> &labels,
    std::vector<size_t> &qid,
    size_large &nrows,
    size_large &ncols,
    size_large &nclasses,
    const bool ignore_zero_valued = true,
    const bool sort_indices = true,
    const bool text_is_base1 = true,
    const bool assume_no_qid = true
)
{
    return read_single_label_template(
        input_file,
        indptr,
        indices,
        values,
        labels,
        qid,
        nrows,
        ncols,
        nclasses,
        ignore_zero_valued,
        sort_indices,
        text_is_base1,
        assume_no_qid
    );
}

#endif /* _FOR_R, _FOR_PYTHON */