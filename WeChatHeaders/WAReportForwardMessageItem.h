//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportForwardMessageItem : WAReportBaseItem
{
    NSString *_currentTitle;
    NSString *_sharePath;
    NSString *_shareTitle;
    NSString *_shareId;
    int _userCount;
    NSString *_userName;
    NSString *_webViewUrl;
}

@property(copy, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int userCount; // @synthesize userCount=_userCount;
@property(copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *sharePath; // @synthesize sharePath=_sharePath;
@property(copy, nonatomic) NSString *currentTitle; // @synthesize currentTitle=_currentTitle;
- (void).cxx_destruct;
- (id)reportString;

@end
