//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString, WCCardDetailTable, WCCardFieldItem;

@interface WCCardDataCardInfo : MMObject
{
    BOOL _isCommomCard;
    BOOL _isLocationAuthorized;
    unsigned long _codeType;
    NSString *_code;
    unsigned long _status;
    unsigned long _avilNumber;
    unsigned long _stockNumber;
    unsigned long _limitNumber;
    NSString *_reportUrl;
    NSArray *_secondaryFields;
    WCCardFieldItem *_thirdField;
    NSArray *_cellList0;
    NSArray *_cellList1;
    NSArray *_cellList2;
    NSArray *_actionSheetList;
    WCCardFieldItem *_cardListField;
    WCCardFieldItem *_operateField;
    WCCardFieldItem *_limitField;
    NSString *_signNumber;
    WCCardFieldItem *_unavailableQrcodeField;
    NSString *fromUserName;
    WCCardDetailTable *_detailTable;
    NSString *_backgroundPicUrl;
    WCCardFieldItem *_giftingInfoField;
}

+ (void)initialize;
@property(retain, nonatomic) WCCardFieldItem *giftingInfoField; // @synthesize giftingInfoField=_giftingInfoField;
@property(retain, nonatomic) NSString *backgroundPicUrl; // @synthesize backgroundPicUrl=_backgroundPicUrl;
@property(retain, nonatomic) WCCardDetailTable *detailTable; // @synthesize detailTable=_detailTable;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
@property(nonatomic) BOOL isLocationAuthorized; // @synthesize isLocationAuthorized=_isLocationAuthorized;
@property(nonatomic) BOOL isCommomCard; // @synthesize isCommomCard=_isCommomCard;
@property(retain, nonatomic) WCCardFieldItem *unavailableQrcodeField; // @synthesize unavailableQrcodeField=_unavailableQrcodeField;
@property(retain, nonatomic) NSString *signNumber; // @synthesize signNumber=_signNumber;
@property(retain, nonatomic) WCCardFieldItem *limitField; // @synthesize limitField=_limitField;
@property(retain, nonatomic) WCCardFieldItem *operateField; // @synthesize operateField=_operateField;
@property(retain, nonatomic) WCCardFieldItem *cardListField; // @synthesize cardListField=_cardListField;
@property(retain, nonatomic) NSArray *actionSheetList; // @synthesize actionSheetList=_actionSheetList;
@property(retain, nonatomic) NSArray *cellList2; // @synthesize cellList2=_cellList2;
@property(retain, nonatomic) NSArray *cellList1; // @synthesize cellList1=_cellList1;
@property(retain, nonatomic) NSArray *cellList0; // @synthesize cellList0=_cellList0;
@property(retain, nonatomic) WCCardFieldItem *thirdField; // @synthesize thirdField=_thirdField;
@property(retain, nonatomic) NSArray *secondaryFields; // @synthesize secondaryFields=_secondaryFields;
@property(retain, nonatomic) NSString *reportUrl; // @synthesize reportUrl=_reportUrl;
@property(nonatomic) unsigned long limitNumber; // @synthesize limitNumber=_limitNumber;
@property(nonatomic) unsigned long stockNumber; // @synthesize stockNumber=_stockNumber;
@property(nonatomic) unsigned long avilNumber; // @synthesize avilNumber=_avilNumber;
@property(nonatomic) unsigned long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) unsigned long codeType; // @synthesize codeType=_codeType;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end
