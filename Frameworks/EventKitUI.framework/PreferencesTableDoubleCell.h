/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;



@interface PreferencesTableDoubleCell : UITableViewCell 
{
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    unsigned int _valuePlaceholder : 2;
}

@property(retain,readonly) UILabel *textLabel2;
@property(retain,readonly) UILabel *detailTextLabel2;


- (void)dealloc;
- (void)layoutSubviews;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;
- (id)textLabel2;
- (id)detailTextLabel2;
- (void)setDetailTextIsPlaceholder:(BOOL)arg1;
- (void)setDetailText2IsPlaceholder:(BOOL)arg1;
- (BOOL)detailTextIsPlaceholder;
- (BOOL)detailText2IsPlaceholder;

@end