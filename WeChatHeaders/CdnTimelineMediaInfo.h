//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CdnTimelineMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    BOOL m_bSinglePic;
    BOOL m_bUseWebp;
    BOOL m_bUseVCodec;
    BOOL m_bUseWxpc;
}

@property(nonatomic) BOOL m_bUseWxpc; // @synthesize m_bUseWxpc;
@property(nonatomic) BOOL m_bUseVCodec; // @synthesize m_bUseVCodec;
@property(nonatomic) BOOL m_bUseWebp; // @synthesize m_bUseWebp;
@property(nonatomic) BOOL m_bSinglePic; // @synthesize m_bSinglePic;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
- (void).cxx_destruct;

@end

