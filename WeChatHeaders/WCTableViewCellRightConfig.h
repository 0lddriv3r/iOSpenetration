//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface WCTableViewCellRightConfig : NSObject
{
    BOOL _withRedDot;
    BOOL _selected;
    BOOL _accssoryOn;
    unsigned int _mode;
    NSString *_detail;
    UIImage *_image;
    unsigned int _accessoryType;
    UIColor *_accessoryColor;
    SEL _accssoryAction;
    id _accssoryTarget;
}

@property(nonatomic) BOOL accssoryOn; // @synthesize accssoryOn=_accssoryOn;
@property(nonatomic) __weak id accssoryTarget; // @synthesize accssoryTarget=_accssoryTarget;
@property(nonatomic) SEL accssoryAction; // @synthesize accssoryAction=_accssoryAction;
@property(retain, nonatomic) UIColor *accessoryColor; // @synthesize accessoryColor=_accessoryColor;
@property(nonatomic) unsigned int accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL withRedDot; // @synthesize withRedDot=_withRedDot;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)addAccessoryTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
