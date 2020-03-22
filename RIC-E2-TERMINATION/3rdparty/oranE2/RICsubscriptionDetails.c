/*
 *
 * Copyright 2020 AT&T Intellectual Property
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../asnTextFiles/e2ap-v01.00.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RICsubscriptionDetails.h"

static asn_TYPE_member_t asn_MBR_RICsubscriptionDetails_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscriptionDetails, ricEventTriggerDefinition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICeventTriggerDefinition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ricEventTriggerDefinition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscriptionDetails, ricAction_ToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactions_ToBeSetup_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ricAction-ToBeSetup-List"
		},
};
static const ber_tlv_tag_t asn_DEF_RICsubscriptionDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICsubscriptionDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricEventTriggerDefinition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ricAction-ToBeSetup-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionDetails_specs_1 = {
	sizeof(struct RICsubscriptionDetails),
	offsetof(struct RICsubscriptionDetails, _asn_ctx),
	asn_MAP_RICsubscriptionDetails_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICsubscriptionDetails = {
	"RICsubscriptionDetails",
	"RICsubscriptionDetails",
	&asn_OP_SEQUENCE,
	asn_DEF_RICsubscriptionDetails_tags_1,
	sizeof(asn_DEF_RICsubscriptionDetails_tags_1)
		/sizeof(asn_DEF_RICsubscriptionDetails_tags_1[0]), /* 1 */
	asn_DEF_RICsubscriptionDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICsubscriptionDetails_tags_1)
		/sizeof(asn_DEF_RICsubscriptionDetails_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RICsubscriptionDetails_1,
	2,	/* Elements count */
	&asn_SPC_RICsubscriptionDetails_specs_1	/* Additional specs */
};
