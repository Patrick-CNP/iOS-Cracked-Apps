//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeImageView, KGThemeLabel, KGThemeLine, NSString, UIImage;

@interface KGMusicToolsTableViewCell : UITableViewCell
{
    KGThemeImageView *_iconView;
    KGThemeLabel *_nameLabel;
    KGThemeImageView *_arrowIconView;
    KGThemeLine *_bottomLine;
    _Bool _showBottomLine;
    NSString *_toolsTitle;
    UIImage *_toolsIcon;
}

@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(retain, nonatomic) UIImage *toolsIcon; // @synthesize toolsIcon=_toolsIcon;
@property(copy, nonatomic) NSString *toolsTitle; // @synthesize toolsTitle=_toolsTitle;
- (void).cxx_destruct;
- (void)onChangeTheme:(id)arg1;
- (void)viewInit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
