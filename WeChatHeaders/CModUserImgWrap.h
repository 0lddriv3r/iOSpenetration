//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CModUserImgWrap : NSObject
{
    unsigned long m_uiImgType;
    NSData *m_dtImg;
    NSString *m_nsHDImgMD5;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
}

@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(nonatomic) unsigned long m_uiImgType; // @synthesize m_uiImgType;
@property(retain, nonatomic) NSString *m_nsHDImgMD5; // @synthesize m_nsHDImgMD5;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

