/* Generated by Snowball 2.0.0 - https://snowballstem.org/ */


#include "steminternal.h"

namespace Xapian {

class InternalStemCzech : public SnowballStemImplementation {
    int I_p1;
    int I_pV;
    int r_do_aggressive();
    int r_do_deriv_single();
    int r_do_derivational();
    int r_do_augmentative();
    int r_do_diminutive();
    int r_do_comparative();
    int r_do_case();
    int r_do_possessive();
    int r_mark_regions();
    int r_palatalise();
    int r_R1();
    int r_RV();

  public:

    InternalStemCzech();
    ~InternalStemCzech();
    int stem();
    std::string get_description() const;
};

}
