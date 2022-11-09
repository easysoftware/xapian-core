/* Warning: This file is generated by ./collate-test - do not modify directly! */

    if (!(properties&BACKEND)) {
	static const test_desc tests[] = {
	    { "stubdb7", test_stubdb7 },
	    { "stubdb4", test_stubdb4 },
	    { "defaultctor1", test_defaultctor1 },
	    { "copyassign1", test_copyassign1 },
	    { "latlongcoords1", test_latlongcoords1 },
	    { "latlongmetric1", test_latlongmetric1 },
	    { "latlongmetric2", test_latlongmetric2 },
	    { "latlongkeymaker1", test_latlongkeymaker1 },
	    { "matchspy6", test_matchspy6 },
	    { "matchspy7", test_matchspy7 },
	    { "trivial1", test_trivial1 },
	    { "getqterms1", test_getqterms1 },
	    { "getqterms2", test_getqterms2 },
	    { "emptyquery2", test_emptyquery2 },
	    { "emptyquery3", test_emptyquery3 },
	    { "querylen1", test_querylen1 },
	    { "querylen2", test_querylen2 },
	    { "queryvalid1", test_queryvalid1 },
	    { "dontflattensubqueries1", test_dontflattensubqueries1 },
	    { "emptyquerypart1", test_emptyquerypart1 },
	    { "stemlangs1", test_stemlangs1 },
	    { "weight1", test_weight1 },
	    { "nosuchdb1", test_nosuchdb1 },
	    { "addvalue1", test_addvalue1 },
	    { "poscollapse2", test_poscollapse2 },
	    { "uninitdb1", test_uninitdb1 },
	    { "scaleweight3", test_scaleweight3 },
	    { "rset3", test_rset3 },
	    { "rset4", test_rset4 },
	    { "valuesetmatchdecider1", test_valuesetmatchdecider1 },
	    { "emptymset1", test_emptymset1 },
	    { "expanddeciderfilterprefix1", test_expanddeciderfilterprefix1 },
	    { "version1", test_version1 },
	    { "nosubdatabases1", test_nosubdatabases1 },
	    { "document1", test_document1 },
	    { "document2", test_document2 },
	    { "documentclearterms1", test_documentclearterms1 },
	    { "documentclearvalues1", test_documentclearvalues1 },
	    { "documentemptyterm1", test_documentemptyterm1 },
	    { "emptyquery4", test_emptyquery4 },
	    { "singlesubquery1", test_singlesubquery1 },
	    { "singlesubquery2", test_singlesubquery2 },
	    { "singlesubquery3", test_singlesubquery3 },
	    { "combinewqfnomore1", test_combinewqfnomore1 },
	    { "subclassablerefcount1", test_subclassablerefcount1 },
	    { "subclassablerefcount2", test_subclassablerefcount2 },
	    { "subclassablerefcount4", test_subclassablerefcount4 },
	    { "subclassablerefcount5", test_subclassablerefcount5 },
	    { "subclassablerefcount8", test_subclassablerefcount8 },
	    { "nonutf8docdesc1", test_nonutf8docdesc1 },
	    { "deletewhileiterating1", test_deletewhileiterating1 },
	    { "removepostings", test_removepostings },
	    { "errorcopyctor", test_errorcopyctor },
	    { "valuege3", test_valuege3 },
	    { "postingsourceclone1", test_postingsourceclone1 },
	    { "queryterms1", test_queryterms1 },
	    { "matchall2", test_matchall2 },
	    { "matchnothing1", test_matchnothing1 },
	    { "overload1", test_overload1 },
	    { "nonutf8termdesc1", test_nonutf8termdesc1 },
	    { "queryintro1", test_queryintro1 },
	    { "queryparser1", test_queryparser1 },
	    { "qp_default_op1", test_qp_default_op1 },
	    { "qp_default_prefix1", test_qp_default_prefix1 },
	    { "qp_default_prefix2", test_qp_default_prefix2 },
	    { "qp_odd_chars1", test_qp_odd_chars1 },
	    { "qp_flag_bool_any_case1", test_qp_flag_bool_any_case1 },
	    { "qp_stopper1", test_qp_stopper1 },
	    { "qp_flag_pure_not1", test_qp_flag_pure_not1 },
	    { "qp_unstem_boolean_prefix", test_qp_unstem_boolean_prefix },
	    { "qp_accumulate", test_qp_accumulate },
	    { "qp_value_range1", test_qp_value_range1 },
	    { "qp_range1", test_qp_range1 },
	    { "qp_value_range2", test_qp_value_range2 },
	    { "qp_range2", test_qp_range2 },
	    { "qp_value_range4", test_qp_value_range4 },
	    { "qp_range4", test_qp_range4 },
	    { "qp_value_daterange1", test_qp_value_daterange1 },
	    { "qp_daterange1", test_qp_daterange1 },
	    { "qp_value_daterange2", test_qp_value_daterange2 },
	    { "qp_daterange2", test_qp_daterange2 },
	    { "qp_value_stringrange1", test_qp_value_stringrange1 },
	    { "qp_stringrange1", test_qp_stringrange1 },
	    { "qp_value_customrange1", test_qp_value_customrange1 },
	    { "qp_customrange1", test_qp_customrange1 },
	    { "qp_fieldproc1", test_qp_fieldproc1 },
	    { "qp_fieldproc2", test_qp_fieldproc2 },
	    { "qp_fieldproc3", test_qp_fieldproc3 },
	    { "qp_stoplist1", test_qp_stoplist1 },
	    { "qp_stem_all1", test_qp_stem_all1 },
	    { "qp_stem_all_z1", test_qp_stem_all_z1 },
	    { "qp_near1", test_qp_near1 },
	    { "qp_phrase1", test_qp_phrase1 },
	    { "qp_default_op2", test_qp_default_op2 },
	    { "qp_default_op3", test_qp_default_op3 },
	    { "qp_defaultstrategysome1", test_qp_defaultstrategysome1 },
	    { "qp_stemsomefullpos", test_qp_stemsomefullpos },
	    { "querypairwise1", test_querypairwise1 },
	    { "serialise_document1", test_serialise_document1 },
	    { "serialise_query1", test_serialise_query1 },
	    { "serialise_query2", test_serialise_query2 },
	    { "serialise_query3", test_serialise_query3 },
	    { "serialise_query4", test_serialise_query4 },
	    { "double_register_leak", test_double_register_leak },
	    { "registry1", test_registry1 },
	    { "registry2", test_registry2 },
	    { "registry3", test_registry3 },
	    { "snippet_empty_mset2", test_snippet_empty_mset2 },
	    { "multivaluekeymaker1", test_multivaluekeymaker1 },
	    { "stem1", test_stem1 },
	    { "stem2", test_stem2 },
	    { "stem3", test_stem3 },
	    { "stemempty1", test_stemempty1 },
	    { "stemlangs2", test_stemlangs2 },
	    { "termgen1", test_termgen1 },
	    { "tg_spell2", test_tg_spell2 },
	    { "tg_max_word_length1", test_tg_max_word_length1 },
	    { "utf8iterator1", test_utf8iterator1 },
	    { "utf8iterator2", test_utf8iterator2 },
	    { "unicode1", test_unicode1 },
	    { "caseconvert1", test_caseconvert1 },
	    { "caseconvert2", test_caseconvert2 },
	    { "utf8convert1", test_utf8convert1 },
	    { "unicodepredicates1", test_unicodepredicates1 },
	    { "valuestats5", test_valuestats5 },
	    { "fixedweightsource2", test_fixedweightsource2 },
	    { "tradweight3", test_tradweight3 },
	    { "unigramlmweight3", test_unigramlmweight3 },
	    { "bm25weight3", test_bm25weight3 },
	    { "bm25plusweight1", test_bm25plusweight1 },
	    { "inl2weight1", test_inl2weight1 },
	    { "inl2weight2", test_inl2weight2 },
	    { "ifb2weight1", test_ifb2weight1 },
	    { "ifb2weight2", test_ifb2weight2 },
	    { "ineb2weight1", test_ineb2weight1 },
	    { "ineb2weight2", test_ineb2weight2 },
	    { "bb2weight1", test_bb2weight1 },
	    { "bb2weight2", test_bb2weight2 },
	    { "dlhweight2", test_dlhweight2 },
	    { "pl2weight1", test_pl2weight1 },
	    { "pl2weight2", test_pl2weight2 },
	    { "pl2plusweight1", test_pl2plusweight1 },
	    { "pl2plusweight2", test_pl2plusweight2 },
	    { "pl2plusweight3", test_pl2plusweight3 },
	    { "dphweight2", test_dphweight2 },
	    { "tfidfweight1", test_tfidfweight1 },
	    { "tfidfweight2", test_tfidfweight2 },
	    { "unigramlmweight6", test_unigramlmweight6 },
	    { "boolweight1", test_boolweight1 },
	    { "coordweight2", test_coordweight2 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)) {
	static const test_desc tests[] = {
	    { "zerodocid1", test_zerodocid1 },
	    { "emptyquery1", test_emptyquery1 },
	    { "simplequery1", test_simplequery1 },
	    { "simplequery2", test_simplequery2 },
	    { "simplequery3", test_simplequery3 },
	    { "msetmaxitems1", test_msetmaxitems1 },
	    { "expandweights1", test_expandweights1 },
	    { "expandweights2", test_expandweights2 },
	    { "expandweights3", test_expandweights3 },
	    { "expandweights4", test_expandweights4 },
	    { "expandweights5", test_expandweights5 },
	    { "expandweights6", test_expandweights6 },
	    { "expandweights7", test_expandweights7 },
	    { "expandweights8", test_expandweights8 },
	    { "expandmaxitems1", test_expandmaxitems1 },
	    { "boolquery1", test_boolquery1 },
	    { "msetfirst1", test_msetfirst1 },
	    { "topercent1", test_topercent1 },
	    { "topercent2", test_topercent2 },
	    { "expandfunctor1", test_expandfunctor1 },
	    { "expanddeciderfilterprefix2", test_expanddeciderfilterprefix2 },
	    { "pctcutoff1", test_pctcutoff1 },
	    { "pctcutoff2", test_pctcutoff2 },
	    { "pctcutoff3", test_pctcutoff3 },
	    { "cutoff1", test_cutoff1 },
	    { "allowqterms1", test_allowqterms1 },
	    { "maxattain1", test_maxattain1 },
	    { "reversebool1", test_reversebool1 },
	    { "reversebool2", test_reversebool2 },
	    { "getmterms1", test_getmterms1 },
	    { "getmterms2", test_getmterms2 },
	    { "repeatquery1", test_repeatquery1 },
	    { "fetchdocs1", test_fetchdocs1 },
	    { "absentterm1", test_absentterm1 },
	    { "absentterm2", test_absentterm2 },
	    { "rset1", test_rset1 },
	    { "rset2", test_rset2 },
	    { "eliteset1", test_eliteset1 },
	    { "eliteset2", test_eliteset2 },
	    { "eliteset3", test_eliteset3 },
	    { "eliteset4", test_eliteset4 },
	    { "eliteset5", test_eliteset5 },
	    { "termlisttermfreq1", test_termlisttermfreq1 },
	    { "qterminfo1", test_qterminfo1 },
	    { "qterminfo2", test_qterminfo2 },
	    { "msetzeroitems1", test_msetzeroitems1 },
	    { "matches1", test_matches1 },
	    { "wqf1", test_wqf1 },
	    { "qlen1", test_qlen1 },
	    { "termlist1", test_termlist1 },
	    { "termlist2", test_termlist2 },
	    { "termlist3", test_termlist3 },
	    { "termlist4", test_termlist4 },
	    { "puncterms1", test_puncterms1 },
	    { "spaceterms1", test_spaceterms1 },
	    { "xor1", test_xor1 },
	    { "xor2", test_xor2 },
	    { "getdoc1", test_getdoc1 },
	    { "emptyop1", test_emptyop1 },
	    { "checkatleast1", test_checkatleast1 },
	    { "checkatleast2", test_checkatleast2 },
	    { "checkatleast3", test_checkatleast3 },
	    { "allpostlist1", test_allpostlist1 },
	    { "emptyterm1", test_emptyterm1 },
	    { "scaleweight1", test_scaleweight1 },
	    { "scaleweight2", test_scaleweight2 },
	    { "bm25weight1", test_bm25weight1 },
	    { "tradweight1", test_tradweight1 },
	    { "tradweight4", test_tradweight4 },
	    { "dbstats1", test_dbstats1 },
	    { "dbstats2", test_dbstats2 },
	    { "alldocspl3", test_alldocspl3 },
	    { "msetfirst2", test_msetfirst2 },
	    { "bm25weight2", test_bm25weight2 },
	    { "unigramlmweight2", test_unigramlmweight2 },
	    { "tradweight2", test_tradweight2 },
	    { "emptydb1", test_emptydb1 },
	    { "multiargop1", test_multiargop1 },
	    { "msetweights1", test_msetweights1 },
	    { "itorskiptofromend1", test_itorskiptofromend1 },
	    { "sortvalue2", test_sortvalue2 },
	    { "enquiregetquery1", test_enquiregetquery1 },
	    { "exactxor1", test_exactxor1 },
	    { "getdocumentlazy1", test_getdocumentlazy1 },
	    { "getdocumentlazy2", test_getdocumentlazy2 },
	    { "checkatleast4", test_checkatleast4 },
	    { "multidb1", test_multidb1 },
	    { "closedb1", test_closedb1 },
	    { "closedb3", test_closedb3 },
	    { "collapsekey5", test_collapsekey5 },
	    { "termstats", test_termstats },
	    { "msetiterator1", test_msetiterator1 },
	    { "msetiterator2", test_msetiterator2 },
	    { "msetiterator3", test_msetiterator3 },
	    { "esetiterator1", test_esetiterator1 },
	    { "esetiterator2", test_esetiterator2 },
	    { "collapsekey1", test_collapsekey1 },
	    { "collapsekey2", test_collapsekey2 },
	    { "collapsekey3", test_collapsekey3 },
	    { "collapsekey4", test_collapsekey4 },
	    { "allterms1", test_allterms1 },
	    { "allterms2", test_allterms2 },
	    { "allterms3", test_allterms3 },
	    { "allterms4", test_allterms4 },
	    { "allterms5", test_allterms5 },
	    { "allterms6", test_allterms6 },
	    { "specialterms1", test_specialterms1 },
	    { "specialterms2", test_specialterms2 },
	    { "postlist1", test_postlist1 },
	    { "postlist2", test_postlist2 },
	    { "postlist3", test_postlist3 },
	    { "postlist4", test_postlist4 },
	    { "postlist5", test_postlist5 },
	    { "postlist6", test_postlist6 },
	    { "collfreq1", test_collfreq1 },
	    { "sortvalue1", test_sortvalue1 },
	    { "sortrel1", test_sortrel1 },
	    { "matchall1", test_matchall1 },
	    { "matchspy5", test_matchspy5 },
	    { "subclassablerefcount3", test_subclassablerefcount3 },
	    { "subclassablerefcount6", test_subclassablerefcount6 },
	    { "subclassablerefcount7", test_subclassablerefcount7 },
	    { "synonym1", test_synonym1 },
	    { "synonym2", test_synonym2 },
	    { "synonym3", test_synonym3 },
	    { "synonym4", test_synonym4 },
	    { "opmax1", test_opmax1 },
	    { "valuerange1", test_valuerange1 },
	    { "valuege1", test_valuege1 },
	    { "valuege2", test_valuege2 },
	    { "valuele1", test_valuele1 },
	    { "valuege4", test_valuege4 },
	    { "valuerange3", test_valuerange3 },
	    { "valuerange4", test_valuerange4 },
	    { "valuerangematchesub1", test_valuerangematchesub1 },
	    { "consistency3", test_consistency3 },
	    { "pctcutoff5", test_pctcutoff5 },
	    { "topercent3", test_topercent3 },
	    { "topercent4", test_topercent4 },
	    { "topercent5", test_topercent5 },
	    { "topercent6", test_topercent6 },
	    { "valueweightsource1", test_valueweightsource1 },
	    { "fixedweightsource1", test_fixedweightsource1 },
	    { "xor3", test_xor3 },
	    { "phrasealldocs1", test_phrasealldocs1 },
	    { "wildcard1", test_wildcard1 },
	    { "wildcard2", test_wildcard2 },
	    { "dualprefixwildcard1", test_dualprefixwildcard1 },
	    { "loosephrase1", test_loosephrase1 },
	    { "loosenear1", test_loosenear1 },
	    { "complexphrase1", test_complexphrase1 },
	    { "complexnear1", test_complexnear1 },
	    { "complexphrase2", test_complexphrase2 },
	    { "complexnear2", test_complexnear2 },
	    { "zeroestimate1", test_zeroestimate1 },
	    { "complexphrase3", test_complexphrase3 },
	    { "complexnear3", test_complexnear3 },
	    { "notandor1", test_notandor1 },
	    { "boolorbug1", test_boolorbug1 },
	    { "hoistnotbug1", test_hoistnotbug1 },
	    { "emptynot1", test_emptynot1 },
	    { "emptymaybe1", test_emptymaybe1 },
	    { "phraseweightcheckbug1", test_phraseweightcheckbug1 },
	    { "orphanedhint1", test_orphanedhint1 },
	    { "wildquery1", test_wildquery1 },
	    { "snippet1", test_snippet1 },
	    { "snippetstem1", test_snippetstem1 },
	    { "snippetphrase1", test_snippetphrase1 },
	    { "snippet_termcover1", test_snippet_termcover1 },
	    { "snippet_termcover2", test_snippet_termcover2 },
	    { "snippet_empty", test_snippet_empty },
	    { "snippet_start_nonspace", test_snippet_start_nonspace },
	    { "snippet_small_zerolength", test_snippet_small_zerolength },
	    { "snippet_empty_mset", test_snippet_empty_mset },
	    { "valuestream2", test_valuestream2 },
	    { "valuestream3", test_valuestream3 },
	    { "valuemapsource1", test_valuemapsource1 },
	    { "bm25weight4", test_bm25weight4 },
	    { "bm25weight5", test_bm25weight5 },
	    { "bm25plusweight2", test_bm25plusweight2 },
	    { "bm25plusweight3", test_bm25plusweight3 },
	    { "inl2weight3", test_inl2weight3 },
	    { "ifb2weight3", test_ifb2weight3 },
	    { "ineb2weight3", test_ineb2weight3 },
	    { "bb2weight3", test_bb2weight3 },
	    { "bb2weight4", test_bb2weight4 },
	    { "dlhweight1", test_dlhweight1 },
	    { "pl2weight3", test_pl2weight3 },
	    { "pl2plusweight4", test_pl2plusweight4 },
	    { "pl2plusweight5", test_pl2plusweight5 },
	    { "dphweight1", test_dphweight1 },
	    { "tfidfweight3", test_tfidfweight3 },
	    { "unigramlmweight4", test_unigramlmweight4 },
	    { "unigramlmweight5", test_unigramlmweight5 },
	    { "unigramlmweight7", test_unigramlmweight7 },
	    { "unigramlmweight8", test_unigramlmweight8 },
	    { "coordweight1", test_coordweight1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)&&!(properties&MULTI)) {
	static const test_desc tests[] = {
	    { "multidb3", test_multidb3 },
	    { "multidb4", test_multidb4 },
	    { "multidb5", test_multidb5 },
	    { "rsetmultidb1", test_rsetmultidb1 },
	    { "rsetmultidb3", test_rsetmultidb3 },
	    { "uuid1", test_uuid1 },
	    { "rsetmultidb2", test_rsetmultidb2 },
	    { "multiexpand1", test_multiexpand1 },
	    { "valuestream1", test_valuestream1 },
	    { "valuemapsource2", test_valuemapsource2 },
	    { "decvalwtsource4", test_decvalwtsource4 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)&&!(properties&MULTI)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "estimaterounding1", test_estimaterounding1 },
	    { "checkinitweight1", test_checkinitweight1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "matchdecider1", test_matchdecider1 },
	    { "matchdecider2", test_matchdecider2 },
	    { "matchdecider3", test_matchdecider3 },
	    { "consistency1", test_consistency1 },
	    { "userweight1", test_userweight1 },
	    { "valuesetmatchdecider2", test_valuesetmatchdecider2 },
	    { "matchspy1", test_matchspy1 },
	    { "checkzeromaxpartopt1", test_checkzeromaxpartopt1 },
	    { "externalsource4", test_externalsource4 },
	    { "postingsourcebounds1", test_postingsourcebounds1 },
	    { "sortfunctor1", test_sortfunctor1 },
	    { "changesorter1", test_changesorter1 },
	    { "sortfunctorempty1", test_sortfunctorempty1 },
	    { "checkstatsweight1", test_checkstatsweight1 },
	    { "checkstatsweight2", test_checkstatsweight2 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)&&!(properties&REMOTE)&&!(properties&MULTI)) {
	static const test_desc tests[] = {
	    { "pctcutoff4", test_pctcutoff4 },
	    { "externalsource1", test_externalsource1 },
	    { "externalsource3", test_externalsource3 },
	    { "changemaxweightsource1", test_changemaxweightsource1 },
	    { "emptyvalwtsource1", test_emptyvalwtsource1 },
	    { "checkstatsweight3", test_checkstatsweight3 },
	    { "checkstatsweight4", test_checkstatsweight4 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)&&!(properties&REMOTE)&&(properties&VALUESTATS)) {
	static const test_desc tests[] = {
	    { "sortfunctor3", test_sortfunctor3 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&BACKEND)&&!(properties&WRITABLE)) {
	static const test_desc tests[] = {
	    { "testlock2", test_testlock2 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&CHERT)) {
	static const test_desc tests[] = {
	    { "chertdatabasenotfounderror1", test_chertdatabasenotfounderror1 },
	    { "chertdatabaseopen1", test_chertdatabaseopen1 },
	    { "crashrecovery1", test_crashrecovery1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&CHERT)||(properties&GLASS)) {
	static const test_desc tests[] = {
	    { "lockfileumask1", test_lockfileumask1 },
	    { "lockfilefd0or1", test_lockfilefd0or1 },
	    { "lockfilealreadyopen1", test_lockfilealreadyopen1 },
	    { "testlock1", test_testlock1 },
	    { "testlock4", test_testlock4 },
	    { "failedreplace1", test_failedreplace1 },
	    { "failedreplace2", test_failedreplace2 },
	    { "blocksize1", test_blocksize1 },
	    { "readonlyparentdir1", test_readonlyparentdir1 },
	    { "dbfilefd012", test_dbfilefd012 },
	    { "cursorbug1", test_cursorbug1 },
	    { "getrevision1", test_getrevision1 },
	    { "lazytablebug1", test_lazytablebug1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&COMPACT)) {
	static const test_desc tests[] = {
	    { "compactmerge1", test_compactmerge1 },
	    { "compactstub1", test_compactstub1 },
	    { "compactstub2", test_compactstub2 },
	    { "compactstub3", test_compactstub3 },
	    { "compactstub4", test_compactstub4 },
	    { "compactempty1", test_compactempty1 },
	    { "compactoldmerge1", test_compactoldmerge1 },
	    { "compactoldstub1", test_compactoldstub1 },
	    { "compactoldstub2", test_compactoldstub2 },
	    { "compactoldstub3", test_compactoldstub3 },
	    { "compactoldstub4", test_compactoldstub4 },
	    { "compactoldempty1", test_compactoldempty1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&COMPACT)&&!(properties&CHERT)) {
	static const test_desc tests[] = {
	    { "compacttofd1", test_compacttofd1 },
	    { "compacttofd2", test_compacttofd2 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&COMPACT)&&(properties&GENERATED)) {
	static const test_desc tests[] = {
	    { "compactmultichunks1", test_compactmultichunks1 },
	    { "compactmissingtables1", test_compactmissingtables1 },
	    { "compactmergesynonym1", test_compactmergesynonym1 },
	    { "compactmultipass1", test_compactmultipass1 },
	    { "compactoldmultichunks1", test_compactoldmultichunks1 },
	    { "compactoldmissingtables1", test_compactoldmissingtables1 },
	    { "compactoldmergesynonym1", test_compactoldmergesynonym1 },
	    { "compactoldmultipass1", test_compactoldmultipass1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&COMPACT)&&(properties&GENERATED)&&!(properties&MULTI)) {
	static const test_desc tests[] = {
	    { "compactnorenumber1", test_compactnorenumber1 },
	    { "compactoldnorenumber1", test_compactoldnorenumber1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&COMPACT)&&(properties&WRITABLE)) {
	static const test_desc tests[] = {
	    { "compact1", test_compact1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&COMPACT)&&(properties&WRITABLE)&&!(properties&CHERT)) {
	static const test_desc tests[] = {
	    { "compactsingle1", test_compactsingle1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&GENERATED)) {
	static const test_desc tests[] = {
	    { "msize1", test_msize1 },
	    { "msize2", test_msize2 },
	    { "xordecay1", test_xordecay1 },
	    { "ordecay1", test_ordecay1 },
	    { "ordecay2", test_ordecay2 },
	    { "orcheck1", test_orcheck1 },
	    { "getuniqueterms1", test_getuniqueterms1 },
	    { "nopositionbug1", test_nopositionbug1 },
	    { "netstats1", test_netstats1 },
	    { "matchspy2", test_matchspy2 },
	    { "matchspy4", test_matchspy4 },
	    { "valuerange5", test_valuerange5 },
	    { "valuerange6", test_valuerange6 },
	    { "valuerange7", test_valuerange7 },
	    { "topercent7", test_topercent7 },
	    { "subdbwithoutpos1", test_subdbwithoutpos1 },
	    { "snippetmisc1", test_snippetmisc1 },
	    { "snippet_cjkngrams", test_snippet_cjkngrams },
	    { "dlhweight3", test_dlhweight3 },
	    { "dphweight3", test_dphweight3 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&GENERATED)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "matchtimelimit1", test_matchtimelimit1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&GENERATED)&&!(properties&REMOTE)&&!(properties&INMEMORY)) {
	static const test_desc tests[] = {
	    { "latlongpostingsource1", test_latlongpostingsource1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&GENERATED)&&(properties&POSITIONAL)) {
	static const test_desc tests[] = {
	    { "phrasebug1", test_phrasebug1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&GLASS)) {
	static const test_desc tests[] = {
	    { "notermlist1", test_notermlist1 },
	    { "getrevision2", test_getrevision2 },
	    { "glassdatabasenotfounderror1", test_glassdatabasenotfounderror1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&INMEMORY)) {
	static const test_desc tests[] = {
	    { "testlock3", test_testlock3 },
	    { "stubdb6", test_stubdb6 },
	    { "stubdb8", test_stubdb8 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&METADATA)) {
	static const test_desc tests[] = {
	    { "metadata3", test_metadata3 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&METADATA)&&!(properties&INMEMORY)) {
	static const test_desc tests[] = {
	    { "metadata2", test_metadata2 },
	    { "metadata4", test_metadata4 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&MULTI)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "postingsourceshardindex1", test_postingsourceshardindex1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&PATH)) {
	static const test_desc tests[] = {
	    { "stubdb1", test_stubdb1 },
	    { "stubdb2", test_stubdb2 },
	    { "stubdb3", test_stubdb3 },
	    { "stubdb5", test_stubdb5 },
	    { "stubdb9", test_stubdb9 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&POSITIONAL)) {
	static const test_desc tests[] = {
	    { "phrase3", test_phrase3 },
	    { "near1", test_near1 },
	    { "near2", test_near2 },
	    { "phrase1", test_phrase1 },
	    { "phrase2", test_phrase2 },
	    { "poslist1", test_poslist1 },
	    { "positfromtermit1", test_positfromtermit1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&POSITIONAL)&&(properties&WRITABLE)) {
	static const test_desc tests[] = {
	    { "poslist2", test_poslist2 },
	    { "poslist3", test_poslist3 },
	    { "poslistupdate1", test_poslistupdate1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "matchdecider4", test_matchdecider4 },
	    { "closedb6", test_closedb6 },
	    { "keepalive1", test_keepalive1 },
	    { "externalsource2", test_externalsource2 },
	    { "sortfunctorremote1", test_sortfunctorremote1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&REMOTE)&&(properties&WRITABLE)) {
	static const test_desc tests[] = {
	    { "protocolbug1", test_protocolbug1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&REPLICAS)) {
	static const test_desc tests[] = {
	    { "replicate1", test_replicate1 },
	    { "replicate2", test_replicate2 },
	    { "replicate3", test_replicate3 },
	    { "replicate4", test_replicate4 },
	    { "replicate5", test_replicate5 },
	    { "replicate6", test_replicate6 },
	    { "replicate7", test_replicate7 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&SINGLEFILE)) {
	static const test_desc tests[] = {
	    { "embedded1", test_embedded1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&SPELLING)) {
	static const test_desc tests[] = {
	    { "qp_spell1", test_qp_spell1 },
	    { "qp_spell2", test_qp_spell2 },
	    { "qp_spellwild1", test_qp_spellwild1 },
	    { "qp_spellpartial1", test_qp_spellpartial1 },
	    { "qp_synonym1", test_qp_synonym1 },
	    { "spell1", test_spell1 },
	    { "spell2", test_spell2 },
	    { "spell3", test_spell3 },
	    { "spell4", test_spell4 },
	    { "spell5", test_spell5 },
	    { "spell6", test_spell6 },
	    { "spell7", test_spell7 },
	    { "spell8", test_spell8 },
	    { "tg_spell1", test_tg_spell1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&SPELLING)||(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "spell0", test_spell0 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&SYNONYMS)) {
	static const test_desc tests[] = {
	    { "qpsynonympartial1", test_qpsynonympartial1 },
	    { "qp_synonym2", test_qp_synonym2 },
	    { "qp_synonym3", test_qp_synonym3 },
	    { "qp_scale1", test_qp_scale1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&TRANSACTIONS)) {
	static const test_desc tests[] = {
	    { "closedb5", test_closedb5 },
	    { "badtransaction1", test_badtransaction1 },
	    { "committransaction1", test_committransaction1 },
	    { "canceltransaction1", test_canceltransaction1 },
	    { "canceltransaction2", test_canceltransaction2 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&TRANSACTIONS)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "nodocs1", test_nodocs1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&TRANSACTIONS)&&(properties&PATH)) {
	static const test_desc tests[] = {
	    { "canceltransaction3", test_canceltransaction3 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&TRANSACTIONS)&&(properties&VALUESTATS)) {
	static const test_desc tests[] = {
	    { "valuestats2", test_valuestats2 },
	    { "valuestats4", test_valuestats4 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&VALUESTATS)) {
	static const test_desc tests[] = {
	    { "valueweightsource2", test_valueweightsource2 },
	    { "valuestats3", test_valuestats3 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&VALUESTATS)&&!(properties&MULTI)) {
	static const test_desc tests[] = {
	    { "valueweightsource3", test_valueweightsource3 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)) {
	static const test_desc tests[] = {
	    { "alldocspl1", test_alldocspl1 },
	    { "alldocspl2", test_alldocspl2 },
	    { "totaldoclen1", test_totaldoclen1 },
	    { "exceed32bitcombineddb1", test_exceed32bitcombineddb1 },
	    { "modifiedpostlist1", test_modifiedpostlist1 },
	    { "doclenaftercommit1", test_doclenaftercommit1 },
	    { "valuesaftercommit1", test_valuesaftercommit1 },
	    { "replacedoc8", test_replacedoc8 },
	    { "newfreelistblock1", test_newfreelistblock1 },
	    { "splitpostings1", test_splitpostings1 },
	    { "closedb7", test_closedb7 },
	    { "metadata1", test_metadata1 },
	    { "metadata5", test_metadata5 },
	    { "valuerange2", test_valuerange2 },
	    { "possubqueries1", test_possubqueries1 },
	    { "qp_flag_wildcard1", test_qp_flag_wildcard1 },
	    { "qp_flag_wildcard2", test_qp_flag_wildcard2 },
	    { "qp_flag_wildcard3", test_qp_flag_wildcard3 },
	    { "qp_flag_partial1", test_qp_flag_partial1 },
	    { "qp_value_range3", test_qp_value_range3 },
	    { "qp_range3", test_qp_range3 },
	    { "qp_stopword_group1", test_qp_stopword_group1 },
	    { "modtermwdf1", test_modtermwdf1 },
	    { "bigoaddvalue1", test_bigoaddvalue1 },
	    { "serialise_document2", test_serialise_document2 },
	    { "decvalwtsource1", test_decvalwtsource1 },
	    { "decvalwtsource2", test_decvalwtsource2 },
	    { "decvalwtsource3", test_decvalwtsource3 },
	    { "decvalwtsource5", test_decvalwtsource5 },
	    { "adddoc1", test_adddoc1 },
	    { "adddoc3", test_adddoc3 },
	    { "adddoc4", test_adddoc4 },
	    { "adddoc6", test_adddoc6 },
	    { "implicitendsession1", test_implicitendsession1 },
	    { "databaseassign1", test_databaseassign1 },
	    { "deldoc1", test_deldoc1 },
	    { "deldoc2", test_deldoc2 },
	    { "deldoc3", test_deldoc3 },
	    { "deldoc4", test_deldoc4 },
	    { "deldoc5", test_deldoc5 },
	    { "deldoc6", test_deldoc6 },
	    { "replacedoc1", test_replacedoc1 },
	    { "replacedoc2", test_replacedoc2 },
	    { "replacedoc3", test_replacedoc3 },
	    { "replacedoc4", test_replacedoc4 },
	    { "replacedoc5", test_replacedoc5 },
	    { "replacedoc6", test_replacedoc6 },
	    { "uniqueterm1", test_uniqueterm1 },
	    { "allpostlist2", test_allpostlist2 },
	    { "emptyterm2", test_emptyterm2 },
	    { "phraseorneartoand1", test_phraseorneartoand1 },
	    { "longpositionlist1", test_longpositionlist1 },
	    { "consistency2", test_consistency2 },
	    { "nomoredocids1", test_nomoredocids1 },
	    { "termtoolong1", test_termtoolong1 },
	    { "postlist7", test_postlist7 },
	    { "modifyvalues1", test_modifyvalues1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&!(properties&INMEMORY)) {
	static const test_desc tests[] = {
	    { "qpmemoryleak1", test_qpmemoryleak1 },
	    { "closedb4", test_closedb4 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&!(properties&INMEMORY)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "replacedoc7", test_replacedoc7 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&!(properties&INMEMORY)&&!(properties&REMOTE)&&!(properties&MULTI)) {
	static const test_desc tests[] = {
	    { "databasemodified1", test_databasemodified1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&!(properties&MULTI)) {
	static const test_desc tests[] = {
	    { "adddoc2", test_adddoc2 },
	    { "adddoc5", test_adddoc5 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&!(properties&REMOTE)) {
	static const test_desc tests[] = {
	    { "sortfunctor2", test_sortfunctor2 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&(properties&METADATA)) {
	static const test_desc tests[] = {
	    { "closedb10", test_closedb10 },
	    { "writeread1", test_writeread1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&(properties&PATH)) {
	static const test_desc tests[] = {
	    { "retrylock1", test_retrylock1 },
	    { "closedb2", test_closedb2 },
	    { "cursordelbug1", test_cursordelbug1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&(properties&SPELLING)) {
	static const test_desc tests[] = {
	    { "closedb8", test_closedb8 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&(properties&SYNONYMS)) {
	static const test_desc tests[] = {
	    { "closedb9", test_closedb9 },
	    { "synonymitor1", test_synonymitor1 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
    if ((properties&WRITABLE)&&(properties&VALUESTATS)) {
	static const test_desc tests[] = {
	    { "valuestats1", test_valuestats1 },
	    { "valueweightsource5", test_valueweightsource5 },
	    { 0, 0 }
	};
	result = max(result, test_driver::run(tests));
    }
