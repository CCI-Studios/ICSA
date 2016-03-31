<?php
/**
 * @file
 * views_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function views_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_address'.
  $field_bases['field_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_address',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_annual_report_financial_st'.
  $field_bases['field_annual_report_financial_st'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_annual_report_financial_st',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_application_letter'.
  $field_bases['field_application_letter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_application_letter',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_article_of_incorporation'.
  $field_bases['field_article_of_incorporation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_article_of_incorporation',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_category'.
  $field_bases['field_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'members_area',
          'parent' => 0,
        ),
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_cell_phone'.
  $field_bases['field_cell_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cell_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_country'.
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_date'.
  $field_bases['field_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'profile2_private' => FALSE,
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_description'.
  $field_bases['field_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_executive_director_or_pres'.
  $field_bases['field_executive_director_or_pres'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_executive_director_or_pres',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_fax'.
  $field_bases['field_fax'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fax',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_fax_mem'.
  $field_bases['field_fax_mem'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fax_mem',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_members'.
  $field_bases['field_file_members'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_members',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_image_members'.
  $field_bases['field_image_members'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_members',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'profile2_private' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_letter_of_sponsorship'.
  $field_bases['field_letter_of_sponsorship'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_letter_of_sponsorship',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_membership_list'.
  $field_bases['field_membership_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_membership_list',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_nationality'.
  $field_bases['field_nationality'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nationality',
    'indexes' => array(
      'iso2' => array(
        0 => 'iso2',
      ),
    ),
    'locked' => 0,
    'module' => 'countries',
    'settings' => array(
      'continents' => array(),
      'countries' => array(
        'AD' => 'AD',
        'AE' => 'AE',
        'AF' => 'AF',
        'AG' => 'AG',
        'AI' => 'AI',
        'AL' => 'AL',
        'AM' => 'AM',
        'AN' => 'AN',
        'AO' => 'AO',
        'AQ' => 'AQ',
        'AR' => 'AR',
        'AS' => 'AS',
        'AT' => 'AT',
        'AU' => 'AU',
        'AW' => 'AW',
        'AX' => 'AX',
        'AZ' => 'AZ',
        'BA' => 'BA',
        'BB' => 'BB',
        'BD' => 'BD',
        'BE' => 'BE',
        'BF' => 'BF',
        'BG' => 'BG',
        'BH' => 'BH',
        'BI' => 'BI',
        'BJ' => 'BJ',
        'BL' => 'BL',
        'BM' => 'BM',
        'BN' => 'BN',
        'BO' => 'BO',
        'BQ' => 'BQ',
        'BR' => 'BR',
        'BS' => 'BS',
        'BT' => 'BT',
        'BV' => 'BV',
        'BW' => 'BW',
        'BY' => 'BY',
        'BZ' => 'BZ',
        'CA' => 'CA',
        'CC' => 'CC',
        'CD' => 'CD',
        'CF' => 'CF',
        'CG' => 'CG',
        'CH' => 'CH',
        'CI' => 'CI',
        'CK' => 'CK',
        'CL' => 'CL',
        'CM' => 'CM',
        'CN' => 'CN',
        'CO' => 'CO',
        'CR' => 'CR',
        'CU' => 'CU',
        'CV' => 'CV',
        'CW' => 'CW',
        'CX' => 'CX',
        'CY' => 'CY',
        'CZ' => 'CZ',
        'DE' => 'DE',
        'DJ' => 'DJ',
        'DK' => 'DK',
        'DM' => 'DM',
        'DO' => 'DO',
        'DZ' => 'DZ',
        'EC' => 'EC',
        'EE' => 'EE',
        'EG' => 'EG',
        'EH' => 'EH',
        'ER' => 'ER',
        'ES' => 'ES',
        'ET' => 'ET',
        'FI' => 'FI',
        'FJ' => 'FJ',
        'FK' => 'FK',
        'FM' => 'FM',
        'FO' => 'FO',
        'FR' => 'FR',
        'GA' => 'GA',
        'GB' => 'GB',
        'GD' => 'GD',
        'GE' => 'GE',
        'GF' => 'GF',
        'GG' => 'GG',
        'GH' => 'GH',
        'GI' => 'GI',
        'GL' => 'GL',
        'GM' => 'GM',
        'GN' => 'GN',
        'GP' => 'GP',
        'GQ' => 'GQ',
        'GR' => 'GR',
        'GS' => 'GS',
        'GT' => 'GT',
        'GU' => 'GU',
        'GW' => 'GW',
        'GY' => 'GY',
        'HK' => 'HK',
        'HM' => 'HM',
        'HN' => 'HN',
        'HR' => 'HR',
        'HT' => 'HT',
        'HU' => 'HU',
        'ID' => 'ID',
        'IE' => 'IE',
        'IL' => 'IL',
        'IM' => 'IM',
        'IN' => 'IN',
        'IO' => 'IO',
        'IQ' => 'IQ',
        'IR' => 'IR',
        'IS' => 'IS',
        'IT' => 'IT',
        'JE' => 'JE',
        'JM' => 'JM',
        'JO' => 'JO',
        'JP' => 'JP',
        'KE' => 'KE',
        'KG' => 'KG',
        'KH' => 'KH',
        'KI' => 'KI',
        'KM' => 'KM',
        'KN' => 'KN',
        'KP' => 'KP',
        'KR' => 'KR',
        'KW' => 'KW',
        'KY' => 'KY',
        'KZ' => 'KZ',
        'LA' => 'LA',
        'LB' => 'LB',
        'LC' => 'LC',
        'LI' => 'LI',
        'LK' => 'LK',
        'LR' => 'LR',
        'LS' => 'LS',
        'LT' => 'LT',
        'LU' => 'LU',
        'LV' => 'LV',
        'LY' => 'LY',
        'MA' => 'MA',
        'MC' => 'MC',
        'MD' => 'MD',
        'ME' => 'ME',
        'MF' => 'MF',
        'MG' => 'MG',
        'MH' => 'MH',
        'MK' => 'MK',
        'ML' => 'ML',
        'MM' => 'MM',
        'MN' => 'MN',
        'MO' => 'MO',
        'MP' => 'MP',
        'MQ' => 'MQ',
        'MR' => 'MR',
        'MS' => 'MS',
        'MT' => 'MT',
        'MU' => 'MU',
        'MV' => 'MV',
        'MW' => 'MW',
        'MX' => 'MX',
        'MY' => 'MY',
        'MZ' => 'MZ',
        'NA' => 'NA',
        'NC' => 'NC',
        'NE' => 'NE',
        'NF' => 'NF',
        'NG' => 'NG',
        'NI' => 'NI',
        'NL' => 'NL',
        'NO' => 'NO',
        'NP' => 'NP',
        'NR' => 'NR',
        'NU' => 'NU',
        'NZ' => 'NZ',
        'OM' => 'OM',
        'PA' => 'PA',
        'PE' => 'PE',
        'PF' => 'PF',
        'PG' => 'PG',
        'PH' => 'PH',
        'PK' => 'PK',
        'PL' => 'PL',
        'PM' => 'PM',
        'PN' => 'PN',
        'PR' => 'PR',
        'PS' => 'PS',
        'PT' => 'PT',
        'PW' => 'PW',
        'PY' => 'PY',
        'QA' => 'QA',
        'RE' => 'RE',
        'RO' => 'RO',
        'RS' => 'RS',
        'RU' => 'RU',
        'RW' => 'RW',
        'SA' => 'SA',
        'SB' => 'SB',
        'SC' => 'SC',
        'SD' => 'SD',
        'SE' => 'SE',
        'SG' => 'SG',
        'SH' => 'SH',
        'SI' => 'SI',
        'SJ' => 'SJ',
        'SK' => 'SK',
        'SL' => 'SL',
        'SM' => 'SM',
        'SN' => 'SN',
        'SO' => 'SO',
        'SR' => 'SR',
        'SS' => 'SS',
        'ST' => 'ST',
        'SV' => 'SV',
        'SX' => 'SX',
        'SY' => 'SY',
        'SZ' => 'SZ',
        'TC' => 'TC',
        'TD' => 'TD',
        'TF' => 'TF',
        'TG' => 'TG',
        'TH' => 'TH',
        'TJ' => 'TJ',
        'TK' => 'TK',
        'TL' => 'TL',
        'TM' => 'TM',
        'TN' => 'TN',
        'TO' => 'TO',
        'TR' => 'TR',
        'TT' => 'TT',
        'TV' => 'TV',
        'TW' => 'TW',
        'TZ' => 'TZ',
        'UA' => 'UA',
        'UG' => 'UG',
        'UM' => 'UM',
        'US' => 'US',
        'UY' => 'UY',
        'UZ' => 'UZ',
        'VA' => 'VA',
        'VC' => 'VC',
        'VE' => 'VE',
        'VG' => 'VG',
        'VI' => 'VI',
        'VN' => 'VN',
        'VU' => 'VU',
        'WF' => 'WF',
        'WS' => 'WS',
        'YE' => 'YE',
        'YT' => 'YT',
        'ZA' => 'ZA',
        'ZM' => 'ZM',
        'ZW' => 'ZW',
      ),
      'enabled' => 1,
      'profile2_private' => 0,
      'size' => 5,
    ),
    'translatable' => 0,
    'type' => 'country',
  );

  // Exported field_base: 'field_office_phone'.
  $field_bases['field_office_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_office_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_organization'.
  $field_bases['field_organization'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_phone_number'.
  $field_bases['field_phone_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone_number',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_type'.
  $field_bases['field_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'membership_type',
          'parent' => 0,
        ),
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_url'.
  $field_bases['field_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_url',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'url',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'url',
  );

  return $field_bases;
}
