//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class NSData, NSString;

@interface QBGuidReq : QBJceObjectV2
{
    NSString *jcev2_p_0_o_sQua;
    NSString *jcev2_p_1_o_sImei;
    NSString *jcev2_p_2_o_sImsi;
    NSString *jcev2_p_3_o_sVenderId;
    NSString *jcev2_p_4_o_sAdId;
    NSData *jcev2_p_5_o_vValidation;
    int jcev2_p_6_o_eRequestTriggeredType;
    NSString *jcev2_p_7_o_sMac;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=sMac, setter=setSMac:) NSString *jcev2_p_7_o_sMac; // @synthesize jcev2_p_7_o_sMac;
@property(nonatomic, getter=eRequestTriggeredType, setter=setERequestTriggeredType:) int jcev2_p_6_o_eRequestTriggeredType; // @synthesize jcev2_p_6_o_eRequestTriggeredType;
@property(retain, nonatomic, getter=vValidation, setter=setVValidation:) NSData *jcev2_p_5_o_vValidation; // @synthesize jcev2_p_5_o_vValidation;
@property(retain, nonatomic, getter=sAdId, setter=setSAdId:) NSString *jcev2_p_4_o_sAdId; // @synthesize jcev2_p_4_o_sAdId;
@property(retain, nonatomic, getter=sVenderId, setter=setSVenderId:) NSString *jcev2_p_3_o_sVenderId; // @synthesize jcev2_p_3_o_sVenderId;
@property(retain, nonatomic, getter=sImsi, setter=setSImsi:) NSString *jcev2_p_2_o_sImsi; // @synthesize jcev2_p_2_o_sImsi;
@property(retain, nonatomic, getter=sImei, setter=setSImei:) NSString *jcev2_p_1_o_sImei; // @synthesize jcev2_p_1_o_sImei;
@property(retain, nonatomic, getter=sQua, setter=setSQua:) NSString *jcev2_p_0_o_sQua; // @synthesize jcev2_p_0_o_sQua;
- (void).cxx_destruct;
- (id)init;

@end

