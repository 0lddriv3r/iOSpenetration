//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface SendMessageToWXReq : BaseReq
{
    BOOL bText;
    NSString *text;
    WXMediaMessage *message;
    int scene;
}

@property(nonatomic) int scene; // @synthesize scene;
@property(nonatomic) BOOL bText; // @synthesize bText;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (id)init;

@end

