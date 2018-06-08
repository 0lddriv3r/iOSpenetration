//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QBPostRequestDataManager : NSObject
{
    NSMutableDictionary *_dicData;
}

+ (void)setHTTPBodyElementStream:(id)arg1 forRequest:(id)arg2;
+ (void)setHTTPBodyElementData:(id)arg1 forRequest:(id)arg2;
+ (id)sharedInstance;
@property(retain) NSMutableDictionary *dicData; // @synthesize dicData=_dicData;
- (void).cxx_destruct;
- (void)removeAllPostData;
- (id)arrayFromKey:(id)arg1;
- (id)arrayFromContainerWithKey:(id)arg1;
- (void)removeFirstDataForURLString:(id)arg1;
- (void)fillElement:(id)arg1 forRandomString:(int)arg2 URLString:(id)arg3;
- (id)postDataElementForURLString:(id)arg1;
- (void)addPostDataElement:(id)arg1 forURLString:(id)arg2;
- (id)init;

@end

