//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap;

@interface ShortVideoDownloadWrap : NSObject
{
    CMessageWrap *m_msgWrap;
    BOOL isAutoDownload;
    BOOL hasTryDownloadThumb;
}

@property(nonatomic) BOOL hasTryDownloadThumb; // @synthesize hasTryDownloadThumb;
@property(nonatomic) BOOL isAutoDownload; // @synthesize isAutoDownload;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
- (void).cxx_destruct;
- (id)init;

@end

