//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WeChatEmotionSectionInfo : MMObject
{
    unsigned int _sectionType;
    int _numOfItems;
    int _scene;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) int numOfItems; // @synthesize numOfItems=_numOfItems;
@property(nonatomic) unsigned int sectionType; // @synthesize sectionType=_sectionType;
- (void).cxx_destruct;

@end

