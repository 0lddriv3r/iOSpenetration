//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSDictionary, NSString, UIColor;

@interface WAScrollView : UIScrollView
{
    NSString *_userData;
    unsigned long _viewId;
    NSDictionary *_style;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSDictionary *style; // @synthesize style=_style;
@property(nonatomic) unsigned long viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (void)setViewStyle:(id)arg1;
- (void)layoutSubviews;

@end

