typedef struct{
  char English[88];
  char Chinese[88];
}Word;
/*这个不能作为接口文件否则如果被其他文件include就会被认为word重定义*/
Word word[]={{"a [ei]","art.一(个);每一(个);(同类事物中)任一个"}
                   ,{"abandon [ə'bændən]","vt.离弃,丢弃;遗弃,抛弃;放弃"}
                   ,{"abdomen [æb'dəumen]","n.腹,下腹(胸部到腿部的部分)"}
                   ,{"abatement [ə'beitmənt]","n.减(免)税,打折扣,冲销"}
                   ,{"abide [ə'baid]","vi.(abode,abided)(by)遵守;坚持;vt.忍受,容忍"}
                   ,{"ability [ə'biliti]","n.能力;本领;才能,才干;专门技能,天资"}
                   ,{"able ['eibl]","a.有(能力、时间、知识等)做某事,有本事的"}
                   ,{"abnormal [æb'nɔ:məl]","a.反常的,不正常的,不规则的"}
                   ,{"aboard [ə'bɔ:d]","ad.&prep.在船(飞机、车)上;ad.上船(飞机、车)"}
                   ,{"abolish [ə'bɔliʃ]","vt.废除(法律、习惯等);取消"}
                   ,{"abound [ə'baund]","vi.大量存在;(~in,~with)充满,富于"}
                   ,{"about [ə'baut]","ad.在周围;大约 prep.关于;在周围 a.准备"}
                   ,{"above [ə'bʌv]","a.上述的 ad.在上面,在前文 prep.在..之上,高于"}
                   ,{"abroad [ə'brɔ:d]","ad.到国外,在国外;在传播,在流传"}
                   ,{"abrupt [ə'brʌpt]","a.突然的,出其不意的;(行为等)粗鲁无礼的"}
                   ,{"absence ['æbsəns]","n.缺乏,不存在;缺席,不在场;缺席的时间"}
                   ,{"absent ['æbsənt,æb'sent]","a.缺席的;缺乏的,不存在的;心不在焉的"}
                   ,{"absolute ['æbsəlju:t]","a.绝对的,完全的;确实的,肯定的"}
                   ,{"absorb [əb'sɔ:b,-'zɔ:b]","vt.吸收(水、光、蒸汽等);使全神贯注;吞并/兼并"}
                   ,{"abstract ['æbstrækt]","a.抽象的 n.摘要,文摘,梗概 vt.提取;摘录要点"}
                   ,{"absurd [əb'sə:d]","a.荒谬的,荒诞的,荒唐可笑的;不合理的"}
                   ,{"abundance [ə'bʌndəns]","n.丰富,充裕,大量"}
                   ,{"abundant [ə'bʌndənt]","a.大量(充足)的;(in)丰富(富裕)的"}
                   ,{"abuse [ə'bju:z,ə'bju:s]","vt.滥用;虐待,辱骂;诋毁 n.滥用;恶习;弊端"}
                   ,{"academic [,ækə'demik]","a.学院的,学术性的;大学的;理论的"}
                   ,{"academy [ə'kædəmi]","n.(高等)专科院校;学术社团,协会,研究院"}
                   ,{"accelerate [ək'seləreit]","v.使加速,使增速,促进 vi.加快,增加"}
                   ,{"accent ['æksənt,æk'sent]","n.口音,腔调;重音(符号)vt.重读"}
                   ,{"accept [ək'sept]","vt.接受,领受;认可,同意 vi.同意,认可"}
                   ,{"acceptable [ək'septəbl]","adj.可接受的, 合意的"}
                   ,{"acceptance [ək'septəns]","n.接受,接收,验收,接纳;承认,认可"}
                   ,{"access ['ækses]","n.进入;接入;到达;享用权;入口 vi.存取"}
                   ,{"accessory [ək'sesəri]","n.附件,附属品;(为全套衣服增加美感的)服饰"}
                   ,{"accident ['æksidənt]","n.意外遭遇,事故;意外(因素)"}
                   ,{"accidental [,æksi'dentəl]","a.偶然的;意外的;无意中的"}
                   ,{"acclaim [ə'kleim]","v.向...欢呼,公认 n.欢呼,喝彩,称赞"}
                   ,{"accommodate [ə'kɔmədeit]","vt.向„提供住处;对...予以照顾性考虑"}
                   ,{"accommodation [ə,kɔmə'deiʃən]","n.(accommodations) 住宿,留宿;膳宿供应"}
                   ,{"accompany [ə'kʌmpəni]","v.陪伴,陪同;伴随,和...一起发生,伴奏"}
                   ,{"accomplish [ə'kʌmpliʃ,ə'kɔm-]","v.实现(计划等);达到(目的);完成(任务)"}
                   ,{"accord [ə'kɔ:d]","vt.给予(欢迎、称颂等) vi.&n.符合,一致"}
                   ,{"accordance [ə'kɔ:dəns]","n.一致,和谐,符合"}
                   ,{"according to [ə'kɔ:diŋ tu]","prep.据/照...(所说、所写);按...,视..."}
                   ,{"accordingly [ə'kɔ:diŋli]","ad.相应地,照着办,按照;于是,因此"}
                   ,{"account [ə'kaunt]","a.叙述,说明;账目,账户 vi.说明,解释"}
                   ,{"accountant [ə'kauntənt]","n.会计人员,会计师"}
                   ,{"accumulate [ə'kju:mjuleit]","vt.堆积,积累,积聚 vi.累积,聚积"}
                   ,{"accuracy ['ækjurəsi]","n.准确(性);精确;准确度"}
                   ,{"accurate ['ækjurət]","a.正确无误的;准确的,精确的"}
                   ,{"accuse [ə'kju:z]","vt.控告,指责 vi.指控,指责"}
                   ,{"accustomed [ə'kʌstəmd]","a.惯常的;习惯的,适应的(一般作表语)"}
                   ,{"ache [eik]","vi.痛;哀怜 n.(指连续)疼痛、酸痛"}
                   ,{"achieve [ə'tʃi:v]","vt.实现,完成;达到,得到 vi.达到预期目的"}
                   ,{"acid ['æsid]","n.酸,酸性物质 a.酸的,酸味的;尖刻的"}
                   ,{"acknowledge [ək'nɔlidʒ]","vt.承认;接受;告知(信件等的)收到;答谢"}
                   ,{"acquaint [ə'kweint","vt.(with)使认识,使了解,使熟悉"}
                   ,{"acquaintance [ə'kweintəns]","n.认识,相识,了解;相识的人,熟人"}
                   ,{"acquire [ə'kwaiə]","v.获得;学到(知识等);养成(习惯)"}
                   ,{"acquisition [,ækwi'ziʃən]","n.取得,学到,养成(习惯);获得的东西"}
                   ,{"acre ['eikə]","n.英亩;田地;地产"}
                   ,{"acrobat ['ækrəbæt]","n.特技演员,杂技演员"}
                   ,{"across [ə'krɔs,ə'krɔ:s]","prep.横过,越过;在的对面 ad.横过,穿过"}
                   ,{"act [ækt]","v.表演;举动;起作用 n.行为,法令;一幕"}
                   ,{"action ['ækʃən]","n.行动,动作;作用;运转;行为;战斗"}
                   ,{"activate ['æktiveit]","vt.启动,激活;驱动,驱使;使开始起作用"}
                   ,{"active ['æktiv]","adj.活跃的,敏捷的,积极的;在活动中的"}
                   ,{"activity [æk'tivəti]","n.活动;活力;能动性;"}
                   ,{"actor ['æktə]","n.男演员;演员,行动者"}
                   ,{"actress ['æktris]","n.女演员"}
                   ,{"actual ['æktʃuəl]","a.实际的;现实的,真实的,目前的"}
                   ,{"acute [ə'kju:t]","a.剧烈的;敏锐的;成锐角的;尖的,高音的"}
                   ,{"adapt [ə'dæpt]","vt.使适应,使适合;改编;改写 vi.适应"}
                   ,{"add [æd]","vt.加;增加(进);进一步说/写 vi.(to)增添"}
                   ,{"addict [ə'dikt]","v.使沉溺;使上瘾 n.沉溺于不良嗜好的人"}
                   ,{"addition [ə'diʃən]","n.加,加法;附加部分,增加(物)"}
                   ,{"additional [ə'diʃənəl]","a.额外的,附加的,另外的"}
                   ,{"address [ə'dres]","n.住址;致词 v.向...致词;在信封上写姓名"}
                   ,{"adequate ['ædikwit]","adj.充足的,足够的;适当的,胜任的"}
                   ,{"adhere [əd'hiə]","vi.(to)粘着;坚持,遵守;依附,追随"}
                   ,{"adjacent [ə'dʒeisənt]","a.(to)(时间上)紧接着的;邻近的,毗邻的"}
                   ,{"adjective ['ædʒiktiv]","n.形容词 a.形容词的,用作形容词的"}
                   ,{"adjoin [ə'dʒɔin]","v.临近,靠近;贴近,毗连"}
                   ,{"adjust [ə'dʒʌst]","vt.调节;整顿,调整 vi.适应(to);使调节"}
                   ,{"administer [əd'ministə]","v.施行,实施;掌管,料理...的事务;给予"}
                   ,{"administration [əd,mini'streiʃən]","n.经营,管理;行政,行政机关,管理部门"}
                   ,{"admire [əd'maiə]","vt.钦佩,赞赏,羡慕;称赞,夸奖"}
                   ,{"admission [əd'miʃən]","n.允许进入;承认;入场费,入会费,入场券"}
                   ,{"admit [əd'mit]","vt.承认,供认;准许...进入,准许...加入"}
                   ,{"adolescent [,ædəu'lesənt]","n.青少年 a.青春期的,青少年的"}
                   ,{"adopt [ə'dɔpt]","vt.采用,采取(态度等);选定;收养"}
                   ,{"adore [ə'dɔ:]","vt.崇拜,敬慕,爱慕;非常喜欢"}
                   ,{"adult ['ædʌlt,ə'dʌlt]","n.成年人 a.成年的,充分长成的,成熟的"}
                   ,{"advance [əd'vɑ:ns,əd'væns]","n.前进,预付 vi.前进,进展 vt.促进,推进"}
                   ,{"advanced [əd'vɑ:nst,-'vænst]","a.超前的,先进的;高级的;开明的;前进的"}
                   ,{"advantage [əd'vɑ:ntidʒ]","n.优点,长处,有利条件;利益,好处"}
                   ,{"advent ['ædvənt]","n.(重要事件等的)到来,来临"}
                   ,{"adventure [əd'ventʃə,æd-]","n.冒险,冒险活动,奇遇 vt.大胆进行"}
                   ,{"adverb ['ædvə:b]","n.副词 a.副词的"}
                   ,{"adverse ['ædvə:s,æd'və:s]","a.逆的,相反的;敌对的;不利的;有害的"}
                   ,{"advertise ['ædvətaiz]","vt.公告,公布;为...做广告 vi.登广告"}
                   ,{"advice [əd'vais]","n.劝告,忠告,(医生等的)意见"}
                   ,{"advisable [əd'vaizəbl]","a.可取的,适当的,明智的"}
                   ,{"advise [əd'vaiz]","vt.忠告,劝告,建议;通知,告知"}
                   ,{"advocate ['ædvəkeit, 'ædvəkət]","n.辩护者,拥护者,鼓吹者 vt.拥护,提倡"}
                   ,{"aerial ['εəriəl]","a.(在或来自)空中的,航空的 n.天线"}
                   ,{"aeroplane ['εərəplein]","n.(airplane)(英)飞机"}
                   ,{"aesthetic [i:s'θetik]","a.(esthetic)美学的,艺术的;审美的"}
                   ,{"affair [ə'fεə]","n.[pl.]事务;事情(件);(个人的)事"}
                   ,{"affect [ə'fekt,'æfekt]","vt.影响;(疾病)侵袭;感动 n.情感,感情"}
                   ,{"affection [ə'fekʃən]","n.爱,喜爱;爱慕之情;感情;疾病,不适"}
                   ,{"affiliate [ə'filieit]","v.使隶属(或附属)于 n.附属机构,分公司"}
                   ,{"affirm [ə'fə:m]","vt.断言,坚持声称;肯定;证实,确认"}
                   ,{"affluent ['æfluənt]","a.富裕的,富有的,丰富的,富饶的"}
                   ,{"afford [ə'fɔ:d]","vt.担负得起(损失、费用、后果等),买得起"}
                   ,{"afraid [ə'freid]","adj.害怕的,恐惧的;犯愁的,不乐意的"}
                   ,{"after ['ɑ:ftə,'æf-]","prep.在...以后;在...后面 adv.以后,后来"}
                   ,{"afternoon [,ɑ:ftə:'nu:n]","n.下午,午后"}
                   ,{"afterward ['ɑ:ftəwəd,'æf-]","ad.(afterwards)以后,后来"}
                   ,{"again [ə'ɡen,-'ɡein]","ad.再次,另一次;重新;除此,再,更,还"}
                   ,{"against [ə'ɡenst,ə'ɡeinst]","prep.对着,逆;反对;违反;紧靠着;对比"}
                   ,{"age [eidʒ]","n.年龄;时代;老年;长时间 v.(使)变老"}
                   ,{"agency ['eidʒənsi]","n.代理(处);代办处;[美](政府的)机关,厅"}
                   ,{"agenda [ə'dʒendə]","n.议事日程,记事册"}
                   ,{"agent ['eidʒənt]","n.代理人;代理商;产生作用的人或事物"}
                   ,{"aggravate ['æɡrəveit]","vt.加重(剧),使恶化;激怒,使恼火"}
                   ,{"aggressive [ə'ɡresiv]","a.侵略的,好斗的,有进取心的,敢作敢为的"}
                   ,{"agitate ['ædʒiteit]","v.摇动(液体);使焦虑不安;困扰;鼓动"}
                   ,{"ago [ə'ɡəu]","ad.(常和一般过去时的动词连用)以前,„前"}
                   ,{"agony ['æɡəni]","n.(精神或肉体的)极大痛苦,创伤"}
                   ,{"agree [ə'ɡri:]","vi.答应,赞同;适合,一致;商定,约定"}
                   ,{"agreeable [ə'ɡri:əbl]","a.符合的;一致的;欣然同意的;令人愉快的"}
                   ,{"agreement [ə'ɡri:mənt]","n.协定;协议;契约;达成协议;同意,一致"}
                   ,{"agriculture ['æɡrikʌltʃə]","n.农业,农艺,农耕"}
                   ,{"ahead [ə'hed]","ad.在前面(头);向(朝)前;提前"}
                   ,{"aid [eid]","n.援助,救护;助手,辅助物 vi.援助,救援"}
                   ,{"aim [eim]","n.目的;瞄准 vi.(at)目的在于 vt.把„瞄准"}
                   ,{"air [εə]","n.空气;(复数)神气 vt.(使)通风;晾干"}
                   ,{"air-conditioning","n.空调设备,空调系统"}
                   ,{"aircraft ['εəkrɑ:ft]","n.飞机,飞船,飞行器"}
                   ,{"airline ['εəlain]","n.(飞机)航线 a.(飞机)航线的"}
                   ,{"airport ['εəpɔ:t]","n.机场,航空站,航空港"}
                   ,{"aisle [ail]","n.(教堂、教室、戏院等里的)过道,通道"}
                   ,{"alarm [ə'lɑ:m]","n.惊恐;警报(器) vt.惊动,惊吓;向„报警"}
                   ,{"album ['ælbəm]","n.(同一表演者的)集锦密纹唱片;集邮册,相册"}
                   ,{"alcohol ['ælkəhɔl]","n.酒精,乙醇;含酒精的饮料"}
                   ,{"alert [ə'lə:t]","a.机警的,警觉的;机灵的 vt.使„警觉"}
                   ,{"alien ['eiljən]","n.外侨,外国人;外星人 a.外国的;相异的"}
                   ,{"alike [ə'laik]","a.同样的,相像的 ad.一样地;同程度地"}
                   ,{"alive [ə'laiv]","a.活着的;存在的;活跃的;(to)敏感的"}
                   ,{"all [ɔ:l]","a.全部的;非常的 ad.完全地,很 pron.全部"}
                   ,{"allege [ə'ledʒ]","v.断言,宣称;指控"}
                   ,{"alleviate [ə'li:vieit]","v.减轻,缓和,缓解(痛苦等)"}
                   ,{"alliance [ə'laiəns]","n.同盟,同盟国;结盟,联姻"}
                   ,{"allocate ['æləukeit]","v.分配,分派;拨给;划归"}
                   ,{"allow [ə'lau]","vt.允许,准许;承认;给予;(for)考虑到"}
                   ,{"allowance [ə'lauəns]","n.补贴,津贴;零用钱;减价,折扣;允许"}
                   ,{"alloy ['ælɔi,ə'lɔi]","n.合金 vt.将„铸成合金"}
                   ,{"ally ['ælai,ə'lai]","n.同盟者,同盟国,vt.使结盟;与„有关联"}
                   ,{"almost ['ɔ:lməust]","adv.几乎,差不多"}
                   ,{"alone [ə'ləun]","a.单独的,孤独的 ad.单独地,独自地;仅仅"}
                   ,{"along [ə'lɔŋ]","ad.向前;和...一起,一同 prep.沿着,顺着"}
                   ,{"alongside [ə'lɔŋ'said]","ad.在旁边 prep.和...在一起;在...旁边"}
                   ,{"aloud [ə'laud]","adv.出声地,大声地"}
                   ,{"alphabet ['ælfəbit]","n.字母表;初步,入门"}
                   ,{"already [ɔ:l'redi]","ad.已,已经,早已"}
                   ,{"also ['ɔ:lsəu]","ad.而且(也),此外(还);同样地"}
                   ,{"alter ['ɔ:ltə]","vt.改变,更改;改做(衣服) vi.改变,变化"}
                   ,{"alternate ['ɔ:ltəneit]","a.交替的,轮流的 v.(使)交替,(使)轮流"}
                   ,{"alternative [ɔ:l'tə:nətiv]","n.二选一;供选择的东西;取舍 a.二选一的"}
                   ,{"although [ɔ:l'ð əu]","conj.尽管,虽然...但是"}
                   ,{"altitude ['æltitju:d]","n.高度,海拔;[pl.]高处,高地"}
                   ,{"altogether [,ɔ:ltə'ɡeð ə]","ad.完全,总之,全部地;总共;总而言之"}
                   ,{"aluminum [ə'lju:minəm]","n.(aluminium)铝"}
                   ,{"always ['ɔ:lweiz,-wiz]","ad.总是,无例外地;永远,始终"}
                   ,{"amateur ['æmətə,æmə'tə:]","a.&n.业余(水平)的(运动员、艺术家等)"}
                   ,{"amaze [ə'meiz]","vt.使惊奇,使惊愕;使困惑 vi.表现出惊奇"}
                   ,{"ambassador [æm'bæsədə]","n.大使;特使, (派驻国际组织的)代表"}
                   ,{"ambiguous [æm'biɡjuəs]","a.引起歧义的,模棱两可的,含糊不清的"}
                   ,{"ambition [æm'biʃən]","n.对(成功、权力等)的强烈欲望,野心;雄心"}
                   ,{"ambitious [æm'biʃəs]","a.有抱负的,雄心勃勃的;有野心的"}
                   ,{"ambulance ['æmbjuləns]","n.救护车,救护船,救护飞机"}
                   ,{"amend [ə'mend]","vt.修改,修订,改进"}
                   ,{"amiable ['eimjəbl]","a.和蔼可亲的,友善的,亲切的"}
                   ,{"amid [ə'mid]","prep.在...中间,在...之中,被...围绕"}
                   ,{"among [ə'mʌŋ]","prep.在...之中;在一群(组)之中;于...之间"}
                   ,{"amount [ə'maunt]","n.总数,数量;数额 v.共计;等同,接近(to)"}
                   ,{"ample ['æmpl]","a.充分的,富裕的;宽敞的,宽大的"}
                   ,{"amplifier ['æmplifaiə]","n.放大器,扩大器"}
                   ,{"amplify ['æmplifai]","vt.放大,增强;详述,详加解说"}
                   ,{"amuse [ə'mju:z]","vt.向„提供娱乐,使„消遣;引人发笑"}
                   ,{"analogue ['ænəlɔɡ]","n.类似物;相似体;模拟"}
                   ,{"analogy [ə'nælədʒi]","n.类似,相似,类比,类推"}
                   ,{"analyse ['ænəlaiz]","vt.(analyze)分析,分解"}
                   ,{"analysis [ə'næləsis]","n.(pl.analyses)分析;分解"}
                   ,{"analytic [,ænə'litik,-kəl]","a.(analytical)分析的;分解的"}
                   ,{"ancestor ['ænsestə]","n.祖宗,祖先;原型,先驱"}
                   ,{"anchor ['æŋkə]","n./v.锚;危难时可依靠的人或物;用锚泊船"}
                   ,{"ancient ['einʃənt]","a.古代的,古老的,古式的"}
                   ,{"and [强 ænd, 弱 ənd, ən]","conj.和,与,而且;那么;接连,又"}
                   ,{"anecdote ['ænikdəut]","n.轶事,趣闻,短故事"}
                   ,{"angel ['eindʒəl]","n.天使,安琪儿"}
                   ,{"anger ['æŋɡə]","n.愤怒,气愤 vt.使发怒,激怒 vi.发怒"}
                   ,{"angle ['æŋɡl]","n.角,角度 v.钓鱼;(采用各种方法)取得"}
                   ,{"angry ['æŋɡri]","a.生气的,愤怒的;(天气)风雨交加的"}
                   ,{"anguish ['æŋɡwiʃ]","n.(尤指心灵上的)极度痛苦,烦恼"}
                   ,{"animal ['æniməl]","n.动物,野兽,牲畜 a.动物的,野兽的"}
                   ,{"ankle ['æŋkl]","n.足踝,踝关节"}
                   ,{"anniversary [,æni'və:səri]","n.周年,周年纪念日"}
                   ,{"announce [ə'nauns]","v.正式宣布;发表;通告;广播(电台节目)"}
                   ,{"annoy [ə'nɔi]","vt.使恼怒,使生气;打扰 vi.招人讨厌"}
                   ,{"annual ['ænjuəl]","a.每年的,一年生的 n.年刊;一年生植物"}
                   ,{"anonymous [ə'nɔniməs]","a.匿名的,无名的,姓氏不明的"}
                   ,{"another [ə'nʌð ə]","a.另一个,又,再 pron.另一个,类似的一个"}
                   ,{"answer ['ɑ:nsə, 'æn-]","vt.回答,答复,答案 v.回答,答复,响应"}
                   ,{"ant [ænt]","n.蚁;蚂蚁"}
                   ,{"antenna [æn'tenə]","n.(无线电或电视的)天线"}
                   ,{"anticipate [æn'tisipeit]","vt.预料;期望;预先考虑;抢先;提前使用"}
                   ,{"antique [æn'ti:k]","a.古式的,过时的 n.有价值的古物,古董"}
                   ,{"anxiety [æŋ'zaiəti]","n.挂念,焦虑,焦急,忧虑;渴望,热望"}
                   ,{"anxious ['ænkʃəs]","a.焦虑的,担心的;急于(得到的),渴望的"}
                   ,{"any ['eni]","a.(用于否定句、疑问句等)什么,一些;任何的"}
                   ,{"anybody ['eni,bɔdi]","pron.(否定句)任何人;(肯定句)随便哪个人"}
                   ,{"anyhow ['enihau]","ad.不管怎么说,无论如何;不论用何种方法"}
                   ,{"anyone ['eniwʌn]","pron.(用于疑问句,否定式)任何人"}
                   ,{"anything ['eniθiŋ]","pron.任何东西(事物);无论什么东西(事物)"}
                   ,{"anyway ['eniwei]","ad.不管怎么说,无论如何;不论以何种方式"}
                   ,{"anywhere ['enihwεə]","ad.无论哪里;(用于否定、疑问等)任何地方"}
                   ,{"apart [ə'pɑ:t]","ad.分离,离开,隔开 a.分离的,分隔的"}
                   ,{"apartment [ə'pɑ:tmənt]","n.[英]房间,套间;[美]公寓"}
                   ,{"apologise [ə'pɔlədʒaiz]","v.(to,for)道歉,认错"}
                   ,{"apology [ə'pɔlədʒi]","n.道歉,认错,辩解,辩护"}
                   ,{"appal [ə'pɔ:l]","v.使惊骇,使恐怖"}
                   ,{"apparatus [,æpə'reitəs]","n.器械,器具,仪器;机构,组织"}
                   ,{"apparent [ə'pærənt]","a.表面上的,貌似真实的;显然的,明明白白的"}
                   ,{"appeal [ə'pi:l]","vi.呼吁,恳求;申诉 n.呼吁;申诉;吸引力"}
                   ,{"appear [ə'piə]","vi.出现;出场;问世;仿佛;出版,发表"}
                   ,{"appearance [ə'piərəns]","n.出现,露面;外表;(在会议等)作短暂露面"}
                   ,{"appendix [ə'pendiks]","n.附录,附属物;阑尾,盲肠"}
                   ,{"appetite ['æpitait] ","n.食欲,胃口;欲望,性欲;爱好,趣味"}
                   ,{"applaud [ə'plɔ:d]","vt.鼓掌欢迎;赞同 vi.鼓掌欢迎,欢呼"}
                   ,{"applause [ə'plɔ:z]","n.鼓掌;喝彩;夸奖,赞扬"}
                   ,{"apple ['æpl]","n.苹果,苹果树"}
                   ,{"appliance [ə'plaiəns]","n.电器;器械,装置;应用,适用"}
                   ,{"applicable ['æplikəbl, ə'plikə-]","a.可应用(实施)的;适当的,合适的"}
                   ,{"application [,æpli'keiʃən]","n.申请,请求,申请书;应用,实施,实用性"}
                   ,{"apply [ə'plai]","vi.(以书面形式)申请;请求 vt.应用;实施"}
                   ,{"appoint [ə'pɔint]","vt.任命,委派;指定,约定(时间、地点等)"}
                   ,{"appointment [ə'pɔintmənt]","n.约会,约定;任命,委派;委任的职位"}
                   ,{"appraisal [ə'preizəl]","n.对...作出的评价;评价,鉴定,评估"}
                   ,{"appreciate [ə'pri:ʃieit]","vt.为...表示感激,感谢;欣赏,赏识,评价"}
                   ,{"approach [ə'prəutʃ]","v.靠近,接近 n.接近;途径,入门;方式,方法"}
                   ,{"appropriate [ə'prəuprieit]","a.适当的,恰当的,特有的 vt.拨给,挪用,盗用"}
                   ,{"approval [ə'pru:vəl]","n.批准,通过;赞成,同意"}
                   ,{"approve [ə'pru:v]","v.(of)赞成,赞许,同意;批准,审议,通过"}
                   ,{"approximate [ə'prɒksɪmət]","a.近似的 vi.(to)接近"}
                   ,{"April ['eɪprəl]","(名)四月"}
                   ,{"apt [æpt]","a.恰当的,适当的;易于„的,有„倾向的"}
                   ,{"arbitrary ['ɑ:bitrəri]","a.任意的,任性的,主观的;专断的,武断的"}
                   ,{"arch [ɑ:tʃ]","n.拱门,桥拱洞 v.拱起,(使)变成弓形"}
                   ,{"architect ['ɑ:kitekt]","n.建筑师;设计师;缔造者;创造者"}
                   ,{"architecture ['ɑ:kitektʃə]","n.建筑,建筑学;建筑式样或风格,建筑物"}
                   ,{"area ['εəriə]","n.面积;地区,地域;领域,范围"}
                   ,{"argue ['ɑɡju:]","vi.辩论,争论 vt.辩论,论证;说服,劝说"}
                   ,{"argument ['ɑ:ɡjumənt]","n.争论(吵),辩论;理由;论证"}
                   ,{"arise [ə'raiz]","v.出现,发生;(from)由„引起,由„产生"}
                   ,{"arithmetic [ə'riθmətik]","n.算术,四则运算"}
                   ,{"arm [ɑ:m]","n.手臂,扶手,臂状物 v.武装;配备 n.武器"}
                   ,{"army ['ɑ:mi]","n.军队,陆军,军;大群,大批"}
                   ,{"around [ə'raund]","ad.在...周围,到处 prep.在..四周(或附近)"}
                   ,{"arouse [ə'rəuz]","vt.唤醒,叫醒;唤起,激起"}
                   ,{"arrange [ə'reindʒ]","v.安排,筹划;整理,使有条理,排列,布置"}
                   ,{"array [ə'rei]","n.大量;排列;盛装 v.列阵;装扮;排列"}
                   ,{"arrest [ə'rest]","n.逮捕,扣留 vt.逮捕,扣留;阻止;吸引"}
                   ,{"arrival [ə'raivəl]","n.到达,到来;到达者,到达物"}
                   ,{"arrive [ə'raiv]","vi.到达;(时间、事件)到来,发生;达到"}
                   ,{"arrogant ['ærəɡənt]","a.傲慢的,自大的"}
                   ,{"arrow ['ærəu]","n.箭,矢,箭状物;箭头符号"}
                   ,{"art [ɑ:t]","n.艺术,美术;技术,技艺;文科,人文科学"}
                   ,{"artery ['ɑ:təri]","n.动脉;干线,要道"}
                   ,{"article ['ɑ:tikəl]","n.文章,论文;条款,条文;物件;冠词"}
                   ,{"articulate [ɑ:'tikjulət]","a.善于表达的;有关节相连的 v.清楚地讲话"}
                   ,{"artificial [,ɑ:ti'fiʃəl]","a.人工的,人造的,人为的;虚伪的,做作的"}
                   ,{"artist ['ɑ:tist]","n.艺术家,美术家;(某方面的)能手"}
                   ,{"artistic [ɑ:'tistik]","a.艺术(家)的,美术(家)的;善于艺术创作的"}
                   ,{"as [əz]","ad.同样地 conj.由于;像...一样 prep.作为"}
                   ,{"ascend [ə'send]","vi.渐渐上升,升高 vt.攀登,登上"}
                   ,{"ascertain [ˌæsə'teɪn]","vt.确定,查明,弄清"}
                   ,{"ash [æʃ]","n.灰,灰末;(pl.)骨灰;(pl.)废墟"}
                   ,{"ashamed [ə'ʃeimd]","a.惭愧的,羞耻的,害臊的"}
                   ,{"ashore [ə'ʃɔ:]","ad.上岸;在岸上,向岸上"}
                   ,{"aside [ə'said]","ad.在旁边,到一边 n.旁白;离题的话"}
                   ,{"ask [ɑ:sk, æsk]","vt.问,询问;请求,要求;邀请,约请"}
                   ,{"asleep [ə'sli:p]","a.睡觉,睡着(用作表语)"}
                   ,{"aspect ['æspekt]","n.样子, 外表, 面貌, (问题等的)方面"}
                   ,{"aspire [ə'spaiə]","vi.(to,after)渴望,追求,有志于"}
                   ,{"assassinate [ə'sæsineit]","vt.暗杀,行刺;中伤"}
                   ,{"assault [ə'sɔ:lt]","v.猛烈地攻击,袭击 n.突然而猛烈的攻击"}
                   ,{"assemble [ə'sembl]","vt.集合,召集;装配;收集 vi.集合,聚集"}
                   ,{"assembly [ə'sembli]","n.集合;会议;装配;(美)洲议会的众议院"}
                   ,{"assert[ə'sə:t]","vt.断言,宣称;坚持;主张(权利、权威等)"}
                   ,{"assess [ə'ses]","vt.(为征税)评估(财产、收入);征税;评价"}
                   ,{"asset ['æset]","n.(pl.)资产,财产;有价值的物品;天赋"}
                   ,{"assign [ə'sain]","vt.派给,分配;选定,指定(时间、地点等)"}
                   ,{"assignment [ə'sainmənt]","n.分配,指派; (指定的)作业, (分派的)任务"}
                   ,{"assimilate [ə'simileit]","vt.吸收,消化;使同化 vi.被吸收;被同化"}
                   ,{"assist [ə'sist]","vt.协助,帮助,促进 vi.帮忙,参加"}
                   ,{"assistance [ə'sistəns]","n.协作; 援助; 帮助"}
                   ,{"assistant [ə'sistənt]","a.帮助的,辅助的 n.助手,助教;辅助物"}
                   ,{"associate [ə'səuʃieit]","vt.联想;交往;联合;n.伙伴;a.联合的"}
                   ,{"association [ə,səusi'eiʃən]","n.联盟,协会,社团;交往,联合;联想"}
                   ,{"assume [ə'sju:m, ə'su:m]","vt.假装;假定,设想;承担;呈现,采取"}
                   ,{"assumption[ə'sʌmpʃən]","n.假定,设想;采取;承担;推测;假装"}
                   ,{"assurance [ə'ʃuərəns]","n.保证,担保;确信,断言;信心,信念"}
                   ,{"assure [ə'ʃuə]","vt.使确信,使放心(of);向...保证"}
                   ,{"astonish [ə'stɔniʃ]","vt.使惊讶,使吃惊"}
                   ,{"astronaut ['æstrənɔ:t]","n.太空人,太空旅行者"}
                   ,{"astronomy [ə'strɔnəmi]","n.天文学"}
                   ,{"at [强 æt,弱 ət]","prep.[表示价格、速度等]以,达;在..方面"}
                   ,{"athlete ['æθli:t]","n.运动员,体育家,身强力壮的人"}
                   ,{"atmosphere ['ætmə,sfiə]","n.大气(层);空气;气氛,环境;大气压"}
                   ,{"atom ['ætəm]","n.原子;微粒,微量"}
                   ,{"attach [ə'tætʃ]","v.系,贴,装,连接;使成为一部分;使依恋"}
                   ,{"attack [ə'tæk]","v./n.攻击,抨击;着手,开始 n.(病)发作"}
                   ,{"attain [ə'tein]","vt.达到;完成;获得 vi.达到"}
                   ,{"attempt [ə'tempt]","vt.企图,试图 n.努力,尝试,企图"}
                   ,{"attend [ə'tend]","vt.出席,参加;照顾,护理 vi.注意;侍奉"}
                   ,{"attendance [ə'tendəns]","n.出席;出席人数;护理,照料"}
                   ,{"attendant [ə'tendənt]","n.陪从;出席人;服务员 a.出席的;伴随的"}
                   ,{"attention [ə'tenʃən]","n.注意,注意力;立正;特别照顾;照料"}
                   ,{"attitude ['ætitju:d, -tu:d]","n.态度,看法(to, toward, about);姿势"}
                   ,{"attorney [ə'tə:ni]","n.(业务或法律事务上的)代理人;辩护律师"}
                   ,{"attract [ə'trækt]","vt.引起的注意(或兴趣等),吸引;引起;激起"}
                   ,{"attractive [ə'træktiv]","a.吸引人的,引人注意的;漂亮的,迷人的"}
                   ,{"attribute [ə'tribju:t,'ætribju:t]","v.(to)归因于,归属于 n.属性,品质,特征"}
                   ,{"auction ['ɔ:kʃən]","n./vt.拍卖"}
                   ,{"audience ['ɔ:diəns]","n.听众,观众,读者;见面,会见"}
                   ,{"audio ['ɔ:diəu]","n./a.音频(响)(的);声音(的),听觉(的)"}
                   ,{"audit ['ɔ:dit]","v.审计;查帐;核对;旁听"}
                   ,{"auditorium [,ɔ:di'tɔ:riəm]","n.观众席,听众席;会堂,礼堂"}
                   ,{"augment [ɔ:ɡ'ment,'ɔ:gmənt]","vt.(使)增大,增加,增长,扩张"}
                   ,{"August [ɔ:'ɡʌst]","n.8月"}
                   ,{"aunt [ɑ:nt,ænt]","n.姨母,姑母,伯母,婶母,舅母,阿姨"}
                   ,{"aural ['ɔ:rəl]","a.听觉的,听力的"}
                   ,{"authentic [ɔ:'θentik]","a.真的,真正的;可靠的,可信的,有根据的"}
                   ,{"author ['ɔ:θə]","n.作者,作家,著作人;创始人,发起人"}
                   ,{"authority [ɔ:'θɔrəti]","n.权力,权威;权威人士;(pl.)官方,当局"}
                   ,{"auto ['ɔ:təu]","n.(automobile)(口语)汽车"}
                   ,{"automatic [,ɔ:tə'mætik]","a.自动(装置)的;无意识的;n.自动机械"}
                   ,{"automation [,ɔ:tə'meiʃən]","n.自动,自动化,自动操作"}
                   ,{"autonomy [ɔ:'tɔnəmi]","n.自治,自治权"}
                   ,{"autumn ['ɔ:təm]","n.秋,秋季;成熟期,渐衰期"}
                   ,{"auxiliary [ɔ:ɡ'ziljəri]","a.辅助的,支援的 n.辅助者,辅助设备"}
                   ,{"avail [ə'veil]","n.[一般用于否定句或疑问句中]效用,利益"}
                   ,{"available [ə'veiləbl]","a.(用于物)可利用的;可见到的,接受采访的"}
                   ,{"avenue ['ævənju:]","n.林荫路,大街;(比喻)途径,渠道,方法"}
                   ,{"average ['ævəridʒ]","n.平均,平均数 a.平均的;普通的 v.平均"}
                   ,{"avert [ə'və:t]","v.防止,避免 ;转移(目光、注意力等)"}
                   ,{"aviation [,eivi'eiʃən]","n.航空,航空学;飞机制造业"}
                   ,{"avoid [ə'vɔid]","vt.防止,避免;逃避,避开"}
                   ,{"await [ə'weit]","vt.等候,期待;(事情等)降临于"}
                   ,{"awake [ə'weik]","a.醒着的 vt.唤醒,使觉醒 vi.醒来,醒悟到"}
                   ,{"award [ə'wɔ:d]","vt.授予,给予;判定 n.奖,奖金;仲裁"}
                   ,{"aware [ə'wεə]","a.知道的,意识到的"}
                   ,{"away [ə'wei]","ad.在远处;离开;渐渐远去;一直;去掉"}
                   ,{"awe [ɔ:]","n.敬畏,惊惧 vt.使敬畏,使惊惧"}
                   ,{"awful ['ɔ:ful]","a.极度的,极坏的;威严的,可怕的"}
                   ,{"awkward ['ɔ:kwəd]","a.笨拙的;尴尬的;使用不便的;难处理的"}
                   ,{"axe [æks]","n.(ax)斧子;削减 vt.用斧砍"}
                   ,{"axis ['æksis]","n.轴,轴线,中心线;坐标轴,基准线"}
                   ,{"baby ['beibi]","n.婴儿;年龄最小的人;小动物 a.婴儿似的"}
                   ,{"bachelor ['bætʃələ]","n.单身汉;(亦作 B-)学士(学位)"}
                   ,{"back [bæk]","a.后面的 ad.向后 v.倒退;支持 n.背;后面"}
                   ,{"background ['bækɡraund]","n.背景,经历;幕后"}
                   ,{"backward ['bækwəd]","a.向后的,倒行的;迟钝的 ad.向后,朝反方向"}
                   ,{"bacon ['beikən]","n.咸猪肉,熏猪肉"}
                   ,{"bacterium [bæk'tiəriəm]","n.(pl.)bacteria 细菌"}
                   ,{"bad [bæd]","a.坏的;低劣的;不舒服的;腐败的;严重的"}
                   ,{"badge ['bædʒ]","n.徽章,像章;标记;象征;记号"}
                   ,{"badly ['bædli]","ad.非常,严重地;坏地,差地,拙劣地"}
                   ,{"badminton ['bædmintən]","n.羽毛球"}
                   ,{"bag [bæɡ]","n.袋,提包 v.把„装入袋中;猎杀;占有"}
                   ,{"baggage ['bæɡidʒ]","n.行李"}
                   ,{"bait [beit]","n.饵,引诱物 vt.用饵引诱;折磨,奚落"}
                   ,{"bake [beik]","v.烤,烘,焙;烧硬,焙干"}
                   ,{"balance ['bæləns]","v.称,(使)平衡 n.天平;平衡,均衡;差额,余款"}
                   ,{"balcony ['bælkəni]","n.阳台;(电影院等的)楼厅,楼座"}
                   ,{"bald [bɔ:ld]","a.秃的,秃头的"}
                   ,{"ball [bɔ:l]","n.球(状物);(正式的)舞会 vt.把„捏成球状"}
                   ,{"ballet ['bælei,bæ'lei]","n.芭蕾舞,芭蕾舞剧;芭蕾舞团"}
                   ,{"balloon [bə'lu:n]","n.气球,飞船;a.气球状的 v.乘坐气球;膨胀"}
                   ,{"ballot ['bælət]","n.(不记名)投票;投票总数;投票权 vi.投票"}
                   ,{"ban [bæn]","v.取缔,查禁;(from)禁止 n.禁止,禁令"}
                   ,{"banana [bə'nɑ:nə,-'næ-]","n.香蕉"}
                   ,{"band [bænd]","n.条,带;乐队;波段;一群,一伙 v.缚,绑扎"}
                   ,{"bandage ['bændidʒ]","n.绷带 v.用绷带扎缚"}
                   ,{"bang [bæŋ]","n.砰砰的声音;猛击 v.砰地关上,猛撞,猛击"}
                   ,{"bank [bæŋk]","n.银行;岸,堤;vi.存入(经营)银行;信赖"}
                   ,{"bankrupt ['bæŋkrʌpt]","a.破产的;彻底缺乏的 vt.使破产 n.破产者"}
                   ,{"banner ['bænə]","n.旗(帜)"}
                   ,{"banquet ['bæŋkwit]","n.(正式的)宴会 vi.参加宴会 vt.宴情"}
                   ,{"bar [bɑ:]","n.条,杆,闩;酒吧;栅,障碍(物) v.闩上,阻拦"}
                   ,{"barbecue ['bɑ:bikju:]","n.烤肉;烤肉用的台架 vt.炙烤(肉等)"}
                   ,{"barber ['bɑ:bə]","n.理发师 vt.为„理发修整 vi.当理发师"}
                   ,{"bare [bεə]","a.赤裸的,空的;稀少的,仅有的 v.露出,暴露"}
                   ,{"barely ['bεəli]","ad.赤裸裸地,无遮蔽地;仅仅,勉强,几乎没有"}
                   ,{"bargain ['bɑ:ɡin]","n.廉价货;交易,契约,合同 v.议价,成交"}
                   ,{"bark [bɑ:k]","vi.(狗等)吠,叫 n.吠声,叫声;树皮"}
                   ,{"barn [bɑ:n]","n.谷仓,仓库 vt.把...贮存入仓"}
                   ,{"barrel ['bærəl]","n.桶;枪管,炮管"}
                   ,{"barren ['bærən]","a.贫瘠的;不育的;(植物)不结果的;无用的"}
                   ,{"barrier ['bæriə]","n.栅栏,屏障;障碍(物) vt.把...关入栅栏"}
                   ,{"base [beis]","n.基础,底部;根据地 v.(on)把...基于"}
                   ,{"baseball ['beisbɔ:l]","n.棒球"}
                   ,{"basement ['beismənt]","n.建筑物的底部,地下室,地窖"}
                   ,{"basic ['beisik]","a.基本的,基础的"}
                   ,{"basin ['beisən]","n.盆,脸盆;内海,盆地"}
                   ,{"basis ['beisis]","n.基础,根据"}
                   ,{"basket ['bɑ:skit, 'bæs-]","n.筐,篮,篓"}
                   ,{"basketball ['bɑ:skitbɔ:l,'bæs-]","n.篮球,篮球运动"}
                   ,{"bat [bæt]","n.球拍,球棒,短棒;蝙蝠"}
                   ,{"batch [bætʃ]","n.一批,一组,一群"}
                   ,{"bath [bɑ:θ/bæθ]","n.沐浴,洗澡;浴室(池,盆) v.(给„)洗澡"}
                   ,{"bathe [beið]","v.游泳,洗澡,浸,弄湿"}
                   ,{"bathroom ['bɑ:θrum]","n.浴室;盥洗室,卫生间"}
                   ,{"battery ['bætəri]","n.电池(组);(器具等的)一组,一套;炮兵连"}
                   ,{"battle ['bætl]","n.战役,战斗;斗争 v.战斗,斗争,搏斗"}
                   ,{"bay [bei]","n.海湾,(港)湾"}
                   ,{"be [强 bi:,弱 bi]","v.(就)是,等于;(存)在;到达,来到,发生"}
                   ,{"beach [bi:tʃ]","n.海滩,湖滩,河滩"}
                   ,{"beam [bi:m]","n.(横)梁,桁条;(光线的)束,柱 v.微笑"}
                   ,{"bean [bi:n]","n.豆;菜豆,蚕豆"}
                   ,{"bear [bεə]","n.熊 v.忍受,容忍;负担;结果实,生子女"}
                   ,{"beard [biəd]","n.胡须"}
                   ,{"bearing ['bεəriŋ]","n.轴承;忍受;关系,影响;举止;方向"}
                   ,{"beast [bi:st]","n.兽,牲畜;凶残的人,举止粗鲁的人"}
                   ,{"beat [bi:t]","n.敲打;(心脏等)跳动 v.打败;(心脏等)跳动"}
                   ,{"beautiful ['bju:tiful]","a.美的,美丽的;出色的,完美的"}
                   ,{"beauty ['bju:ti]","n.美,美丽;美人,美丽的事物"}
                   ,{"because [bi'kɔz]","conj.因为,由于"}
                   ,{"become [bi'kʌm]","vi.变成,开始变得 vt.适合,同„相称"}
                   ,{"bed [bed]","n.床,床位;(苗)床,坛;河床,(湖、海的)底"}
                   ,{"bee [bi:]","n.蜂,蜜蜂;忙碌的人"}
                   ,{"beef [bi:f]","n.牛肉"}
                   ,{"beer [biə]","n.啤酒"}
                   ,{"before [bi'fɔ:]","prep.(指时间)在„以前,在..前面,在..之前"}
                   ,{"beforehand [bi'fɔ:hænd]","ad.预先,事先"}
                   ,{"beg [beɡ]","vt.请求,乞求 vi.恳请,行乞"}
                   ,{"begin [bi'ɡin]","v.(began,begun)开始,着手"}
                   ,{"beginning [bi'ɡiniŋ]","n.开始,开端;起源,早期阶段"}
                   ,{"behalf [bi'hɑ:f]","n.利益"}
                   ,{"behave [bi'heiv]","v.举止,举动,表现;运转,开动"}
                   ,{"behavior [bi'heivjə]","n.(behaviour)行为,举止;(机器等)运转情况"}
                   ,{"behind [bi'haind]","prep.在...的背后,(遗留)在..后面;落后于"}
                   ,{"being ['bi:ŋ]","n.生物,生命,存在"}
                   ,{"belief [bi'li:f]","n.信任,相信,信念;信仰,信条"}
                   ,{"believe [bi'li:v]","vt.相信,认为 vi.相信,信任,信奉"}
                   ,{"bell [bel]","n.钟,铃"}
                   ,{"belly ['beli]","n.肚子,腹部;(像肚子一样)鼓起的部分,膛"}
                   ,{"belong [bi'lɔŋ]","v.(to)属于,附属,隶属;应归入(类别,范畴等)"}
                   ,{"beloved [bi'lʌvid,-'lʌvd]","a./n.受爱戴的,敬爱的;爱人,被心爱的人"}
                   ,{"below [bi'ləu]","prep.在„下面,在„以下 ad.在下面,向下"}
                   ,{"belt [belt]","n.(皮)带,腰带;地带"}
                   ,{"bench [bentʃ]","n.长凳,条凳;(工作)台,座"}
                   ,{"bend [bend]","v.(使)弯曲;屈从,屈服 n.弯曲(处),曲折处"}
                   ,{"beneath [bi'ni:θ]","prep.在„下边,在„之下 ad.在下方"}
                   ,{"beneficial [,beni'fiʃəl]","a.(to)有利的,有益的"}
                   ,{"benefit ['benifit]","n.利益,好处,恩惠 v.有益于;(from,by)受益"}
                   ,{"benign [bi'nain]","a.(病)良性的,(气候)良好的,仁慈的,和蔼的"}
                   ,{"beside [bi'said]","prep.在...旁边,在...附近;和...相比"}
                   ,{"besides [bi'saidz]","ad.此外;并且 prep.于„之外;除„以外"}
                   ,{"best [best]","a.最好的(good 和 well 最高级) ad.最好地;最"}
                   ,{"bet [bet]","v.赌,打赌 n.打赌,赌注"}
                   ,{"betray [bi'trei]","v.背叛,出卖;暴露,流露,泄露"}
                   ,{"better [betə]","a.较好的 ad.更好(地) v.改良 n.较佳者"}
                   ,{"between [bi'twi:n]","prep.在„之间,在(两者)之间 ad.在中间"}
                   ,{"beverage ['bevəridʒ]","n.(水,酒等之外的)饮料"}
                   ,{"beware [bi'wεə]","v.当心,谨防"}
                   ,{"bewilder [bi'wildə]","v.使迷惑,难住"}
                   ,{"beyond [bi'jɔnd]","prep.在(或向)...的那边,远于;超出"}
                   ,{"bias ['baiəs]","n./v.(使有)偏见,偏心,偏袒"}
                   ,{"Bible ['baɪbl]","n.圣经"}
                   ,{"bibliography [,bibli'ɔɡrəfi]","n.(有关某一专题的)书目;参考书目"}
                   ,{"bicycle ['baisikl]","n.(bike)自行车 vi.骑自行车"}
                   ,{"bid [bid]","v.祝愿;命令,吩咐;报价,投标 n.出众,投标"}
                   ,{"big [biɡ]","a.大的;重要的;宽宏大量的;大受欢迎的"}
                   ,{"bill [bil]","n.账单;招贴,广告;(人员,职称等的)表;钞票"}
                   ,{"billion ['biljən]","num./n.(美)十亿,(英)万亿"}
                   ,{"bin [bin]","n.(贮藏食物等用的)箱子"}
                   ,{"bind [baind]","v.捆,绑,包括,束缚"}
                   ,{"biography [bai'ɔɡrəfi]","n.传记;传记文学"}
                   ,{"biology [bai'ɔlədʒi]","n.生物学"}
                   ,{"bird [bə:d]","n.鸟,雀;女人;嘘声"}
                   ,{"birth [bɜːθ]","n.出生,诞生;出身,血统;起源;出现"}
                   ,{"birthday ['bə:θdei]","n.生日;(成方)纪念日"}
                   ,{"biscuit ['biskit]","n.饼干,点心"}
                   ,{"bit [bit]","n.一点,一些;小块,少量;片刻; [计]位,比特"}
                   ,{"bite [bait]","v./n.咬,叮 n.一口"}
                   ,{"bitter ['bitə]","a.(有)苦(味)的;痛苦的,厉害的"}
                   ,{"bizarre [bi'zɑ:]","adj.异乎寻常的,稀奇古怪的"}
                   ,{"black [blæk]","a.黑(色)的;黑暗的 n.黑(色);黑暗;黑人"}
                   ,{"blackboard ['blækbɔ:d]","n.黑板"}
                   ,{"blackmail ['blækmeil]","n.讹诈,敲诈,勒索;胁迫,恫吓"}
                   ,{"blade [bleid]","n.刀刃,刀片;桨叶;草叶,叶片"}
                   ,{"blame ['bleim]","v.责备;怪,把„归咎于 n.责任,过错;责备"}
                   ,{"blank [blæŋk]","a.空白的,空着的;失色的 n.空白;表格"}
                   ,{"blanket ['blæŋkit]","n.毯子(可数);厚厚一层(可数) vt.铺上一层"}
                   ,{"blast ['baiəu,blæst]","n.一阵(风);爆炸冲击波;管乐器声 v.爆炸"}
                   ,{"blaze [bleiz]","n.火焰;火光;闪光,光辉 v.燃烧,冒火焰"}
                   ,{"bleak [bli:k]","a.荒凉的;冷酷的;没有希望的"}
                   ,{"bleed [bli:d]","vt.使出血,榨取 vi.出血,流血"}
                   ,{"blend [blend]","n.混合(物) v.混和,混杂"}
                   ,{"bless [bles]","v.祝福,保佑"}
                   ,{"blame ['bleim]","v.责备;怪,把„归咎于 n.责任,过错;责备"}
                   ,{"blind [blaind]","a.盲的,瞎的;盲目的 vt.使失明 n.百叶窗"}
                   ,{"block [blɔk]","n.大块木(石)料;街区;障碍物 v.阻塞,拦阻"}
                   ,{"blood [blʌd]","n.血液,血;血统,血亲;血气"}
                   ,{"bloody ['blʌdi]","a.流血的,血腥的"}
                   ,{"bloom [blu:m]","n.花(朵);开花(期) v.开花"}
                   ,{"blossom ['blɔsəm]","n.花(簇);花期;青春 vi.开花;展开;繁荣"}
                   ,{"blouse [blauz]","n.女衬衣,短上衣,宽阔的罩衫"}
                   ,{"blow [bləu]","vi.吹,吹气,打气;吹奏;爆炸;n.打,打击"}
                   ,{"blue [blu:]","a.蓝色的;青灰色的;沮丧的,阴郁的 n.蓝色"}
                   ,{"blueprint ['blu:print]","n.蓝图,设计图,计划 vt.制成蓝图,计划"}
                   ,{"blunder ['blʌndə]","v.(因无知等而)犯大错;踉踉跄跄地走 n.大错"}
                   ,{"blunt [blʌnt]","a.率直的;钝的 v.(使)钝;(使)迟钝"}
                   ,{"blur [blə:]","n.模糊不清的事物;污点 vt.使模糊;玷污"}
                   ,{"blush [blʌʃ]","v./n.脸红"}
                   ,{"board [bɔ:d]","n.板,木板;全体委员;伙食 v.上船(车,飞机)"}
                   ,{"boast [bəust]","v.(of,about)自夸,夸耀 n.自夸,大话"}
                   ,{"boat [bəut]","n.小船,艇"}
                   ,{"body ['bɔdi]","n.身体,本体;主体;尸体;物体;(一)群,批,堆"}
                   ,{"boil [bɔil]","v.(使)沸腾,煮(沸)"}
                   ,{"bold [bəuld]","a.大胆的,勇敢的;冒失的;黑体的,粗体的"}
                   ,{"bolt [bəult]","n.螺栓,(门,窗的)插销 v.闩(门),关窗,拴住"}
                   ,{"bomb [bɔm]","n.炸弹 v.投弹于,轰炸"}
                   ,{"bond [bɔnd]","n.结合(物),粘结(剂),联结;公债,债券,契约"}
                   ,{"bone [bəun]","n.骨(骼)"}
                   ,{"bonus ['bəunəs]","n.奖金,红利"}
                   ,{"book [buk]","n.书,书籍 vt.订(票,座位,房间等),预定"}
                   ,{"boom [bu:m]","v.迅速发展,兴旺;发出隆隆声"}
                   ,{"boost [bu:st]","n./ vt.提升;增加;抬高(价格);支援"}
                   ,{"boot [bu:t]","n.靴;(汽车后部的)行李箱;[the-]解雇"}
                   ,{"booth [bu:ð, bu:θ]","n.电话亭,货摊"}
                   ,{"border ['bɔ:də]","n.边界,国界;边(沿) v.交界,与„接壤;接近"}
                   ,{"bore [bɔ:]","v.钻(孔),挖(洞);烦扰 n.讨厌的人,麻烦事"}
                   ,{"born [bɔ:n]","a.出生的,产生的;天生的,十足的"}
                   ,{"borrow ['bɔrəu]","vt.借,借入;(思想、文字等)采用,抄袭"}
                   ,{"bosom ['buzəm]","n.胸,胸部,乳房,胸怀;内心;a.亲密的,知心的"}
                   ,{"boss [bɔs]","n.老板,上司 vt.指挥,控制,发号施令"}
                   ,{"both [bəuθ]","prep.两者(都),双方(都) adj.两个...(都)"}
                   ,{"bother ['bɔð ə]","vt.打扰,麻烦 vi.担心,烦恼 n.烦恼,焦急"}
                   ,{"bottle ['bɔtl]","n.瓶(子) v.装瓶"}
                   ,{"bottom ['bɔtəm]","n.底(部);基础,根基;海底,湖底,河床"}
                   ,{"bounce [bauns]","n./vi.(球)弹起,弹回;弹起,跳起;n.弹力"}
                   ,{"bound [baund]","v./n.跳(跃) a.被束缚的,一定的;n.界限"}
                   ,{"boundary ['baundəri]","n.分界线,边界"}
                   ,{"bow [bəu]","v./n.鞠躬,点头 n.弓(形);蝴蝶结"}
                   ,{"bowel ['bauəl]","n.肠;[pl.]内部,深处"}
                   ,{"bowl [bəul]","n.碗(状物),钵"}
                   ,{"bowling ['bəuliŋ]","n.保龄球运动"}
                   ,{"box [bɔks]","n.盒,箱;包厢 v.把„装箱;拳击,打耳光"}
                   ,{"boy [bɔi]","n.男孩子,儿子;男性服务员"}
                   ,{"boycott ['bɔikɔt]","n./v.(联合)抵制,拒绝参与"}
                   ,{"brace [breis]","v.使防备;支撑;使(手,足,肩等)绷紧 n.托架"}
                   ,{"bracket ['brækit]","n.(方)括号"}
                   ,{"brain [brein]","n.(大)脑,骨髓;(pl.)脑力,智能"}
                   ,{"brake [breik]","v./n.制动(器),闸,刹车"}
                   ,{"branch [brɑ:ntʃ,bræntʃ]","n.(树)条,分支;分店;(学科)分科,部门;支流"}
                   ,{"brand [brænd]","n.商标,标记,牌子 v.使铭记;打火印,打烙印"}
                   ,{"brandy ['brændi]","n.白兰地酒"}
                   ,{"brass [brɑ:s,bræs]","n.黄铜,铜器"}
                   ,{"brave [breiv]","a.勇敢的 v.勇敢地面对(危险等)"}
                   ,{"breach [bri:tʃ]","n.违反,不履行;破裂 vt.冲破,攻破"}
                   ,{"bread [bred]","n.面包"}
                   ,{"breadth [bredθ]","n.宽度,幅"}
                   ,{"break [breik]","vt.打破;中止;违反 vi.破(裂) n.休息时间"}
                   ,{"breakdown ['breikdaun]","n.崩溃;衰竭;(关系、计划或讨论等的)中断"}
                   ,{"breakfast ['brekfəst]","n.早餐 v.(给某人)吃早餐"}
                   ,{"breast [brest]","n.胸膛,乳房"}
                   ,{"breath [breθ]","n.呼吸,气息"}
                   ,{"breathe [bri:ð]","v.呼吸,吸入"}
                   ,{"breed [bri:d]","v.(使)繁殖,生殖;产生;教养,抚养 n.品种"}
                   ,{"breeze [bri:z]","n.微风;轻而易举的事 vi.来去匆匆,急速走"}
                   ,{"bribe [braib]","n.贿赂 v.向„行贿,买通"}
                   ,{"brick [brik]","n.砖块,砖;v.用砖围砌,用砖填补"}
                   ,{"bride [braid]","n.新娘"}
                   ,{"bridge [bridʒ]","n.桥;桥牌;鼻梁 vt.架桥;渡过"}
                   ,{"brief [bri:f]","a.简短的,简洁的 v.简短介绍,简要汇报"}
                   ,{"briefcase ['bri:fkeis]","n.手提箱,公事皮包"}
                   ,{"bright [brait]","a.明亮的,辉煌的;聪明的;欢快的,美好的"}
                   ,{"brilliant ['briljənt]","a.光辉的,灿烂的;卓越的,有才华的"}
                   ,{"brim [brim]","n.边缘,帽沿"}
                   ,{"bring [briŋ]","v.拿来,带来;产生,引起;使处于某种状态"}
                   ,{"brisk [brisk]","a.轻快的;生气勃勃的;兴隆的"}
                   ,{"brittle ['britl]","a.易碎的;脆弱的;冷淡的;(声音)尖利的"}
                   ,{"broad [brɔ:d]","a.宽的,广阔的;广大的;宽宏的,豁达的"}
                   ,{"broadcast ['brɔ:dkɑ:st,-kæst]","v./n.广播(节目)"}
                   ,{"brochure ['bruʃə]","n.小册子"}
                   ,{"bronze [brɔnz]","n.青铜;青铜色,古铜色;青铜制品,铜牌"}
                   ,{"brook [brʊk]","n.小溪 vt.[常用于否定句或疑问句]容忍"}
                   ,{"broom [bru:m]","n.扫帚"}
                   ,{"brother ['brʌðə]","n.兄弟;同胞;教友"}
                   ,{"brow [brau]","n.眉(毛);额"}
                   ,{"brown [braun]","n./a.褐色(的),棕色(的)"}
                   ,{"browse [brauz]","vi.随意翻阅,浏览;(牛、羊等)吃草"}
                   ,{"bruise [bru:z]","n.青肿,挫伤;伤痕 vt.打青;挫伤"}
                   ,{"brush [brʌʃ]","n.刷(子),毛刷;画笔 v.刷,擦,掸,拂;掠过"}
                   ,{"brutal ['bru:təl]","a.残忍的;严峻的;严酷的"}
                   ,{"bubble ['bʌbl]","n.泡,水泡,气泡 v.冒泡,起泡,沸腾"}
                   ,{"bucket ['bʌkit]","n.水桶,吊桶"}
                   ,{"bud [bʌd]","n.芽,花苞 v.发芽,含苞欲放"}
                   ,{"budget ['bʌdʒit]","n.预算 v.做预算"}
                   ,{"buffet ['bʌfit]","n.自助餐"}
                   ,{"bug [bʌɡ]","n.臭虫;小毛病;窃听器 v.窃听"}
                   ,{"build [bild]","vt.建造,建筑;建设,建立 vi.增大,增强"}
                   ,{"building ['bildiŋ]","n.建筑(物),房屋,大楼 [同]structure"}
                   ,{"bulb [bʌlb]","n.灯泡,球状物"}
                   ,{"bulk [bʌlk]","n.体积,容积;主体,大批,大量,大块"}
                   ,{"bull [bul]","n.公牛"}
                   ,{"bullet ['bulit]","n.子弹,枪弹"}
                   ,{"bulletin ['bulitin]","n.公报,公告,告示"}
                   ,{"bully ['buli]","n.恃强欺弱者,小流氓 vt.威胁,欺侮"}
                   ,{"bump [bʌmp]","v.(against,into)碰;颠簸着前进 n.碰撞"}
                   ,{"bunch ['bʌntʃ]","n.(一)簇,束,捆,串"}
                   ,{"bundle ['bʌndl]","n.捆,包,束"}
                   ,{"burden ['bə:dən]","n.担子,重担,负担 vt.给予负担或麻烦"}
                   ,{"bureau ['bjuərəu]","n.署,局,司,处"}
                   ,{"bureaucracy [bjuə'rɔkrəsi]","n.官僚主义,官僚机构;(非民选的)委任官员"}
                   ,{"burglar ['bə:ɡlə]","n.(入室行窃的)盗贼"}
                   ,{"burn [bə:n]","v.燃烧,烧着;烧毁;灼伤 n.烧伤,灼伤"}
                   ,{"burst [bə:st]","v.爆裂,炸破;突然发生 n.突然破裂,爆发"}
                   ,{"bury ['beri]","v.埋(葬),安葬;埋藏,遮盖"}
                   ,{"bus [bʌs]","n.公共汽车,总线,信息通路"}
                   ,{"bush [bʊʃ]","n.灌木(丛)"}
                   ,{"business ['biznis]","n.商业,生意;事务,业务,职责"}
                   ,{"busy ['bizi]","a.忙,忙碌的;热闹的,繁忙的;(电话)占线"}
                   ,{"but [强 bʌt,弱 bət,bʌt]","conj.但是 prep.除...以外 ad.只,才,仅仅"}
                   ,{"butcher ['butʃə]","n.屠夫,卖肉者"}
                   ,{"butter ['bʌtə]","n.黄油,奶油 v.涂黄油于...上"}
                   ,{"butterfly ['bʌtəflai]","n.蝴蝶"}
                   ,{"button ['bʌtən]","n.纽扣,按钮(开关) v.扣紧;扣上纽扣"}
                   ,{"buy [bai]","vt.买,买得;向„行贿,收买 vi.购买东西"}
                   ,{"by [bai]","prep.被;凭借;经由;由于 ad.在近旁;经过"}
                   ,{"bypass ['baipɑ:s,-pæs]","n.(by-pass)旁道;vt.绕过"}
                   ,{"cab [kæb]","n.出租车,出租马车;驾驶室 vi.乘出租马车"}
                   ,{"cabbage ['kæbidʒ]","n.洋白菜,卷心菜"}
                   ,{"cabin ['kæbin]","n.客舱,机舱;小(木)屋"}
                   ,{"cabinet ['kæbinit]","n.内阁,内阁会议;(带玻璃门存物品的)橱柜"}
                   ,{"cable ['keibl]","n.电报;电缆;缆,索,钢丝绳 v.拍电报"}
                   ,{"cafe ['kæfeɪ]","n.咖啡馆,(小)餐馆"}
                   ,{"cafeteria [,kæfi'tiəriə]","n.自助食堂"}
                   ,{"cage [keidʒ]","n.笼,鸟笼;牢房,监狱"}
                   ,{"cake [keik]","n.饼,糕,蛋糕;扁平的块状物"}
                   ,{"calcium ['kælsiəm]","n.钙(化学符号 Ca)"}
                   ,{"calculate ['kælkjuleit]","v.计算,推算;计划,打算"}
                   ,{"calendar ['kælində]","n.日历,月历"}
                   ,{"call [kɔ:l]","vt.叫,喊;打电话 vi.叫;访问 n.叫;号召"}
                   ,{"calm [kɑ:m,kɑ:lm]","a.(天气,海洋等)静的 n.平静 v.(使)平静"}
                   ,{"calorie ['kæləri]","n.卡路里(食物所产生的热量或能量单位)"}
                   ,{"camel ['kæməl]","n.骆驼"}
                   ,{"camera ['kæmərə]","n.照相机,摄影机"}
                   ,{"camp [kæmp]","n.野营,营地;帐篷,阵营 v.设营,宿营"}
                   ,{"campaign [kæm'pein]","n.战役;运动"}
                   ,{"campus ['kæmpəs]","n.(大学)校园"}
                   ,{"can [强 kæn,弱 kən]","aux.v.能;可以 n.罐头;容器 vt.把...装罐"}
                   ,{"canal [kə'næl]","n.运河;(沟)渠"}
                   ,{"cancel ['kænsəl]","v.取消,把...作废;删去,划掉"}
                   ,{"cancer ['kænsə]","n.癌"}
                   ,{"candidate ['kændideit,-dət]","n.候选人,候补者;报考者"}
                   ,{"candle ['kændl]","n.蜡烛"}
                   ,{"candy ['kændi]","n.糖果,vt.用糖煮"}
                   ,{"cannon ['kænən]","n.大炮,火炮"}
                   ,{"canoe [kə'nu:]","n.独木舟,小游艇"}
                   ,{"canteen [kæn'ti:n]","n.(工厂、办公室等)食堂或小卖部"}
                   ,{"canvas ['kænvəs]","n.帆布;帆布画布,(帆布)油画"}
                   ,{"cap [kæp]","n.便帽,军帽;盖,罩,套 v.覆盖于...顶端"}
                   ,{"capable ['keipəbl]","a.有本领的,有能力的;(of)可以...的,能...的"}
                   ,{"capacity [kə'pæsəti]","n.容量,容积;能量,能力;接受力"}
                   ,{"cape [keip]","n.海角,岬;披肩,短披风"}
                   ,{"capital ['kæpitəl]","n.首都;大写字母;资本 a.主要的,大写字母的"}
                   ,{"capitalism ['kæpitəlizəm]","n.资本主义"}
                   ,{"capsule ['kæpsju:l]","n.胶囊;太空舱"}
                   ,{"captain ['kæptin]","n.首领,队长;船长;上尉 v.做...的首领,指挥"}
                   ,{"captive ['kæptiv]","n.俘虏 a.被俘虏的,被监禁的"}
                   ,{"capture ['kæptʃə]","v./n.捕获,俘虏;夺得,攻占"}
                   ,{"car [kɑ:]","n.汽车,车辆,车;(火车)车厢"}
                   ,{"carbohydrate [,kɑ:bəu'haidreit]","n.碳水化合物; 糖类;(plural)淀粉质或糖类"}
                   ,{"carbon ['kɑ:bən]","n.碳"}
                   ,{"card [kɑ:d]","n.卡片,名片;纸牌;纸片"}
                   ,{"cardinal ['kɑ:dinəl]","n.(天主教的)红衣主教 a.首要的,基本的"}
                   ,{"care [kεə]","n.小心;关怀,照料 v.(about)关心,介意,计较"}
                   ,{"career [kə'riə]","n.(个人的)事业;专业,生涯,职业,经历"}
                   ,{"careful ['kεəful]","a.小心的,仔细的;细致的,精心的"}
                   ,{"caress [kə'res]","vt./n.爱抚,抚摸"}
                   ,{"cargo ['kɑ:ɡəu]","n.船货,货物"}
                   ,{"carpenter ['kɑ:pəntə]","n.木工,木匠"}
                   ,{"carpet ['kɑ:pit]","n.地毯"}
                   ,{"carriage ['kæridʒ]","n.(四轮)马车;(火车)客车厢"}
                   ,{"carrier ['kæriə]","n.搬运人;载体"}
                   ,{"carrot ['kærət]","n.胡萝卜"}
                   ,{"carry ['kæri]","v.运送,搬运;传送,传播;领,带"}
                   ,{"cart [kɑ:t]","n.(二轮货运)马车,手推车"}
                   ,{"cartoon [kɑ:'tu:n]","n.漫画,幽默画;动画片"}
                   ,{"carve [kɑ:v]","v.(雕)刻"}
                   ,{"case [keis]","n.箱,盒,容器;情况,事实;病例;案件"}
                   ,{"cash [kæʃ]","n.现金,现款 v.兑现,付(或收)现款"}
                   ,{"cashier [kæ'ʃiə]","n.收银员,出纳员"}
                   ,{"cassette [kæ'set]","n.盒子;盒式磁带"}
                   ,{"cast [kɑ:s, kæst]","v.投,扔,掷,抛;铸造;投票;n.演员表"}
                   ,{"castle ['kɑ:sl, 'kæ-]","n.城堡;(国际象棋中的)车"}
                   ,{"casual ['kæʒjuəl]","a.偶然的,碰巧的;临时的,非正式的"}
                   ,{"casualty ['kæʒjuəlti]","n.伤亡人员;受害人;损失的东西;急诊室"}
                   ,{"cat [kæt]","n.猫;猫科动物"}
                   ,{"catalog ['kætəlɔɡ]","n.(catalogue)目录(册) v.编目(录)"}
                   ,{"catastrophe [kə'tæstrəfi]","n.大灾难;(悲剧)结局"}
                   ,{"catch [kætʃ]","v.捕捉,捕获;赶上;感染;理解,听到"}
                   ,{"category ['kætiɡəri]","n.种类,部属,类目;范畴,类型"}
                   ,{"cater ['keitə]","vi.(for/to)满足,迎合;(for)提供饮食及服务"}
                   ,{"cathedral [kə'θi:drəl]","n.大教堂"}
                   ,{"Catholic ['kæθlɪk]","a.天主教的 n.天主教徒"}
                   ,{"cattle ['kætl]","n.牛;牲口,家畜"}
                   ,{"cause [kɔ:z]","n.原因;事业,事件,奋斗目标 v.使产生,引起"}
                   ,{"caution ['kɔ:ʃən]","n.谨慎;注意(事项),警告 vt.劝...小心"}
                   ,{"cautious ['kɔ:ʃəs]","a.(of)小心的,谨慎的"}
                   ,{"cave [keiv]","n.洞,穴"}
                   ,{"cease [si:s]","v./n.停止,中止"}
                   ,{"ceiling ['si:liŋ]","n.天花板;(规定价格、工资等的)最高限额"}
                   ,{"celebrate ['selibreit]","vt.庆祝;颂扬,赞美 vi.庆祝,过节"}
                   ,{"celebrity [si'lebrəti]","n.名人,名流;著名,名声,名望"}
                   ,{"cell [sel]","n.细胞;小房间;蜂房;电池"}
                   ,{"cellar ['selə]","n.地窑,地下室"}
                   ,{"cement [si'ment]","n.水泥;胶泥,胶接剂 v.胶合;巩固,加强"}
                   ,{"cemetery ['semitəri]","n.坟墓,墓地,坟场"}
                   ,{"census ['sensəs]","n.人口普查(调查)"}
                   ,{"cent [sent]","n.分(币);百 per cent 百分之"}
                   ,{"centigrade ['sentiɡreid]","n./a.摄氏温度计(的);百分度(的)"}
                   ,{"centimetre ['senti,mi:tə]","n.(centimeter)厘米"}
                   ,{"central ['sentrəl]","a.中心的,中央的,中枢的;主要的"}
                   ,{"centre ['sentə]","n.中心,中央,中间 vt.集中 vi.以..为中心"}
                   ,{"century ['sentʃuri]","n.世纪,(一)百年"}
                   ,{"cereal ['siəriəl]","n.加工而成的谷类食物;谷类植物,谷物"}
                   ,{"ceremony ['serəməni]","n.典礼,仪式;礼节,礼仪"}
                   ,{"certain ['sə:tən]","a.某,某一,某些;(of)一定的,确信的,可靠的"}
                   ,{"certainly ['sə:tənli]","ad.一定,必定,无疑;当然,行"}
                   ,{"certainty ['sə:tənti]","n.必然,肯定;必然的事"}
                   ,{"certificate [sə'tifikeit]","n.证(明)书,执照"}
                   ,{"certify ['sə:tifai]","vt.证明,证实;发证书(或执照)给"}
                   ,{"chain [tʃein]","n.链(条);(pl.)镣铐;一连串 v.用链条拴住"}
                   ,{"chair [tʃεə]","n.椅子;(会议的)主席 vt.当...的主席,主持"}
                   ,{"chairman ['tʃεəmən]","n.主席,议长,会长,董事长"}
                   ,{"chalk [tʃɔ:k]","n.粉笔,白垩"}
                   ,{"challenge ['tʃælindʒ]","n.挑战(书);艰巨任务,难题 v.向...挑战"}
                   ,{"chamber ['tʃeimbə]","n.房间,室;会议室;议院;(动物体内)腔室"}
                   ,{"champagne [,ʃæm'pein]","n.香槟酒;微黄色"}
                   ,{"champion ['tʃæmpiən]","n.冠军,得胜者;拥护者,斗士"}
                   ,{"chance [tʃɑ:ns,tʃæns]","n.机会;可能性;偶然性,运气 v.碰巧,偶然发生"}
                   ,{"chancellor ['tʃɑːnsələ(r)]","n.(英)大臣;法官;(德、奥)总理;大学校长"}
                   ,{"change [tʃeindʒ]","n.改变,变化;零钱 v.更换,调换,交换;改变"}
                   ,{"channel ['tʃænəl]","n.海峡,水道;信道,波道;路线,途径"}
                   ,{"chaos ['keiɔs]","n.混乱,紊乱"}
                   ,{"chap [tʃæp]","n./v.(皮肤)变粗糙;发痛;n.小伙子"}
                   ,{"chapter ['tʃæptə]","n. 章;回,篇"}
                   ,{"character ['kærəktə]","n.性格,品质,特性;人物,角色;字符,(汉)字"}
                   ,{"characteristic [,kærəktə'ristik]","a.(of)特有的,独特的 n.特征,特性"}
                   ,{"characterize ['kærəktəraiz]","v.(characterise)表示„的特性;描述...特性"}
                   ,{"charge [tʃɑ:dʒ]","v.索(价);控告;充电 n.(pl.)费用,代价;电荷"}
                   ,{"charity ['tʃærəti]","n.慈善(团体),仁慈,施舍"}
                   ,{"charm [tʃɑ:m]","n.吸引力,魅力 v.迷人,(使)陶醉;施魔法于"}
                   ,{"chart [tʃɑ:t]","n.图表;航海图;航行图 vt.绘图表,制图表"}
                   ,{"charter ['tʃɑ'tə]","v.租船,租车,租用飞机;n.宪章,特许状"}
                   ,{"chase [tʃeis]","v./n.追逐,追求"}
                   ,{"chat [tʃæt]","v./n.闲谈,聊天"}
                   ,{"cheap [tʃi:p]","a.便宜的;低劣的,不值钱的"}
                   ,{"cheat [tʃi:t]","v.欺骗;作弊 n.骗子;欺诈,欺骗行为"}
                   ,{"cheek [tʃi:k]","n.面颊,脸"}
                   ,{"cheer [tʃiə]","v.(使)振奋,(使)高兴 v./n.喝彩,欢呼"}
                   ,{"cheese [tʃi:z]","n.干酪,乳酪"}
                   ,{"chef [ʃef]","n.(餐馆等的)厨师长,厨师"}
                   ,{"chemical ['kemikəl]","a.化学的 n.(pl.)化学制品,化学药品"}
                   ,{"chemist ['kemist]","n.化学家;药剂师"}
                   ,{"chemistry ['kemistri]","n.化学"}
                   ,{"cheque [tʃek]","n.(check)支票,空白支票;总收入"}
                   ,{"cherish ['tʃeriʃ]","vt.抱有,怀有(希望等);爱护,抚育;珍爱"}
                   ,{"cherry ['tʃeri]","n.樱桃(树)"}
                   ,{"chess [tʃes]","n.棋,国际象棋"}
                   ,{"chest [tʃest]","n.胸腔,胸膛;箱,柜"}
                   ,{"chew [tʃu:]","v.咀嚼;思量"}
                   ,{"chicken ['tʃikin]","n.鸡肉;鸡,小鸡,小鸟"}
                   ,{"chief [tʃi:f]","a.主要的,首要的 n.首领,领袖"}
                   ,{"child [tʃaild]","n.( [pl.] children)小孩,儿童,儿女"}
                   ,{"childhood ['tʃaildhud]","n.幼年,童年"}
                   ,{"chill [tʃil]","n.寒冷,寒气,寒战 v.使寒冷"}
                   ,{"chimney ['tʃimni]","n.烟囱"}
                   ,{"chin [tʃin]","n.下巴,颏"}
                   ,{"china ['tʃaɪnə]","n.瓷器"}
                   ,{"chip [tʃip]","n.切屑,碎片;(土豆等的)薄片;集成电路块"}
                   ,{"chocolate ['tʃɔkəlit]","n.巧克力(糖),赭色"}
                   ,{"choice [tʃɔis]","n.选择(机会),抉择,选择项;入选者 a.精选的"}
                   ,{"choke [tʃəuk]","v.窒息,噎住;闷塞,堵塞,阻塞"}
                   ,{"choose [tʃu:z]","v.选择,挑选;甘愿"}
                   ,{"chop [tʃɔp]","v.砍,劈,斩 n.排骨,肉块"}
                   ,{"chorus ['kɔ:rəs]","n.合唱队;合唱 v.异口同声地说,随声附和"}
                   ,{"Christ [kraɪst]","n.基督,救世主,耶稣"}
                   ,{"Christian ['krɪstʃən]","n.基督教徒 a.基督教徒的"}
                   ,{"Christmas ['krɪsməs]","n.圣诞节"}
                   ,{"chronic ['krɔnik]","a.(疾病)慢性的;积习难改的;严重的,坏的"}
                   ,{"church [tʃə:tʃ]","n.教堂;教会,教派;(宗教的)礼拜仪式"}
                   ,{"cigar [si'ɡɑ:]","n.雪茄烟"}
                   ,{"cigaret [,siɡə'ret,'siɡ-]","n.(cigarette)香烟,纸烟,卷烟"}
                   ,{"cinema ['sinəmə]","n.电影院;电影,影片"}
                   ,{"circle ['sə:kl]","n.圆,圆周;集团;周期,循环 v.环绕,旋转"}
                   ,{"circuit ['sə:kit]","n.环行,周线,巡回;电路,线路"}
                   ,{"circular ['sə:kjulə]","a.圆(形)的,环形的;循环的 n.传单,通报"}
                   ,{"circulate ['sə:kjuleit]","v.(使)循环,(使)流通"}
                   ,{"circumference [sə'kʌmfərəns]","n.圆周,周围,胸围"}
                   ,{"circus ['sə:kəs]","n.马戏团,杂技团;马戏场,杂技场"}
                   ,{"cite [sait]","v.引用,引证,举(例)"}
                   ,{"citizen ['sitizən]","n.公民;市民,居民"}
                   ,{"city ['siti]","n.城市;都市;市"}
                   ,{"civil ['sivəl]","a.公民的,市民的;民间的;民用的;有礼貌的"}
                   ,{"civilian [si'viljən]","n.平民 a.平民的;民用的"}
                   ,{"civilization [,sivilai'zeiʃən,-li'z-]","n.(=civilisation)文明,文化"}
                   ,{"civilize ['sivilaiz]","v.(=civilise)使文明,开化"}
                   ,{"claim [kleim]","v.要求;声称;索赔 n.要求;断言;索赔;权利"}
                   ,{"clap [klæp]","v.拍手,拍,轻拍 n.拍(手),掌声,霹雳声"}
                   ,{"clarify ['klærifai]","v.澄清,阐明"}
                   ,{"clarity ['klærəti]","n.清晰,明晰"}
                   ,{"clash [klæʃ]","v./n.碰撞 n.碰撞声"}
                   ,{"clasp [klɑ:sp,klæsp]","n.扣子,钩子;握手 v.扣住,钩住;紧握,紧抱"}
                   ,{"class [klɑ:s,klæs]","n.班级,年级;种类,等级,阶级;(一节)课"}
                   ,{"classic ['klæsik]","n.(pl.)杰作,名著 a.第一流的,不朽的"}
                   ,{"classical ['klæsikəl]","a.经典的,古典(文学)的"}
                   ,{"classification [,klæsifi'keiʃən]","n.分类,分级"}
                   ,{"classify ['klæsifai]","v.分类,分等(级)"}
                   ,{"classmate ['klɑ:smeit]","n.同班同学"}
                   ,{"classroom ['klɑ:srum]","n.教室,课堂"}
                   ,{"clause [klɔ:z]","n.(正式文件或法律文件的)条款;从句,分句"}
                   ,{"claw [klɔ:]","n.爪,脚爪"}
                   ,{"clay [klei]","n.粘土,泥土"}
                   ,{"clean [kli:n]","a.清洁的,干净的 v.除去..污垢,把...弄干净"}
                   ,{"clear [kliə]","a./ad.清晰的(地)vt.清除;使清楚 vi.变清澈"}
                   ,{"clergy ['klə:dʒi]","n.[总称]牧师,神职人员"}
                   ,{"clerk [klɑ:k, klə:k]","n.职员,办事员;店员"}
                   ,{"clever ['klevə]","a.聪明的,伶俐的,机敏的,精巧的"}
                   ,{"click [klik]","n.滴答声;vi.发出滴答声"}
                   ,{"client ['klaiənt]","n.律师等的当事人,委托人;商店的顾客"}
                   ,{"cliff [klif]","n.悬崖;峭壁"}
                   ,{"climate ['klaimit]","n.气候;风气,社会思潮"}
                   ,{"climax ['klaimæks]","n.顶点,高潮"}
                   ,{"climb [klaim]","v./n.攀登,爬"}
                   ,{"cling [klɪŋ]","v.(to)粘住;依附;坚持"}
                   ,{"clinic ['klinik]","n.诊所"}
                   ,{"clip [klip]","v.剪,修剪;钳,夹住 n.夹,钳;回形针"}
                   ,{"cloak [kləuk]","n.斗蓬,披风;掩饰,幌子 vt.掩盖,掩饰"}
                   ,{"clock [klɔk]","n.钟 vt.记录(时间、速度等),为„计时"}
                   ,{"clockwise ['klɔkwaiz]","a.顺时针方向"}
                   ,{"clone [kləun]","n.无性繁殖,克隆;复制品 v.克隆"}
                   ,{"close [kləuz]","v./n.关;结束 a./ad.近的(地);紧密的(地)"}
                   ,{"closet ['klɔzit]","n.(壁)橱 a.私下的 vt.把„引进密室会谈"}
                   ,{"cloth [klɔθ,klɔ:θ]","n.(一块)布,织物,衣料"}
                   ,{"clothe [kləuð]","v.(给„)穿衣,供给„衣服"}
                   ,{"clothes [kləuðz]","n.衣服(虽为复数,亦不可数)"}
                   ,{"clothing ['kləuðiŋ]","n.服装,被褥"}
                   ,{"cloud [klaud]","n.云(状物);遮暗物,阴影;一大群"}
                   ,{"cloudy ['klaudi]","a.多云的,阴(天)的;混浊的,模糊的"}
                   ,{"club [klʌb]","n.俱乐部,夜总会;社团;棍棒,球棒"}
                   ,{"clue [klu:]","n.线索,暗示"}
                   ,{"clumsy ['klʌmzi]","a.笨拙的,愚笨的"}
                   ,{"cluster ['klʌstə]","n.丛,群,串 v.群集,丛生"}
                   ,{"clutch [klʌtʃ]","v.抓住,攫住,掌握 n.离合器"}
                   ,{"coach [kəutʃ]","n.长途公共汽车;教练 vt.训练,指导,培训"}
                   ,{"coal [kəul]","n.煤,煤块"}
                   ,{"coalition [,kəuə'liʃən]","n.结合体,同盟;结合,联合"}
                   ,{"coarse [kɔ:s]","a.粗糙的,粗劣的;粗鲁的,粗俗的"}
                   ,{"coast [kəust]","n.海岸,海滨"}
                   ,{"coat [kəut]","n.上衣,外套;表皮;层,覆盖物 v.涂(盖)上"}
                   ,{"cocaine [kə'kein]","n.可卡因,古柯碱(用作局部麻醉剂)"}
                   ,{"cock [kɔk]","n.公鸡,雄鸡;龙头,开关"}
                   ,{"code [kəud]","n.代码,代号,密码;法典,法规,规划"}
                   ,{"coffee ['kɔfi]","n.咖啡(色)"}
                   ,{"cognitive ['kɔɡnitiv]","a.认知的,认识能力的"}
                   ,{"coherent [kəu'hiərənt]","a.一致的,协调的;(话语等)条理清楚的"}
                   ,{"cohesive [kəu'hi:siv]","a.粘合性的,有结合力的"}
                   ,{"coil [kɔil]","v.卷,盘绕 n.(一)卷,(一)圈;线圈,绕组"}
                   ,{"coin [kɔin]","n.硬币,货币 v.铸造(硬币),创造(新词)"}
                   ,{"coincide [,kəuin'said]","vi.同时发生;巧合;一致;相符"}
                   ,{"coincidence [kəu'insidəns]","n.巧合;同时发生,共同存在;符合,一致"}
                   ,{"coke [kəʊk]","n.焦炭;可口可乐(COCA-COLA)的缩写"}
                   ,{"cold [kəuld]","a.冷的,寒冷的;冷淡的 n.冷,寒冷;伤风"}
                   ,{"collaborate [kə'læbəreit]","vi.协作,合作;(与敌人)勾结"}
                   ,{"collapse [kə'læps]","v./n.倒塌;崩溃;(价格)暴跌;倒闭,破产"}
                   ,{"collar ['kɔlə]","n.衣领;环状物"}
                   ,{"colleague ['kɔli:ɡ]","n.同事,同僚"}
                   ,{"collect [kə'lekt]","v.收集,搜集;领取,接走;收(税等);聚集,堆积"}
                   ,{"collection [kə'lekʃən]","n.收藏(品),收集(物)"}
                   ,{"collective [kə'lektiv]","n.集体 a.集体的,共同的"}
                   ,{"college ['kɔlidʒ]","n.学院,高等专科学校,大学"}
                   ,{"collide [kə'laid]","vi.[with]互撞,碰撞;冲突,抵触"}
                   ,{"collision [kə'liʒən]","n.碰撞;(利益,意见等的)冲突,抵触"}
                   ,{"colonel ['kə:nəl]","n.(陆军)上校"}
                   ,{"colonial [kə'ləunjəl]","a.殖民地的,关于殖民的 n.殖民地居民"}
                   ,{"colony ['kɔləni]","n.殖民地;侨民;聚居区;(动植物的)群体"}
                   ,{"color ['kʌlə]","n.(=colour)颜色;颜料;肤色 v.给„着色"}
                   ,{"column ['kɔləm]","n.圆柱,柱状物;列;(报刊中的)专栏"}
                   ,{"comb [kəum]","n.梳子 v.梳(理)"}
                   ,{"combat ['kɔmbæt,kəm'bæt]","v./n.战斗,搏斗,格斗"}
                   ,{"combination [,kɔmbi'neiʃən]","n.结合,联合;化合;团体;组合数码"}
                   ,{"combine [kəm'bain]","v.联合;结合;化合 n.集团;联合企业"}
                   ,{"come [kʌm]","v.来;出现于,产生;是,成为;开始,终于"}
                   ,{"comedy ['kɔmidi]","n.喜剧;喜剧性事件"}
                   ,{"comfort ['kʌmfət]","n.舒适,安逸;安慰,慰问 v.安慰,使舒适"}
                   ,{"comfortable ['kʌmfətəbl]","a.舒适的,舒服的;感到舒适的,安逸的"}
                   ,{"comic ['kɔmik]","a.喜剧的,滑稽的 n.连环漫画杂志;喜剧演员"}
                   ,{"command [kə'mɑ:nd]","n./v.命令,指挥,控制 n.掌握,运用能力"}
                   ,{"commemorate [kə'meməreit]","vt.纪念,庆祝"}
                   ,{"commence [kə'mens]","vt.开始 vi.获得学位"}
                   ,{"commend [kə'mend]","v.称赞,表扬:委托保管;推荐"}
                   ,{"comment ['kɔment]","n.注释,评论,意见 v.(on)注释,评论"}
                   ,{"commerce ['kɔmə:s]","n.商业,贸易;交际,交往"}
                   ,{"commercial [kə'mə:ʃəl]","a.商业的;商务的;可获利的 n.广告节目"}
                   ,{"commission [kə'miʃən]","n.委员会;委任,委托(书),代办;佣金,手续费"}
                   ,{"commit [kə'mit]","v.把„交托给,提交;犯(错误),干(坏事)"}
                   ,{"committee [kə'miti]","n.委员会,全体委员"}
                   ,{"commodity [kə'mɔditi]","n.(pl.)日用品;商品;农/矿产品;有用之物"}
                   ,{"common ['kɔmən]","a.普通的;共同的;一般的;n.公有地"}
                   ,{"commonplace ['kɔmənpleis]","a.普通的,平庸的 n.寻常的事物,平庸的东西"}
                   ,{"commonwealth ['kɔmənwelθ]","n.共和国,联邦,共同体"}
                   ,{"communicate [kə'mju:nikeit]","v.传达,传送;交流;通讯,通话"}
                   ,{"communication [kə,mju:ni'keiʃən]","n.通讯,传达;(pl.)通讯系统;交通(工具)"}
                   ,{"communism ['kɔmjunizəm]","n.共产主义"}
                   ,{"community [kə'mju:niti]","n.同一地区的全体居民,社会,社区;共同体"}
                   ,{"commute [kə'mju:t]","v.乘公交车上下班,乘车(船等)往返于两地"}
                   ,{"compact [kəm'pækt]","a.紧密的,结实的;简明的 v.使紧凑,压缩"}
                   ,{"companion [kəm'pænjən]","n.同伴,共事者;伴侣"}
                   ,{"company ['kɔmpəni]","n.公司;陪伴;宾客;连(队),(一)群,队,伙"}
                   ,{"comparable ['kɔmpərəbl]","a.(with,to)可比较的,比得上的"}
                   ,{"comparative [kəm'pærətiv]","a.比较的,相当的"}
                   ,{"compare [kəm'pεə]","vt.(to,with)比较;(to)把„比作 vi.相比"}
                   ,{"comparison [kəm'pærisən]","n.比较,对比,比喻,比拟"}
                   ,{"compartment [kəm'pɑ:tmənt]","n.卧车包房,(客车车厢内的)隔间;分隔的空间"}
                   ,{"compass ['kʌmpəs]","n.罗盘,指南针;(pl.)圆规"}
                   ,{"compassion [kəm'pæʃən]","n.同情;怜悯(for)"}
                   ,{"compatible [kəm'pætəbl]","a.能和睦相处的,合得来的;兼容的"}
                   ,{"compel [kəm'pel]","v.强迫,迫使"}
                   ,{"compensate ['kɔmpenseit]","v.(for)补偿,赔偿"}
                   ,{"compensation [,kɔmpen'seiʃən]","n.补偿(或赔偿)的款物;补偿,赔偿"}
                   ,{"compete [kəm'pi:t]","vi.比赛;竞争;对抗"}
                   ,{"competent ['kɔmpitənt]","a.有能力的,能胜任的;足够的"}
                   ,{"competition [,kɔmpi'tiʃən]","n.竞争,比赛;角逐,较量;[总称]竞争者"}
                   ,{"competitive [kəm'petitiv]","a.竞争的;好竞争的;(价格等的)有竞争力的"}
                   ,{"compile [kəm'pail]","vt.编辑,编制,搜集"}
                   ,{"complain [kəm'plein]","v.(about,of)抱怨;申诉"}
                   ,{"complaint [kəm'pleint]","n.抱怨,诉苦,怨言,控告;疾病"}
                   ,{"complement ['kɔmplimənt]","n.补足物,船上的定员;补语 vt.补充,补足"}
                   ,{"complete [kəm'pli:t]","a.完全的,圆满的 v.完成,结束,使完满"}
                   ,{"complex ['kɔmpleks]","a.复杂的;合成的,综合的 n.联合体"}
                   ,{"complicate ['kɔmplikeit]","v.使..复杂;使..难懂;使(疾病等)恶"}
                   ,{"complicated ['kɔmplikeitid]","a.错综复杂的,麻烦的,难解的"}
                   ,{"complication [,kɔmpli'keiʃən]","n.复杂,纠纷;并发症"}
                   ,{"compliment ['kɔmplimənt]","n.(pl.)问候,致意 n./v.称赞,恭维"}
                   ,{"comply [kəm'plai]","v.(with)遵照,照做,应允;顺从,服从"}
                   ,{"component [kəm'pəunənt]","n.组成部分,成分,元件 a.组成的,合成的"}
                   ,{"compose [kəm'pəuz]","v.组成,构成;(of)由„组成;创作(诗歌等)"}
                   ,{"composite ['kɔmpəzit]","a.混合成的,综合成的 n.合成物,复合材料"}
                   ,{"composition [,kɔmpə'ziʃən]","n.作品,作文,乐曲;作曲;结构,组成,成分"}
                   ,{"compound ['kɔmpaund]","n.混合物,化合物 a.混合的,化合的;vt.混合"}
                   ,{"comprehend [,kɔmpri'hend]","vt.理解,领会;包含,包括"}
                   ,{"comprehension [,kɔmpri'henʃən]","a.理解(力),领悟;包含,包含力"}
                   ,{"comprehensive [,kɔmpri'hensiv]","a.内容广泛的,总括性的,综合的"}
                   ,{"compress [kəm'pres,'kɔmpres]","vt.压紧,压缩; (把思想、文字等)浓缩"}
                   ,{"comprise [kəm'praiz]","vt.包含,包括,由...组成;构成,组成"}
                   ,{"compromise ['kɔmprəmaiz]","n.妥协,折衷 vi.妥协 vt.危及,放弃(原则等)"}
                   ,{"compulsory [kəm'pʌlsəri]","a.必须做的,强制性的,(课程)必修的"}
                   ,{"compute [kəm'pju:t]","v./n.计算,估计"}
                   ,{"computer [kəm'pju:tə]","n.计算机,电脑;计算者"}
                   ,{"comrade ['kɔmrid]","n.同志,同事,同伴,朋友"}
                   ,{"conceal [kən'si:l]","v.隐藏,隐瞒,隐蔽"}
                   ,{"concede [kən'si:d]","vt.承认;容许;(比赛结束前)认输;退让"}
                   ,{"conceive [kən'si:v]","v.(of)设想,构思,想象;以为;怀胎,怀有"}
                   ,{"concentrate ['kɔnsəntreit]","v.(on)集中,专心;浓缩 n.浓缩物"}
                   ,{"concentration [,kɔnsən'treiʃən]","n.专心,专注;集中,集结;浓度"}
                   ,{"concept ['kɔnsept]","n.概念,观念,设想"}
                   ,{"concern [kən'sə:n]","v.涉及,关系到 v./n.关心 n.(利害)关系"}
                   ,{"concerning [kən'sə:niŋ]","prep.关于,论及"}
                   ,{"concert [kən'sə:t,'kɔnsə:t]","n.音乐会,演奏会;一齐,一致"}
                   ,{"concession [kən'seʃən]","n.让步,妥协;特许(权)"}
                   ,{"concise [kən'sais]","a.简明的,简洁的"}
                   ,{"conclude [kən'klu:d]","v.结束,终止;断定,下结论;缔结,议定"}
                   ,{"conclusion [kən'klu:ʒən]","n.结论,推论;结尾;缔结,议定"}
                   ,{"concrete [kən'kri:t,'kɔnkri:t]","a.具体的,实质性的 n.混凝土 v.用混凝土修筑"}
                   ,{"condemn [kən'dem]","v.谴责,指责;判刑,宣告有罪"}
                   ,{"condense [kən'dens]","v.(使)冷凝,(使)凝结;浓缩,压缩,简缩"}
                   ,{"condition [kən'diʃən]","n.条件,状况,环境 vt.决定;支配;训练"}
                   ,{"conduct ['kɔndʌkt,kən'dʌkt]","n.行为,品行 v.引导;管理;指挥(乐队);传导"}
                   ,{"conductor [kən'dʌktə]","n.管理者;(汽车)售票员;领队,指挥;导体"}
                   ,{"confer [kən'fə:]","v.商讨;授予,颁给(勋衔,学位等)"}
                   ,{"conference ['kɔnfərəns]","n.(正式)会议;讨论,商谈"}
                   ,{"confess [kən'fes]","v.供认,承认,坦白,忏悔"}
                   ,{"confidence ['kɔnfidəns]","n.(in)信任;信心,自信;秘密,机密"}
                   ,{"confident ['kɔnfidənt]","n.(of,in)确信的,自信的"}
                   ,{"confidential [,kɔnfi'denʃəl]","a.秘(机)密的;表示信任的;担任机密工作的"}
                   ,{"confine [kən'fain,'kɔnfain]","vt.限制;使不外出,禁闭 n.[pl.]界限,范围"}
                   ,{"confirm [kən'fə:m]","v.使更坚固,使更坚定;(进一步)证实;确认"}
                   ,{"conflict [kən'flikt,'kɔnflikt]","n.战斗,斗争;抵触,冲突 v.(with)抵触,冲突"}
                   ,{"conform [kən'fɔ:m]","vi.(to)遵守,适应;相似,一致,符合"}
                   ,{"confront [kən'frʌnt]","v.使面临,使遭遇;面对(危险等)"}
                   ,{"confuse [kən'fju:z]","v.使混乱,混淆"}
                   ,{"confusion [kən'fju:ʒən]","n.困惑,糊涂;混淆;混乱,骚乱"}
                   ,{"congratulate [kən'ɡrætʃu,leit]","v.(on)祝贺,向„致贺词"}
                   ,{"congratulation [kən,ɡrætʃu'leiʃən]","n.(on)祝贺,(pl.)祝贺词"}
                   ,{"congress ['kɔŋɡres,kən'ɡres]","n.(代表)大会;(美国等国的)国会,议会"}
                   ,{"conjunction [kən'dʒʌŋkʃən]","n.接合,连接,联合;连(接)词"}
                   ,{"connect [kə'nekt]","vt.连接;与„联系,接通(电话) vi.连接"}
                   ,{"connection [kə'nekʃən]","n.(connexion)联系,连接;亲戚,社会关系"}
                   ,{"conquer ['kɔŋkə]","v.征服,战胜,占领;克服,破除(坏习惯等)"}
                   ,{"conquest ['kɔŋkwest]","n.征服,征服地,掠取物"}
                   ,{"conscience ['kɔnʃəns]","n.良心,良知"}
                   ,{"conscientious [,kɔnʃi'enʃəs]","a.审慎正直的,认真的,本着良心的"}
                   ,{"conscious ['kɔnʃəs]","a.(of)意识到的,自觉的;神志清醒的"}
                   ,{"consecutive [kən'sekjutiv]","a.连续的;连贯的;顺序的"}
                   ,{"consensus [kən'sensəs]","n.(意见等的)一致,一致同意,共识"}
                   ,{"consent [kən'sent]","v./n.(to)同意,赞成,答应"}
                   ,{"consequence ['kɔnsi,kwəns]","n.结果,后果,影响;重要性"}
                   ,{"consequently ['kɔnsi,kwəntli]","ad.结果,因此,所以"}
                   ,{"conservation [,kɔnsə'veiʃən]","n.保存,保护,保守;守恒,不灭"}
                   ,{"conservative [kən'sə:vətiv]","a.保守的,守旧的 n.保守主义者"}
                   ,{"consider [kən'sidə]","v.考虑,细想;体谅,顾及;认为,把„看作"}
                   ,{"considerable [kən'sidərəbl]","a.相当大(或多)的,可观的;值得考虑的"}
                   ,{"considerate [kən'sɪdərət]","a.考虑周到的,体谅的"}
                   ,{"consideration [kən,sidə'reiʃən]","n.需要考虑的事,理由;考虑,思考;体谅,照顾"}
                   ,{"consist [kən'sist]","v.(in)在于,存在于;(of)由...组成,由...构成"}
                   ,{"consistent [kən'sistənt]","a.(in)前后一致的;(with)一致,符合"}
                   ,{"console [kən'səul]","n.控制台,仪表板;落地柜 vt.安慰,慰问"}
                   ,{"consolidate [kən'sɔlideit]","v.使加固,使加强;(把...)联为一体,合并"}
                   ,{"conspicuous [kən'spikjuəs]","a.显眼的,明显的"}
                   ,{"conspiracy [kən'spirəsi]","n.阴谋,密谋,共谋"}
                   ,{"constant ['kɔnstənt]","a.固定的,持续的,忠实的 n.常数,恒量"}
                   ,{"constituent [kən'stitjuənt]","n.选民;成分,组分 a.组成的,构成的"}
                   ,{"constitute ['kɔnstitju:t]","vt.组成,构成,形成;设立,建立,任命"}
                   ,{"constitution [,kɔnsti'tju:ʃən]","n.构成,构造,组成(方式),成分;体格;宪法"}
                   ,{"constrain [kən'strein]","vt.限制,约束;克制,抑制"}
                   ,{"construct [kən'strʌkt]","v.建设,建造,构造;创立"}
                   ,{"construction [kən'strʌkʃən]","n.建造,构造;建筑物,结构;释义,解释"}
                   ,{"consult [kɔn'sʌlt,'kɔnsʌlt]","v.请教,向...咨询,找...商量;查阅,查看"}
                   ,{"consultant [kən'sʌltənt]","n.会诊医师,顾问医生;顾问"}
                   ,{"consume [kən'sju:m]","vt.消耗;吃完,喝光;(with)使着迷;烧毁"}
                   ,{"consumption [kən'sʌmpʃən]","n.消费(量),消耗"}
                   ,{"contact ['kɔntækt,kən'tækt]","v./n.(使)接触,联系,交往"}
                   ,{"contain [kən'tein]","v.包含,容纳;容忍,抑制;可被...除尽"}
                   ,{"container [kən'teinə]","n.容器;集装箱"}
                   ,{"contaminate [kən'tæmi,neit]","v.弄污,弄脏,毒害,传染,染污"}
                   ,{"contemplate ['kɔntəm,pleit]","vt.盘算,计议;周密考虑;注视,凝视"}
                   ,{"contemporary [kən'tempərəri]","a.现代的,当代的;同时代的"}
                   ,{"contempt [kən'tempt]","n.轻视,藐视;受辱,丢脸"}
                   ,{"contend [kən'tend]","v.竞争,斗争;坚决主张"}
                   ,{"content ['kɔntent]","n.容量,内容,(pl.)目录 a.(with)满足的"}
                   ,{"contest ['kɔntest, kən'test]","n.竞争,竞赛,比赛 v.竞争,比赛,争论"}
                   ,{"context ['kɔntekst]","n.(文章等)前后关系;(事件等发生的)背景"}
                   ,{"continent ['kɔntinənt]","n.大陆,洲"}
                   ,{"continual [kən'tinjuəl]","a.不断的,连续的,频繁的"}
                   ,{"continue [kən'tinju:]","v.继续,连续,延伸"}
                   ,{"continuous [kən'tinjuəs]","a.连续的,持续的"}
                   ,{"contract ['kɔntrækt,kən'trækt]","n.(承包)合同/契约 v.订合同/契约;使缩小"}
                   ,{"contradict [,kɔntrə'dikt]","v.反驳;同„矛盾,同„抵触"}
                   ,{"contradiction [,kɔntrə'dikʃən]","n.反驳,否认;矛盾,不一致"}
                   ,{"contrary ['kɔntrəri]","a.(to)相反的,矛盾的 n.反对,矛盾;相反"}
                   ,{"contrast [kən'trɑ:st,-'træst]","n.对比,对照 vi.形成对比 vt.把...与...对比"}
                   ,{"contribute [kən'tribju:t]","v.(to)贡献,捐助,捐献;投稿"}
                   ,{"contribution [,kəntri'bju:ʃən]","n.贡献;捐款,捐献物;投稿"}
                   ,{"contrive [kən'traiv]","vt.谋划,策划;设法做到;设计,想出"}
                   ,{"control [kən'trəul]","n.(over)控制,支配 v.控制,支配"}
                   ,{"controversial [,kɔntrə'və:ʃəl]","a.引起争论的,有争议的"}
                   ,{"controversy ['kɔntrə,və:si]","n.争论,辩论,争吵"}
                   ,{"convenience [kən'vi:njəns]","n.便利,方便;(pl.)便利设备"}
                   ,{"convenient [kən'vi:njənt]","a.(to)便利的,方便的"}
                   ,{"convention [kən'venʃən]","n.大会,会议;惯例,常规,习俗;公约,协定"}
                   ,{"conventional [kən'venʃənəl]","a.惯例的,常规的"}
                   ,{"conversation [,kɔnvə'seiʃən]","n.会话,谈话"}
                   ,{"conversely ['kɒnvɜːsli]","ad.相反地"}
                   ,{"conversion [kən'və:ʃən]","n.转变,转换;信仰的改变"}
                   ,{"convert [kən'və:t]","v.变换,转换;改变(信仰等);兑换(钱)"}
                   ,{"convey [kən'vei]","v.运送,搬运,转运;传达,传播"}
                   ,{"convict [kən'vikt]","v.(经审讯)证明„有罪,宣判„有罪 n.囚犯"}
                   ,{"conviction [kən'vikʃən]","n.深信,确信;定罪,判罪"}
                   ,{"convince [kən'vins]","v.(of)使信服,使确信"}
                   ,{"cook [kuk]","n.厨师 v.烹调,烧煮;纂改(账目),捏造"}
                   ,{"cool [ku:l]","a.凉的;冷静的 n.凉快 ad.冷静地 v.使变凉"}
                   ,{"cooperate [kəu'ɔpəreit]","v.(with)合作,协作,相配合"}
                   ,{"cooperation [kəʊˌɒpəˈreɪʃən]","n.合作；协作;协助；配合"}
                   ,{"cooperative [kəu'ɔpərətiv]","a.合作的,协作的 n.合作社"}
                   ,{"coordinate [kəu'ɔ:dineit]","a.同等的,坐标的 n.坐标vt.使协调 vi.协调"}
                   ,{"cop [kɒp]","n.警察(slang 俚语)"}
                   ,{"cope [kəup]","v.(with)竞争,对抗;(with)对付,妥善处理"}
                   ,{"copper ['kɔpə]","n.铜;铜币,铜制器"}
                   ,{"copy ['kɔpi]","n.抄本,摹本;(一)本 vt.抄写;考试中抄袭"}
                   ,{"copyright ['kɔpi,rait]","n./a.版权(的)"}
                   ,{"cord [kɔ:d]","n.绳,索"}
                   ,{"cordial ['kɔ:djəl]","a.诚恳的,亲切的,热诚的"}
                   ,{"core [kɔ:]","n.果核;中心,核心"}
                   ,{"corn [kɔ:n]","n.谷物,庄稼,玉米"}
                   ,{"corner ['kɔ:nə]","n.角,街角;偏僻处; vt.将„逼入困境"}
                   ,{"corporation [,kɔ:pə'reiʃən]","n.市镇自治机关;法人;公司,企业"}
                   ,{"correct [kə'rekt]","a.正确的,恰当的,端正的 v.改正,纠正,矫正"}
                   ,{"correlate ['kɔ:rə,leit]","n.相互关联的事物 v.(with,to)(使)互相关联"}
                   ,{"correspond [,kɔ:ri'spɔnd]","v.通信,(with)符合,一致;(to)相当于,对应"}
                   ,{"correspondence [,kɔ:ris'pɔndəns]","n.通信,信件;(with)符合;(to)相当于,对应"}
                   ,{"correspondent [,kɔ:ri'spɔndənt]","n.记者,通讯员;通信者"}
                   ,{"corresponding [,kɔ:ri'spɔndiŋ]","a.符合的,相应的,对应的"}
                   ,{"corridor ['kɔridɔ:]","n.走廊,通道"}
                   ,{"corrode [kə'rəud]","v.(受)腐蚀,侵蚀"}
                   ,{"corrupt [kə'rʌpt]","v.贿赂,收买 a.腐败的,贪污的"}
                   ,{"cosmic ['kɔzmik]","a.宇宙的;无比巨大的,无穷尽的"}
                   ,{"cost [kɔst]","n.成本,费用,代价 v.价值为,花费"}
                   ,{"costly ['kɔstli]","a.昂贵的,价值高的,豪华的"}
                   ,{"costume ['kɔstju:m,kɔ'stju:m]","n.(流行的)服饰;戏装,(特定场合的)套装"}
                   ,{"cosy ['kəuzi]","a.暖和舒服的;舒适的 [反]uncomfortable"}
                   ,{"cottage ['kɔtidʒ]","n.村舍,小屋,别墅"}
                   ,{"cotton ['kɔtən]","n.棉花;棉线,棉纱;棉制品"}
                   ,{"couch [kautʃ]","n.长沙发;(病人躺的)长榻 vt.表达"}
                   ,{"cough [kɔ:f]","v./n.咳嗽"}
                   ,{"could [强 kud,弱 kəd]","v.aux.(口语)(表示许可或请求)可以...,行"}
                   ,{"council ['kaunsəl]","n.理事会,委员会,议事机构"}
                   ,{"counsel ['kaunsəl]","v./n.劝告,忠告 n.法律顾问,辩护人"}
                   ,{"count [kaunt]","v.数,计算;算入;看作,认为 n.计数,总数"}
                   ,{"counter ['kauntə]","n.柜台;计数器 a./ad.相反(的) v.反对,反击"}
                   ,{"counterpart ['kauntə,pɑ:t]","n.对应的人(或物)"}
                   ,{"country ['kʌntri]","n.国家;农村,乡下"}
                   ,{"countryside ['kʌntri,said]","n.乡下,农村"}
                   ,{"county ['kaunti]","n.(英国)郡,(美国)县"}
                   ,{"couple ['kʌpl]","n.(一)对,双;夫妇; v.连接,结合"}
                   ,{"coupon ['ku:pɔn]","n.证明持券人有某种权利的卡片,票证,赠券"}
                   ,{"courage ['kʌridʒ]","n.勇气,胆量"}
                   ,{"course [kɔ:s]","n.课程,教程;过程,进程;路程,路线;一道菜"}
                   ,{"court [kɔ:t]","n.法院,法庭;宫廷,朝廷;院子;球场"}
                   ,{"courtesy ['kə:tisi]","n.谦恭有礼;有礼貌的举止(或言词)"}
                   ,{"courtyard ['kɔ:t,jɑ:d]","n.院子,庭院,天井"}
                   ,{"cousin ['kʌzən]","n.堂(或表)兄弟,堂(或表)姐妹"}
                   ,{"cover ['kʌvə]","v.覆盖,包括,涉及 n.盖子,套子;(书的)封面"}
                   ,{"cow [kau]","n.母牛,奶牛"}
                   ,{"coward ['kauəd]","n.懦夫,胆怯者"}
                   ,{"crab [kræb]","n.螃蟹,蟹肉"}
                   ,{"crack [kræk]","n.裂纹,缝隙;破裂声 v.(使)破裂,砸开"}
                   ,{"cradle ['kreidl]","n.摇篮;发源地"}
                   ,{"craft [krɑ:ft,kræft]","n.工艺,手艺,技巧;飞机,飞船"}
                   ,{"crane [krein]","n.起重机,鹤"}
                   ,{"crash [kræʃ]","v./n.碰撞,坠落,摔坏 n.失败,瓦解;爆裂声"}
                   ,{"crawl [krɔ:l]","v./n.爬行,蠕动;缓慢(的)行进"}
                   ,{"crazy ['kreizi]","a.疯狂的,古怪的,蠢的;(about)狂热的"}
                   ,{"cream [kri:m]","n.乳脂,(鲜)奶油;奶油色"}
                   ,{"create [kri'eit]","v.创造,创作;引起,造成,建立"}
                   ,{"creative [kri'eitiv]","a.有创造力的,创造性的"}
                   ,{"creature ['kri:tʃə]","n.人,动物;生物"}
                   ,{"credential [kri'denʃəl]","n.凭证,(pl.)国书,证明书"}
                   ,{"credit ['kredit]","v./n.信用,信任 n.信用贷款,赊欠;名誉,名望"}
                   ,{"creep [kri:p]","v.爬,爬行;(植物)蔓延"}
                   ,{"crew [kru:]","n.全体船员,全体乘务员"}
                   ,{"cricket ['krikit]","n.板球;蟋蟀"}
                   ,{"crime [kraim]","n.罪行,犯罪"}
                   ,{"criminal ['kriminəl]","n.罪犯,刑事犯 a.犯罪的,刑事的"}
                   ,{"cripple ['kripl]","n.跛子,残疾人 v.使跛,使残疾"}
                   ,{"crisis ['kraisis]","n.(pl.crises)危机,紧要关头"}
                   ,{"crisp [krisp]","a.脆的,易碎的;简明扼要的;(空气)清爽的"}
                   ,{"criterion [krai'tiəriən]","n.(pl.criteria 或 criterions)标准,尺度"}
                   ,{"critic ['kritik]","n.批评家,评论家"}
                   ,{"critical ['kritikəl]","a.批评的,评论的;危急,紧要的;临界的"}
                   ,{"criticism ['kriti,sizəm]","n.评论性的文章,评论;批评,指责,非难"}
                   ,{"criticize ['kriti,saiz]","v.(criticise)批评,评论"}
                   ,{"crop [krɔp]","n.作物,庄稼;(谷类等的)一熟收成;一批,大量"}
                   ,{"cross [krɔ:s]","n.十字(架);苦难 a.交叉的;发怒的 v.穿过"}
                   ,{"crow [krəʊ]","n.乌鸦 v./n.鸡啼,鸣叫"}
                   ,{"crowd [kraud]","n.人群;一群,一伙 v.聚集,群集;挤满,拥挤"}
                   ,{"crown [kraun]","n.王冠,冕;君权,君王 v.为...加冕"}
                   ,{"crucial ['kru:ʃəl]","a.至关重要的,决定性的"}
                   ,{"crude [kru:d]","a.天然的,未加工的;未熟的;粗鲁的,粗野的"}
                   ,{"cruel ['kru:əl]","a.残忍的,残酷的"}
                   ,{"cruise [kru:z]","v.巡航;以节省燃料的速度前进 n.乘船巡游"}
                   ,{"crush [krʌʃ]","n./v.压碎,压坏 v.压服,压垮"}
                   ,{"crust [krʌst]","n.外皮,壳;地壳"}
                   ,{"cry [krai]","n.&v.叫,喊,哭;(鸟兽)叫,啼,鸣,嗥"}
                   ,{"crystal ['kristəl]","n.水晶,水晶饰品;结晶 a.水晶的,透明的"}
                   ,{"cube [kju:b]","n.立方形,立方体;立方,三次幂"}
                   ,{"cucumber ['kju:kʌmbə]","n.黄瓜"}
                   ,{"cue [kju:]","n.暗示, 提示, 球杆"}
                   ,{"cultivate ['kʌltiveit]","v.耕作,栽培,养殖;培养,教养,磨炼"}
                   ,{"culture ['kʌltʃə]","n.文化,文明;修养;耕种;栽培,培育"}
                   ,{"cunning ['kʌniŋ]","a./n.狡猾(的),狡诈(的)"}
                   ,{"cup [kʌp]","n.杯子;奖杯,优胜杯;(一)杯,一杯的容量"}
                   ,{"cupboard ['kʌbəd]","n.碗柜,小橱"}
                   ,{"curb [kə:b]","n.路边,场外证券市场,vt.制止,抑制"}
                   ,{"cure [kjuə]","v.(of)治愈,医治;矫正 n.治愈,痊愈;良药"}
                   ,{"curiosity [,kjuri'ɔsiti]","n.好奇心;古董,古玩"}
                   ,{"curious ['kjuəriəs]","a.好奇的, 求知的, 古怪的, 爱挑剔的"}
                   ,{"curl [kə:l]","v.(使)卷曲,蜷缩 n.卷发;卷曲状;卷曲物"}
                   ,{"currency ['kərənsi]","n.流传,流通;通货,货币"}
                   ,{"current ['kʌrənt]","n.电流,水流;潮流,趋势 a.当前的;流通的"}
                   ,{"curriculum [kə'rikjuləm]","n.(pl.curricula)课程,(学 校等 的)全部课程"}
                   ,{"curse [kə:s]","n.诅咒,咒语,祸因 vt.诅咒,咒骂,使受罪"}
                   ,{"curtain ['kə:tən]","n.窗帘,门帘;幕(布);结束;vt.遮掩"}
                   ,{"curve [kə:v]","n.曲线,弯曲(物) v.弄弯,成曲形"}
                   ,{"cushion ['kuʃən]","n.垫子,软垫 vt.装垫子;缓和,减轻"}
                   ,{"custom ['kʌstəm]","n.习惯,风俗,惯例;(pl.)海关,关税"}
                   ,{"customary ['kʌstə,məri]","a.习惯的,惯例的"}
                   ,{"customer ['kʌstəmə]","n.顾客,主顾"}
                   ,{"cut [kʌt]","n./v.切,割,削;削减,删节 n.切口,伤口"}
                   ,{"cyberspace ['saibə,speis]","n.虚拟信息空间;网络空间"}
                   ,{"cycle ['saikl]","n.自行车;周期,循环 v.骑自行车;循环"}
                   ,{"cylinder ['silində]","n.圆筒,圆锥体;汽缸"}
                   ,{"daily ['deili]","a.每日的 ad.每日,天天 n.日报"}
                   ,{"dairy ['dεəri]","n.牛奶场,奶店"}
                   ,{"dam [dæm]","n.水坝,水闸"}
                   ,{"damage ['dæmidʒ]","v./n.损害,毁坏 n.(pl.)损害赔偿费"}
                   ,{"damn [dæm]","int.该死 vt.遣责;使失败 a.十足的 ad.极"}
                   ,{"damp [dæmp]","n.潮湿 a.潮湿的 vt.使潮湿;使衰减"}
                   ,{"dance [dɑ:ns, dæns]","n.舞(蹈);舞曲,舞会 v.跳舞;跳动"}
                   ,{"danger ['deindʒə]","n.危险;威胁;危险事物"}
                   ,{"dangerous ['deindʒərəs]","a.危险的,不安全的"}
                   ,{"dare [dεə]","v.敢,胆敢"}
                   ,{"dark ['dɑ:k]","a.黑暗的,深(色)的;隐秘的;n.无光,黑暗"}
                   ,{"darling ['dɑ:liŋ]","n.心爱的人,亲爱的"}
                   ,{"dash [dæʃ]","v./n.冲,猛冲,突进 n.破折号"}
                   ,{"data ['deitə]","n.(datum 的复数)资料,数据"}
                   ,{"database ['deitəbeis]","n.(databank)数据库"}
                   ,{"date [deit]","n.日期,年代 v.注明„的日期 n./v.约会"}
                   ,{"daughter ['dɔ:tə]","n.女儿"}
                   ,{"dawn [dɔ:n]","n.黎明,拂晓 v.破晓;开始现出"}
                   ,{"day [dei]","n.天,一昼夜;白昼,白天;时期,时代"}
                   ,{"daylight ['deilait]","n.日光,白昼,黎明"}
                   ,{"daytime ['deitaim]","n.白天,日间"}
                   ,{"dazzle ['dæzl]","v.使惊奇,使倾斜;耀(眼) n.耀眼的光"}
                   ,{"dead [ded]","a.死的;无生命的;死气沉沉的 ad.完全地"}
                   ,{"deadline ['dedlain]","n.最后期限"}
                   ,{"deadly ['dedli]","a.致命的;势不两立的; 极度的;必定的"}
                   ,{"deaf [def]","a.聋的;不愿听的"}
                   ,{"deal [di:l]","v.处理;做买卖,经营;分配;对待 n.交易"}
                   ,{"dealer ['di:lə]","n.商人"}
                   ,{"dean [di:n]","n.(大学)院长;主持牧师; (基督教)教长"}
                   ,{"dear [diə]","a.昂贵的;亲爱的;珍贵的 int.呵!哎呀!"}
                   ,{"death [deθ]","n.死,死亡;灭亡,毁灭,死因"}
                   ,{"debate [di'beit]","v./n.争论,辩论"}
                   ,{"debt [det]","n.债,债务"}
                   ,{"decade ['dekeid]","n.十年"}
                   ,{"decay [di'kei]","v./n.腐朽,腐烂;衰减,衰退"}
                   ,{"deceit [di'si:t]","n.欺骗,欺骗行为"}
                   ,{"deceive [di'si:v]","v.欺骗,蒙蔽"}
                   ,{"December [dɪˈsembə(r)]","n.十二月"}
                   ,{"decent ['di:sənt]","a.体面的;正派的,合乎礼仪的;合适的"}
                   ,{"decide [di'said]","v.决定,下决心;解决,裁决"}
                   ,{"decimal ['desiməl]","a.十进的,小数的,十进制的 n.小数"}
                   ,{"decision [di'siʒən]","n.决定,决心;决议;决策"}
                   ,{"decisive [di'saisiv]","a.决定性的"}
                   ,{"deck [dek]","n.甲板"}
                   ,{"declaration [,deklə'reiʃən]","n.宣言,宣布,声明"}
                   ,{"declare [di'klεə]","v.宣布,宣告,声明;断言,宣称"}
                   ,{"decline [di'klain]","v.下降,衰落;拒绝 n.下降;斜面,倾斜,衰落"}
                   ,{"decorate ['dekəreit]","v.装饰,装璜,布置"}
                   ,{"decrease [di'kri:s]","n.减少,减小;减少量 v.减少,变少,降低"}
                   ,{"dedicate ['dedikeit]","vt.奉献;献身于"}
                   ,{"deduce [di'dju:s]","vt.(from)演绎,推断,推论"}
                   ,{"deduct [di'dʌkt]","vt.扣除;演绎(推理)"}
                   ,{"deed [di:d]","n.行为,行动;功绩,事迹;证书;契据"}
                   ,{"deem [di:m]","v.认为,相信"}
                   ,{"deep [di:p]","a.深的,深长的;深奥的;强烈的 ad.深入地"}
                   ,{"deer [diə]","n.鹿"}
                   ,{"defeat [di'fi:t]","n.击败,战胜,失败 v.击败,战胜;使失败"}
                   ,{"defence [di'fens]","n.(defense)防御,保卫;防务工事;辩护"}
                   ,{"defect ['di:fekt]","n.过失;缺点;不足"}
                   ,{"defend [di'fend]","v.防守,保卫;为„辩护,为„答辩"}
                   ,{"deficiency [di'fiʃənsi]","n.缺乏,不足;缺点,缺陷"}
                   ,{"deficit ['defisit]","n.赤字,逆差;亏损,亏空;不足,缺乏"}
                   ,{"define [di'fain]","v.给„下定义;阐述;阐释;限定,规定"}
                   ,{"definite ['definit]","a.明确的;一定的;意志坚强的,立场坚定的"}
                   ,{"definition [,difi'niʃən]","n.定义,解释;(轮廓影像等的)清晰度;阐明"}
                   ,{"defy [di'fai,'di:-]","v.(公然)违抗,反抗;蔑视"}
                   ,{"degenerate [di'dʒenəreit]","v.衰退,堕落,蜕化 a.堕落的 n.堕落者"}
                   ,{"degree [di'ɡri:]","n.程度;度数;学位;等级"}
                   ,{"delay [di'lei]","v./n.耽搁,延迟"}
                   ,{"delegate ['deliɡət]","n.代表 vt.委派...为代表;授权;委托"}
                   ,{"delete [di'li:t]","vt.删除"}
                   ,{"deliberate [di'libərət]","a.深思熟虑的,故意的 vt.研讨,商讨"}
                   ,{"delicate ['delikət]","a.纤弱的;精致的;微妙的;灵敏的"}
                   ,{"delicious [di'liʃəs]","a.美味的;美妙的;使人愉快的"}
                   ,{"delight [di'lait]","n.快乐,高兴 v.(使)高兴,(使)欣喜"}
                   ,{"deliver [di'livə]","v.交付,递送;发表,表达;释放;接生"}
                   ,{"delivery [di'livəri]","n.递送;交付;分娩;交货;引渡"}
                   ,{"demand [di'mɑ:nd,-'mænd]","n./v.要求,请求,需要(量) v.查问"}
                   ,{"democracy [di'mɔkrəsi]","n.民主,民主制,民主国家"}
                   ,{"democratic [,demə'krætik,-kəl]","a.民主的"}
                   ,{"demonstrate ['demənstreit]","v.论证,证实;演示,说明"}
                   ,{"denial [di'naiəl]","n.否认;拒绝;否认某事或某事实的声明"}
                   ,{"denote [di'nəut]","vt.表示,意味着"}
                   ,{"denounce [di'nauns]","vt.公开指责,公然抨击;谴责"}
                   ,{"dense [dens]","a.浓厚的,密集的,稠密的"}
                   ,{"density ['densəti]","n.密集,密度,浓度"}
                   ,{"dental ['dentəl]","a.牙齿的;牙科(用)的"}
                   ,{"dentist ['dentist]","n.牙医"}
                   ,{"deny [di'nai]","v.否认,否定;拒绝"}
                   ,{"depart [di'pɑ:t]","vi.离开,起程 a.过去的,逝世的"}
                   ,{"department [di'pɑ:tmənt]","n.部,局,处,科,部门;系,学部"}
                   ,{"departure [di'pɑ:tʃə]","n.离开,起程"}
                   ,{"depend [di'pend]","v.(on)取决于,依靠,信赖,相信"}
                   ,{"dependent [di'pendənt]","a.依靠的,依赖的,从属的;随„而定的"}
                   ,{"depict [di'pikt]","v.描绘;描写,描述"}
                   ,{"deposit [di'pɔzit]","v.存放;使沉淀;付(保证金) n.存款;沉积物"}
                   ,{"depress [di'pres]","v.压抑,降低;使沮丧,压下"}
                   ,{"deprive [di'praiv]","vt.剥夺,夺去,使丧失"}
                   ,{"depth [depθ]","n.深,深度,深奥,深刻"}
                   ,{"deputy ['depjuti]","n.代理人,代表 a.副的,代理的"}
                   ,{"derive [di'raiv]","v.取得;导出;引申;来自;源自;出自"}
                   ,{"descend [di'send]","v.下来,下降;遗传(指财产,气质,权利)"}
                   ,{"descendant [di'sendənt]","n.子孙,后代"}
                   ,{"descent [di'sent]","n.下降,降下;斜坡;血统,家世"}
                   ,{"describe [di'skraib]","v.描述,形容"}
                   ,{"description [di'skripʃən]","n.描写,形容;种类"}
                   ,{"desert ['dezət]","n.沙漠,不毛之地 v.抛弃,遗弃;擅离,开小差"}
                   ,{"deserve [di'zə:v]","v.应受,值得"}
                   ,{"design [di'zain]","v.设计;构思;绘制;图案;企图 n.设计,图样"}
                   ,{"designate ['deziɡneit]","v.指明,指出;任命,指派"}
                   ,{"desirable [di'zaiərəbl]","a.值得做的;合意的,称心的;期望得到的"}
                   ,{"desire [di'zaiə]","v./n.愿望,欲望,要求"}
                   ,{"desk [desk]","n.书桌,办公桌,服务台"}
                   ,{"desolate ['desələt,'desəleit]","a.荒凉的;孤独的 v.使荒芜"}
                   ,{"despair [di'spεə]","n.绝望;失望;令人失望的人(事物)v.绝望"}
                   ,{"despatch [di'spætʃ]","n./v.(dispatch)派遣;发送 n.急件;新闻报道"}
                   ,{"desperate ['despərət]","a.不顾一切的,铤而走险的;绝望的,危急的"}
                   ,{"despise [di'spaiz]","v.轻视,蔑视"}
                   ,{"despite [di'spait]","prep.不管,不顾"}
                   ,{"dessert [di'zə:t]","n.正餐后的水果或甜食"}
                   ,{"destination [,desti'neiʃən]","n.目的地,终点"}
                   ,{"destiny ['destini]","n.命运;天数,天命"}
                   ,{"destroy [di'strɔi]","v.破坏,摧毁,消灭"}
                   ,{"destruction [di'strʌkʃən]","n.毁坏,毁灭(的原因)"}
                   ,{"destructive [di'strʌktiv]","a.破坏性"}
                   ,{"detach [di'tætʃ]","vt.分开, 分离, 分遣, 派遣(军队)"}
                   ,{"detail ['di:teil, di'teil]","n.细节,详情 v.详述"}
                   ,{"detain [di'tein]","v.耽搁;扣押,拘留"}
                   ,{"detect [di'tekt]","v.察觉,发觉,侦察,探测"}
                   ,{"detective [di'tektiv]","n.侦探"}
                   ,{"detector [di'tektə]","n.发现者,侦察器,探测器,检波器,检电器"}
                   ,{"deteriorate [di'tiəriəreit]","v.(使)恶化,(使)变坏"}
                   ,{"determine [di'tə:min]","v.决心,决定;确定,限定"}
                   ,{"develop [di'veləp]","v.发展,开发,研制;显现,显影;发育,生长"}
                   ,{"deviate ['di:vieit,'di:viət]","v.(from)背离,偏离"}
                   ,{"device [di'vais]","n.装置,设备,仪表;方法,设计"}
                   ,{"devil ['devəl]","n.魔鬼"}
                   ,{"devise [di'vaiz]","vt.设计;发明;图谋;作出(计划);想出(办法)"}
                   ,{"devote [di'vəut]","v.(to)奉献,致力"}
                   ,{"dew [dju:,du:]","n.露水"}
                   ,{"diagnose ['daiəɡnəuz]","vt.诊断(疾病);判断(问题)"}
                   ,{"diagram ['daiəɡræm]","n.图表;图解"}
                   ,{"dial ['daiəl,dail]","n.钟(表)面,刻度盘,拨号盘 v.拨号,打电话"}
                   ,{"dialect ['daiəlekt]","n.方言"}
                   ,{"dialog ['daiəlɔɡ]","n.(dialogue)对话,对白"}
                   ,{"diameter [dai'æmitə]","n.直径"}
                   ,{"diamond ['daiəmənd]","n.金钢石,钻石;菱形"}
                   ,{"diary ['daiəri]","n.日记,日记簿"}
                   ,{"dictate [dik'teit, 'dikteit]","v.口授;(使)听写;指令,指示,命令"}
                   ,{"dictation [dik'teiʃən]","n.听写,口述;命令"}
                   ,{"dictionary ['dikʃənəri]","n.词典,字典"}
                   ,{"die [dai]","vi.死,死亡;(草木)枯萎,凋谢;渴望"}
                   ,{"diet ['daiət]","n.饮食,食物"}
                   ,{"differ ['difə]","v.(from)与...不同;(with)与...意见不同"}
                   ,{"difference ['difərəns]","n.差别,差异,分歧"}
                   ,{"different ['difərənt]","a.差异的,差异的,不同的"}
                   ,{"differentiate [,difə'renʃieit]","v.区分,区别;(使)不同"}
                   ,{"difficult ['difikəlt]","a.困难的,艰难的"}
                   ,{"difficulty ['difikəlti]","n.困难,困境,难题"}
                   ,{"diffuse [di'fju:s]","v.扩散;传播 a.(文章等)冗长的,漫无边际的"}
                   ,{"dig [diɡ]","v.挖,掘"}
                   ,{"digest [di'dʒest]","vt.消化;领会,融会贯通 n.文摘,摘要"}
                   ,{"digital ['didʒitəl]","a.数字的;数位的;手指的 n.数字"}
                   ,{"dignity ['diɡnəti]","n.(举止,态度等的)庄严,端庄;尊贵,高贵"}
                   ,{"dilemma [di'lemə,dai-]","n.(进退两难的)窘境,困境"}
                   ,{"diligent ['dilidʒənt]","a.勤奋的,用功的"}
                   ,{"dilute [dai'lju:t,di-]","vt.稀释,冲淡 a.稀释的,冲淡的"}
                   ,{"dim [dim]","a.暗淡的,模糊的"}
                   ,{"dimension [di'menʃən,dai-]","n.尺寸,尺度;维(数),度(数)"}
                   ,{"diminish [di'miniʃ]","v.缩小,减少,递减"}
                   ,{"dine [dain]","v.吃饭,进餐"}
                   ,{"dinner ['dinə]","n.正餐,宴会"}
                   ,{"dip [dip]","v./n.浸,蘸"}
                   ,{"diploma [di'pləumə]","n.毕业文凭,学位证书"}
                   ,{"diplomatic [,diplə'mætik]","a.外交的,从事外交的;策略的,有手腕的"}
                   ,{"direct [di'rekt,dai-]","a./ad.径直的(地) v.管理,指导;(at,to)指向"}
                   ,{"direction [di'rekʃən,dai-]","n.方向,方位;指令,说明"}
                   ,{"directly [di'rektli]","ad.直接地,径直地;马上,立即"}
                   ,{"director [di'rektə]","n.指导者,主任,导演"}
                   ,{"directory [di'rektəri,dai-]","n.人名地址录,(电话)号码簿"}
                   ,{"dirt [də:t]","n.污物,污垢"}
                   ,{"dirty ['də:ti]","a.弄脏的;下流的 v.弄脏,玷污"}
                   ,{"disable [dis'eibl]","vt.使残废;使失去能力;丧失能力"}
                   ,{"disappear [,disə'piə]","v.不见,消失"}
                   ,{"disappoint [,disə'pɔint]","vt.失望;(希望等)破灭,挫败(计划等)"}
                   ,{"disaster [,di'zɑ:stə]","n.灾难,大祸;彻底的失败"}
                   ,{"disastrous [di'zɑ:strəs]","a.灾难性的"}
                   ,{"disc [disk]","n.(disk)圆盘,圆面,盘状物"}
                   ,{"discard [dis'kɑ:d,'diskɑ:d]","vt.丢弃,抛弃,遗弃"}
                   ,{"discern [di'sə:n,-'zə:n]","v.认出,发现;辨别,识别"}
                   ,{"discharge [dis'tʃɑ:dʒ]","v./n.卸货,排出;发射,放(电);遣散,解雇"}
                   ,{"discipline ['disiplin]","n.纪律,学科"}
                   ,{"disclose [dis'kləuz]","v.揭示,泄露"}
                   ,{"discount ['diskaunt,dis'k-]","n.折扣;贴现(率) vt.打折扣;不重视"}
                   ,{"discourage [dis'kʌridʒ]","v.使泄气,使失去信心"}
                   ,{"discourse ['diskɔ:s,dis'kɔ:s]","n.论文;演说;谈话;话语 vi.讲述,著述"}
                   ,{"discover [dis'kʌvə]","v.发现,显示"}
                   ,{"discovery [dis'kʌvəri]","n.发现;被发现的事物"}
                   ,{"discreet [dis'kri:t]","a.(言行)谨慎的;慎重的;有判断力的"}
                   ,{"discrepancy [dis'krepənsi]","n.相差;差异;矛盾"}
                   ,{"discriminate [dis'krimineit]","v.区别,辨别;(against)有差别地对待,歧视"}
                   ,{"discuss [dis'kʌs]","vt.讨论,商议"}
                   ,{"disease [di'zi:z]","n.疾病"}
                   ,{"disgrace [dis'ɡreis]","n.失宠,耻辱 v.使失宠;玷辱,使蒙羞"}
                   ,{"disguise [dis'ɡaiz]","n./v.假装,伪装"}
                   ,{"disgust [dis'ɡʌst]","n.厌恶,恶心 v.使厌恶"}
                   ,{"dish [diʃ]","n.碟子,盘子,菜肴"}
                   ,{"dislike [dis'laik]","n./v.不喜欢,厌恶"}
                   ,{"dismay [dis'mei]","n./v.(使)沮丧;(使)惊慌;(使)失望,(使)绝望"}
                   ,{"dismiss [dis'mis]","v.免职,解雇,开除,解散"}
                   ,{"disorder [dis'ɔ:də]","n.混乱,杂乱;骚乱;失调,疾病"}
                   ,{"disperse [dis'pə:s]","v.(使)分散;(使)散开;疏散"}
                   ,{"displace [dis'pleis]","v.移置,转移;取代,置换"}
                   ,{"display [,dis'plei]","v./n.陈列,展览,显示(器)"}
                   ,{"disposal [dis'pəuzəl]","n.处理,处置;布置,安排"}
                   ,{"dispose [dis'pəuz]","v.(of)处理,处置;(for)布置,安排"}
                   ,{"disposition [,dispə'ziʃən]","n.排列,部署;性格倾向;倾向,意向"}
                   ,{"dispute [dis'pju:t,'dis-]","n.争论,争执 v.争论,辩论;反驳;怀疑;阻止"}
                   ,{"disregard [disri'ɡɑ:d]","vt.不理会;忽视;漠视 n.忽视;漠视"}
                   ,{"disrupt [dis'rʌpt]","vt.使混乱,使崩溃,使分裂,使瓦解"}
                   ,{"dissipate ['disipeit]","v.驱散;(使云、雾、疑虑等)消散;挥霍"}
                   ,{"dissolve [di'zɔlv]","v.(使)溶解,(使)融化;解散,取消"}
                   ,{"distance ['distəns]","n.距离,间隔,远方,路程"}
                   ,{"distant ['distənt]","a.远的;遥远的;疏远的;不亲近的"}
                   ,{"distill [dis'til]","vt.蒸馏,用蒸馏法提取;吸取,提炼"}
                   ,{"distinct [dis'tiŋkt]","a.清楚的,明显的;(from)截然不同的"}
                   ,{"distinction [dis'tiŋkʃən]","n.区别,差别;级别;特性;声望;显赫"}
                   ,{"distinguish [dis'tiŋɡwiʃ]","v.(from)区别,辨别;辨认出;使杰出"}
                   ,{"distort [dis'tɔ:t]","v.弄歪(嘴脸等);扭曲;歪曲(真理、事实等)"}
                   ,{"distract [dis'trækt]","v.分散;使分心;打扰;使心情烦乱"}
                   ,{"distress [di'stres]","n.苦恼;危难;不幸 v.使苦恼"}
                   ,{"distribute [di'stribju:t,'dis-]","v.分发;分配;分布;配(电);(over)散布"}
                   ,{"district ['distrikt]","n.地区,行政区;美国各州的众议院选区"}
                   ,{"disturb [dis'tə:b]","v.扰乱,妨碍,使不安"}
                   ,{"disturbance [di'stə:bəns]","n.动乱,骚乱,干扰"}
                   ,{"ditch [ditʃ]","n.沟,沟渠,水沟"}
                   ,{"dive ['di:vei,daiv]","v./n.潜水,跳水,俯冲"}
                   ,{"diverse [dai'və:s,di-]","a.多种多样的,(from)不同的"}
                   ,{"diversion [dai'və:ʃən,di-]","n.转向,转移;牵制;解闷;娱乐"}
                   ,{"divert [dai'və:t,di-]","vt.使转向,使改道;转移(注意力);使娱乐"}
                   ,{"divide [di'vaid]","v.分,划分,分开;分配;(by)除"}
                   ,{"dividend ['dividend]","n.红利,股息;回报,效益;被除数"}
                   ,{"divine [di'vain]","a.神的,神授的,天赐的;极好的,极美的"}
                   ,{"division [di'viʒən]","n.分,分割;部门,科,处;除法;分界线"}
                   ,{"divorce [di'vɔ:s]","v./n.离婚,分离"}
                   ,{"dizzy ['dizi]","a.头晕目眩的,眩晕的;(可能)使人头晕的"}
                   ,{"do [强 du:,弱 du,du:]","aux.v. vt.做,干,办,从事;引起 vi.行动"}
                   ,{"dock [dɔk]","n.船坞,码头"}
                   ,{"doctor [dɔktə]","n.医生;博士 vt.授以博士学位;诊断;修改"}
                   ,{"doctorate ['dɔktərit]","n.博士学位;博士头衔"}
                   ,{"document ['dɔkjumənt]","n.公文,文献"}
                   ,{"documentary [,dɔkju'mentəri]","a.文献的 n.记录片"}
                   ,{"dog [dɔɡ,dɔ:ɡ]","n.狗,雄兽 vt.尾随,跟踪"}
                   ,{"doll [dɔl]","n.玩偶,玩具娃娃"}
                   ,{"dollar ['dɔlə]","n.(美国,加拿大等国货币单位)美元,加元"}
                   ,{"domain [dəu'mein]","n.(活动,思想等)领域,范围;领地"}
                   ,{"dome [dəum]","n.圆屋顶"}
                   ,{"domestic [dəu'mestik]","a.家里的;本国的;驯养的"}
                   ,{"dominant ['dɔminənt]","a.支配的,统治的,占优势的"}
                   ,{"dominate ['dɔmineit]","v.支配,统治,控制;占优势"}
                   ,{"donate [dəu'neit,'dəu-]","vt.损赠(金钱等);赠予"}
                   ,{"donkey ['dɔŋki]","n.驴子;蠢人;顽固的人"}
                   ,{"doom [du:m]","n.厄运,劫数 v.注定,命定"}
                   ,{"door [dɔ:]","n.门;门口,出入口;门状物;家;通道"}
                   ,{"doorway ['dɔ:wei]","n.门口"}
                   ,{"dorm [dɔ:m]","n.(dormitory)[美][口]宿舍"}
                   ,{"dose [dəus]","n.剂量,一服,一剂 v.(给...)服药"}
                   ,{"dot [dɔt]","n.点,圆点 v.在...上打点"}
                   ,{"doubt [daut]","n./v.怀疑,疑虑"}
                   ,{"dove [dʌv]","n.鸽子"}
                   ,{"down [daun]","ad.下;由大到小 prep.沿着...而下 a.向下的"}
                   ,{"downstairs ['daun'stεəz]","ad.在楼下,往楼下"}
                   ,{"downtown ['daun'taun]","ad.在城市的商业区 n./a.城市商业区(的)"}
                   ,{"downward ['daunwəd]","a.向下的 ad.(also downwards)向下,往下"}
                   ,{"doze [dəuz]","v./n.瞌睡;假寐"}
                   ,{"dozen ['dʌzən]","n.一打,十二个"}
                   ,{"draft [drɑ:ft,dræft]","n.草稿,草案,草图 v.起草,草拟"}
                   ,{"drag [dræɡ]","v.拖,拖曳"}
                   ,{"dragon ['dræɡən]","n.龙"}
                   ,{"drain [drein]","n.排水沟,阴沟;消耗,负担 v.排去,放干"}
                   ,{"drama ['drɑ:mə,dræmə]","n.剧本,戏剧;戏剧性事件或场面"}
                   ,{"dramatic [drə'mætik,-kəl]","a.戏剧的,戏剧性的;剧烈的"}
                   ,{"drastic ['dræstik]","a.激烈的,严厉的;(药性等)猛烈的"}
                   ,{"draw [drɔ:]","v.拉;画;汲取;引出;(to)挨近 n.平局;拖曳"}
                   ,{"drawback ['drɔ:bæk]","n.欠缺,缺点;退还的关税"}
                   ,{"drawer [drɔ:]","n.抽屉"}
                   ,{"drawing ['drɔ:iŋ]","n.绘图,图样"}
                   ,{"dread [dred]","v./n.恐惧,担心"}
                   ,{"dream [dri:m]","n./v.梦,梦想,幻想"}
                   ,{"dress [dres]","n.服装,童装,女装 v.穿衣,打扮"}
                   ,{"drift [drift]","v./n.漂,漂流(物)"}
                   ,{"drill [dril]","v.练习;操练;钻孔 n.操练;练习;钻孔(机)"}
                   ,{"drink [driŋk]","v.(drank,drunk)喝,饮 n.饮料;喝酒"}
                   ,{"drip [drip]","v.滴下,漏水 n.滴,水滴,点滴"}
                   ,{"drive [draiv]","v.开(车);驱;驱动,把(钉,桩)打入 n.驾驶"}
                   ,{"driver [draivə]","n.驾驶员"}
                   ,{"drop [drɔp]","n.滴;落下;微量 v.落下;下降;失落"}
                   ,{"drought [draut]","n.旱灾,干旱"}
                   ,{"drown [draun]","v.溺死,淹没"}
                   ,{"drug [drʌɡ]","n.药物;麻醉品;毒品;滞销货 v.下麻药;吸毒"}
                   ,{"drum [drʌm]","n.鼓;圆桶"}
                   ,{"drunk [drʌŋk]","a.醉酒的;(喻)陶醉的 n.酗酒者,醉汉"}
                   ,{"dry [drai]","a.干(旱)的;干渴的;枯燥 vt.使干燥,晒干"}
                   ,{"dubious ['dju:bjəs]","a.怀疑的,无把握的;有问题的,靠不住的"}
                   ,{"duck [dʌk]","n.鸭,鸭肉 v.迅速俯身;快速低头;躲避"}
                   ,{"due [dju:,du:]","a./n.(to)因为;应付的;预定的;应有的prep.(to)因为"}
                   ,{"dull [dʌl]","a.单调的;迟钝的,愚笨的;不锋利的"}
                   ,{"dumb [dʌm]","a.哑的,无言的"}
                   ,{"dump [dʌmp]","v.倾倒,倾卸 n.垃圾场"}
                   ,{"duplicate ['dju:plikət]","n.复制品 v.复写,使加倍 a.复制的,二重的"}
                   ,{"durable ['djuərəbl]","a.持久的,耐久的"}
                   ,{"duration [djuə'reiʃən]","n.持久;期间;持续时间"}
                   ,{"during ['djuəriŋ]","prep.在...期间"}
                   ,{"dusk [dʌsk]","n.薄暮,黄昏"}
                   ,{"dust [dʌst]","n.灰尘,尘土 v.拂,掸"}
                   ,{"duty ['dju:ti,'du:-]","n.义务,责任;职务;税"}
                   ,{"dwarf [dwɔ:f]","n.矮子,侏儒,矮小的动植物 vt.使...矮小"}
                   ,{"dwell [dwel]","v.住,居留"}
                   ,{"dwelling ['dweliŋ]","n.住宅,寓所"}
                   ,{"dye [dai]","n.染料 v.染,染色"}
                   ,{"dynamic [dai'næmik]","a.动力的,电动的;有生气的"}
                   ,{"dynasty ['dinəsti,'dai-]","n.王朝,朝代"}
                   ,{"each [i:tʃ]","a./pron.各,各自的,每"}
                   ,{"eager ['i:ɡə]","a.(for)渴望的,热切的"}
                   ,{"eagle ['i:ɡl]","n.鹰"}
                   ,{"ear [iə]","n.耳,耳朵;听力,听觉;穗"}
                   ,{"early ['ə:li]","a.早的,早期的,及早的 ad.早,在初期"}
                   ,{"earn [ə:n]","v.赚得,挣得,获得"}
                   ,{"earnest ['ə:nist]","a.热心的,诚挚的 n.热心;真挚;定金;认真"}
                   ,{"earth [ə:θ]","n.地球;陆地;泥土,土壤;尘世,人间"}
                   ,{"earthquake ['ə:θkweik]","n.地震"}
                   ,{"ease [i:z]","v.减轻;使舒适,使安心 n.容易;舒适,悠闲"}
                   ,{"east [i:st]","n.东,东方,东部 a.东方的,东部的"}
                   ,{"Easter ['iːstə(r)]","n.复活节"}
                   ,{"eastern ['i:stən]","a.东方的,东部的"}
                   ,{"easy ['i:zi]","a.容易的,不费力的,安逸的,宽裕的"}
                   ,{"eat [i:t]","vt.吃,喝 vi.吃饭,吃东西"}
                   ,{"ebb [eb]","vi.衰退,减退 n.处于低潮,处于衰退状态"}
                   ,{"eccentric [ik'sentrik]","a.古怪的,怪癖的,异乎寻常的 n.古怪的人"}
                   ,{"echo ['ekəu]","v./n.回声,反响,共鸣"}
                   ,{"eclipse [i'klips]","n.日食,月食"}
                   ,{"ecology [i:'kɔlədʒi]","n.生态学"}
                   ,{"economic [,i:kə'nɔmik]","a.经济(上)的,经济学的"}
                   ,{"economical [,i:kə'nɔmikəl]","a.节约的,经济的"}
                   ,{"economics [,i:kə'nɔmiks]","n.经济学,经济情况"}
                   ,{"economy [i'kɔnəmi]","n.节约;经济"}
                   ,{"edge [edʒ]","n.边,棱;刀口,刃 v.侧身移动,挤进"}
                   ,{"edible ['edibl]","a.可食用的"}
                   ,{"edit ['edit]","v.编辑,校订"}
                   ,{"edition [i'diʃən]","n.版,版本,版次"}
                   ,{"editor ['editə]","n.编辑,编者"}
                   ,{"editorial [,edi'tɔ:riəl]","n.社论 a.社论的;编辑上的"}
                   ,{"educate ['edju:keit]","v.教育,培养,训练"}
                   ,{"education [,edju:'keiʃən]","n.教育,培养,训练"}
                   ,{"effect [i'fekt]","n.结果;效果;影响;印象 vt.招致;实现;达到"}
                   ,{"effective [i'fektiv]","a.有效的,生效的;被实施的;给人深刻印象"}
                   ,{"efficiency [i'fiʃənsi]","n.效率;功效"}
                   ,{"efficient [i'fiʃənt]","a.有效的,效率高的;有能力的,能胜任的"}
                   ,{"effort ['efət]","n.努力;成就;艰难的尝试"}
                   ,{"egg [eɡ]","n.蛋; 卵; 卵形物"}
                   ,{"ego ['i:ɡəu,'eɡəu]","n.自我,自负,利已主义;(心理学)自我意识"}
                   ,{"eight [eit]","num.八 pron.八(个,只...)"}
                   ,{"eighteen ['ei'ti:n]","num.十八,十八个"}
                   ,{"eighty ['eiti]","num./a.八十 pron.八十(个,只...)"}
                   ,{"either ['aið ə,'i:-]","ad.也(不) pron.两者之一 a.(两者中)任一的"}
                   ,{"eject [i'dʒekt,'i:dʒekt]","v.喷射,排出;驱逐"}
                   ,{"elaborate [i'læbərət,i'læbəreit]","v./a.精心制作(的);详细阐述(的)"}
                   ,{"elapse [i'læps]","vi.(时间)溜走;(光阴)逝去"}
                   ,{"elastic [i'læstik]","a.弹性的 n.松紧带,橡皮圈"}
                   ,{"elbow ['elbəu]","n.肘,(衣服的)肘部 vt.用肘推,用肘挤"}
                   ,{"elder ['eldə]","a.年长的,资格老的 n.长辈"}
                   ,{"elderly ['eldəli]","a.较老的,年长的 n.[the~]到了晚年的人"}
                   ,{"elect [ɪ'lekt]","v.选举,推选;选择,作出选择"}
                   ,{"electric [i'lektrik]","a.电的,导电的,电动的"}
                   ,{"electrical [i'lektrikəl]","a.电的,电学的"}
                   ,{"electrician [,ilek'triʃən]","n.电学家,电工"}
                   ,{"electricity [,ilek'trisəti]","n.电,电流;电学"}
                   ,{"electron [i'lektrɔn]","n.电子"}
                   ,{"electronic [,ilek'trɔnik]","a.电子的"}
                   ,{"elegant ['eliɡənt]","a.优雅的;端庄的;雅致的"}
                   ,{"element ['elimənt]","n.元素;要素;成分;元件;自然环境"}
                   ,{"elementary [,eli'mentəri]","a.初步的;基本的;[化]元素的;自然力的"}
                   ,{"elephant ['elifənt]","n.(动物)象"}
                   ,{"elevate ['eliveit]","vt.举起,提拔,振奋,提升...的职位"}
                   ,{"elevator ['eliveitə]","n.电梯,升降机"}
                   ,{"eleven [i'levən]","num.十一 pron./a.十一(个,只...)"}
                   ,{"eligible ['elidʒəbl]","a.符合条件的;(尤指婚姻等)合适(意)的"}
                   ,{"eliminate [i'limineit]","vt.除去;淘汰;排(删,消)除;削减(人员)"}
                   ,{"elite [ei'li:t,i'li:t]","n.<法>[集合名词]精华;精锐;中坚分子"}
                   ,{"eloquent ['eləkwənt]","a.雄辩的,有说服力的;善辩的,口才流利的"}
                   ,{"else [els]","ad.其它,另外,别的;[与 or 连用]否则"}
                   ,{"elsewhere [,els'hwεə]","ad.在别处,向别处"}
                   ,{"e-mail [iːmeɪl]","n.(electronic mail)电子信函,电子邮件"}
                   ,{"embark [em'bɑ:k,im-]","v.(使)上船(或飞机,汽车等);着手,从事"}
                   ,{"embarrass [im'bærəs]","vt.使困窘,使局促不安;阻碍,麻烦"}
                   ,{"embassy ['embəsi]","n.大使馆;大使及其随员"}
                   ,{"embed [im'bed]","vt.把...嵌(埋、插)入,扎牢;使深留脑中"}
                   ,{"embody [im'bɔdi]","vt.具体表达,使具体化;包含,收录"}
                   ,{"embrace [im'breis]","v.拥抱;包含;包围;环绕;采用;接受"}
                   ,{"emerge [i'mə:dʒ]","vt.显现,浮现;暴露;形成"}
                   ,{"emergency [i'mə:dʒənsi]","n.紧急情况,突然事件,非常时刻"}
                   ,{"emigrate ['emiɡreit]","v.(反)immigrate;(to,from)自本国移居他"}
                   ,{"eminent ['eminənt]","a.显赫的;杰出的;有名的;优良的"}
                   ,{"emit [i'mit]","vt.发出;放射;吐露;散发;发表;发行"}
                   ,{"emotion [i'məuʃən]","n.情绪,情感,感情"}
                   ,{"emperor ['empərə]","n.皇帝"}
                   ,{"emphasis ['emfəsis]","n.强调,重点"}
                   ,{"emphasize ['emfəsaiz]","v.(emphasise)强调"}
                   ,{"empire ['empaiə]","n.帝国"}
                   ,{"empirical [em'pirikəl]","a.凭经验(或观察)的,经验主义的"}
                   ,{"employ [im'plɔi]","n./v.雇用;用,使用"}
                   ,{"employee [,emplɔi'i:,em'plɔii:]","n.雇工,雇员"}
                   ,{"employer [im'plɔiə]","n.雇主"}
                   ,{"employment [im'plɔimənt]","n.雇用;使用;工作,职业"}
                   ,{"empty ['empti]","a.空的;空洞的 v.倒空,使成为空的"}
                   ,{"enable [i'neibl]","v.使能够,使成为可能;授予权利或方法"}
                   ,{"enclose [in'kləuz]","v.围住,圈起,封入"}
                   ,{"enclosure [in'kləuʒə]","n.围住,圈起,封入,附件"}
                   ,{"encounter [in'kauntə]","n./v.遇到,遭遇"}
                   ,{"encourage [in'kʌridʒ]","v.鼓励,怂恿"}
                   ,{"encyclopedia [en,saikləu'pi:djə]","n.(encyclopaedia)百科全书"}
                   ,{"end [end]","n.末端,端,梢;目标,目的 v.终止,结束"}
                   ,{"endeavor [in'devə]","v./n.(endeavour)努力,尽力,力图"}
                   ,{"ending ['endiŋ]","n.结尾,结局"}
                   ,{"endow [in'dau]","vt.资助,捐赠;(with)给予,赋予"}
                   ,{"endurance [in'djuərəns]","n.忍耐(力),持久(力),耐久(性)"}
                   ,{"endure [in'djuə]","v.忍受,持久,持续"}
                   ,{"enemy ['enimi]","n.敌人,仇敌,反对者;敌人,敌军,敌国"}
                   ,{"energetic [,enə'dʒetik]","a.精力旺盛的;积极的;有力的"}
                   ,{"energy ['enədʒi]","n.活力,精力;能,能量"}
                   ,{"enforce [in'fɔ:s]","v.实施,执行;强制;支持,坚持(要求,主张等)"}
                   ,{"engage [in'ɡeidʒ]","v.(in)从事,着手;约定;使订婚;保证;雇用"}
                   ,{"engagement [in'ɡeidʒmənt]","n.约会,约定;婚约,订婚"}
                   ,{"engine ['endʒin]","n.发动机,引擎;火车头"}
                   ,{"engineer [,endʒi'niə]","n.工程师"}
                   ,{"engineering [,endʒi'niəriŋ]","n.工程学"}
                   ,{"enhance [in'hɑ:ns,-hæns]","v.提高,增强"}
                   ,{"enjoy [in'dʒɔi]","vt.享受...的乐趣;欣赏;喜爱"}
                   ,{"enlarge [in'lɑ:dʒ]","vt.扩大,放大,增大"}
                   ,{"enlighten [in'laitən]","v.启发,启蒙,教导"}
                   ,{"enormous [i'nɔ:məs]","a.巨大的,庞大的"}
                   ,{"enough [i'nʌf]","a.(for)足够的 n.足够,充分 ad.足够地"}
                   ,{"enquire [in'kwaiə]","v.(inquire)询问,打听;调查;查问"}
                   ,{"enrich [in'ritʃ]","v.使富足;使肥沃;装饰;加料于;浓缩"}
                   ,{"enroll [in'rəul]","v.(enrol)招收;登记;入学;参军;成为会员"}
                   ,{"ensure [in'ʃuə]","v.确保,保证;使安全"}
                   ,{"entail [in'teil]","vt.使承担;需要;把(疾病等)遗传给;限定"}
                   ,{"enter ['entə]","vt.进入;参加,加入;写入 vi.进去,进来"}
                   ,{"enterprise ['entəpraiz]","n.事业,企(事)业单位;事业心,进取心"}
                   ,{"entertain [,entə'tein]","v.招待,款待;使娱乐;使欢乐;容纳,接受"}
                   ,{"entertainment [,entə'teinmənt]","n.招待,款待;表演文娱节目"}
                   ,{"enthusiasm [in'θju:ziæzəm]","n.热情,热心;狂热;积极性(for)"}
                   ,{"enthusiastic [in,θju:zi'æstik]","a.热情的,热心的"}
                   ,{"entire [in'taiə]","a.完全的,全部的,完整的"}
                   ,{"entitle [in'taitl]","v.给以权利(或资格);给...称号(题名);授权"}
                   ,{"entity ['entəti]","n.实体;存在(物);组织,机构;本质"}
                   ,{"entrance ['entrəns]","n.入口,门口;进入;入学,入会"}
                   ,{"entrepreneur [,ɔntrəprə'nə:]","n.[法]企业家, 主办人"}
                   ,{"entry ['entri]","n.进入,入口;通道;记载,条目"}
                   ,{"envelope ['envələup]","n.信封,信皮;封套"}
                   ,{"environment [in'vaiərənmənt]","n.环境,外界"}
                   ,{"envisage [in'vizidʒ]","v.想象,设想,展望,正视"}
                   ,{"envy ['envi]","v./n.羡慕,忌妒"}
                   ,{"epidemic [,epi'demik]","a.流行性的;传染的 n.流行病;传播"}
                   ,{"episode ['episəud]","n.一段情节;片断;(连续剧的)一集"}
                   ,{"epoch ['i:pɔk,'epək]","n.新纪元;时代;时期;【地质】世,纪,期"}
                   ,{"equal ['i:kwəl]","a.相等的;胜任的 n.相等的事务;对手 v.等于"}
                   ,{"equality [i:'kwɔləti]","n.同等;平等;相等;等式;等同性"}
                   ,{"equation [i'kweiʒən,-ʃən]","n.(数学)等式,方程式;(with)相等;均衡"}
                   ,{"equator [i'kweitə]","n.赤道"}
                   ,{"equip [i'kwip]","v.(with)装备,配备;训练"}
                   ,{"equipment [i'kwipmənt]","n.设备,器材,装置;才能"}
                   ,{"equivalent [i'kwivələnt]","a.(to)相等的,等价的 n.相等物,等价物"}
                   ,{"era ['iərə,'εərə]","n.时代,年代,阶段,纪元"}
                   ,{"erase [i'reiz,i'reis]","v.擦掉;删去;消磁"}
                   ,{"erect [i'rekt]","v.树立,建立,使竖立 a.直立的,垂直的"}
                   ,{"erosion [i'rəuʒən]","n.腐蚀,磨损;削弱,减少"}
                   ,{"erroneous [i'rəuniəs]","a.错误的,不正确的"}
                   ,{"error ['erə]","n.错误,过失"}
                   ,{"erupt [i'rʌpt]","v.(尤指火山)爆发"}
                   ,{"escalate ['eskəleit]","v.(使)逐步增长(或发展),(使)逐步升级"}
                   ,{"escape [i'skeip]","n.逃跑,逃脱 v.逃跑;避开,避免"}
                   ,{"escort ['eskɔ:t,i'skɔ:t]","vt.护送(卫);陪同 n.警卫,护送者;仪仗兵"}
                   ,{"especially [i'speʃəli]","ad.特别,尤其,格外;专门地,主要地"}
                   ,{"essay ['esei,e'sei]","n.文章,短文"}
                   ,{"essence ['esəns]","n.本质,实质"}
                   ,{"essential [i'senʃəl]","a.本质的,基本的;净化的 n.本质;要素"}
                   ,{"establish [i'stæbliʃ]","v.建立,设立;安置,使定居"}
                   ,{"establishment [i'stæbliʃmənt]","n.建立,设立,建立的机构(或组织)"}
                   ,{"estate [i'steit]","n.房地产;不动产;所有权;地位;生活状况"}
                   ,{"esteem [i'sti:m]","n.尊敬,尊重 vt.尊重,敬重;把...看作"}
                   ,{"estimate ['estimeit]","v./n.估计,估价;评估"}
                   ,{"eternal [i'tə:nəl]","n.永久的,永恒的"}
                   ,{"ethnic ['eθnik]","a.种族的;人种学的"}
                   ,{"evacuate [i'vækjueit]","vt.撤离,疏散,排泄,剥夺"}
                   ,{"evade [i'veid]","vt.逃避,回避;避开,躲避"}
                   ,{"evaluate [i'væljueit]","v.估价,评价;求...的值"}
                   ,{"evaporate [i'væpəreit]","v.蒸发,挥发;沉淀;发射;消失"}
                   ,{"eve [i:v]","n.(节日等的)前夜,前夕"}
                   ,{"even ['i:vən]","ad.甚至(更) a.均匀的;平的;相等的;偶数的"}
                   ,{"evening ['i:vniŋ]","n.傍晚,黄昏,晚上"}
                   ,{"event [i'vent]","n.事件,事情"}
                   ,{"eventually [i'ventʃuəli]","ad.终于,最后"}
                   ,{"ever ['evə]","ad.曾经;永远;在任何时候;究竟"}
                   ,{"every ['evri]","a.每一个的,每个的;每隔„的;全部的"}
                   ,{"everybody ['evri,bədi]","pron.(everyone)每人,人人"}
                   ,{"everyday ['evridei]","adj.每日的,日常的"}
                   ,{"everyone ['evriwʌn]","pron.(everybody)每人,人人,各人"}
                   ,{"everything ['evriθiŋ]","pron.每件事,一切;最重要的东西"}
                   ,{"everywhere ['evrihwεə]","ad.到处,各处,无论何处"}
                   ,{"evidence ['evidəns]","n.明显;显著;根据;证据;迹象"}
                   ,{"evident ['evidənt]","a.明显的,明白的"}
                   ,{"evil ['i:vəl]","a.邪恶的,罪恶的 n.邪恶,罪恶"}
                   ,{"evoke [i'vəuk]","vt.唤起(回忆、感情等);引起"}
                   ,{"evolution [,i:və'lu:ʃən,ev-]","n.进化,演变,发展,进展"}
                   ,{"evolve [i'vɔlv]","v.(使)发展;(使)进化;(使)进展"}
                   ,{"exact [iɡ'zækt]","a.确切的,正确的,精确的"}
                   ,{"exaggerate [iɡ'zædʒəreit]","v.夸大,夸张"}
                   ,{"exam [iɡ'zæm]","n.(examination)考试,测验"}
                   ,{"examine [iɡ'zæmin]","v.检查,调查;对...进行考试"}
                   ,{"example [iɡ'zɑ:mpl]","n.例子,实例;模范,榜样"}
                   ,{"exceed [ik'si:d]","v.超过,胜过;越出"}
                   ,{"exceedingly [ik'si:diŋli]","ad.极端地,非常"}
                   ,{"excel [ik'sel]","vi.胜过其他;擅长 vt.胜过,优于"}
                   ,{"excellent ['eksələnt]","a.卓越的,极好的"}
                   ,{"except [ik'sept]","prep.除...之外 v.除外;反对"}
                   ,{"exception [ik'sepʃən]","n.例外,除外;反对;异议"}
                   ,{"exceptional [ik'sepʃənəl]","a.例外的,异常的"}
                   ,{"excerpt [ek'sə:pt,'eksə:pt]","n./vt.摘录;引用"}
                   ,{"excess [ik'ses]","a.过量的,额外的 n.过量;过剩;超额;无节制"}
                   ,{"excessive [ik'sesiv]","a.过多的;过分的;额外"}
                   ,{"exchange [iks'tʃeindʒ]","v./n.(for)交换,兑换;交流,交易;交换台"}
                   ,{"excite [ik'sait]","v.刺激,使激动;激发,激励"}
                   ,{"excitement [ik'saitmənt]","n.刺激,激动,兴奋"}
                   ,{"exciting [ik'saitiŋ]","a.令人兴奋的,使人激动的"}
                   ,{"exclaim [ik'skleim]","v.呼喊,惊叫,大声说"}
                   ,{"exclude [iks'klu:d]","v.拒绝,把...排除在外,排斥"}
                   ,{"exclusive [ik'sklu:siv]","a.独占的;排他的;孤高的;唯一的;高级的"}
                   ,{"excursion [ik'skə:ʃən]","n.短途旅行,游览;离题;[物理]偏移,漂移"}
                   ,{"excuse [ik'skju:z,ik'skju:s]","v.原谅,宽恕,免除 n.借口,辩解"}
                   ,{"execute ['eksikju:t]","v.实行;实施;执行;完成;履行;处死"}
                   ,{"executive [iɡ'zekjutiv]","n.总经理,董事,行政负责人 a.执行的,实施的"}
                   ,{"exemplify [iɡ'zemplifai]","v.举例证明;示范;作...的范例[榜样]"}
                   ,{"exempt [iɡ'zempt]","a.免除的 v.免除 n.免税者;被免除义务者"}
                   ,{"exercise ['eksəsaiz]","n.练习,习题;训练,锻练 v.训练,锻练;行使"}
                   ,{"exert [iɡ'zə:t]","v.尽(力),施加(压力等),努力"}
                   ,{"exhaust [iɡ'zɔ:st]","v.使筋疲力尽,耗尽;抽完 n.排气装置;废气"}
                   ,{"exhibit [iɡ'zibit]","v.展出,陈列 n.展览品,陈列品"}
                   ,{"exhibition [,eksi'biʃən]","n.展览会;陈列,展览"}
                   ,{"exile ['eɡzail,'eksail]","n.流放;被流放者 vt.流放,放逐,把...充军"}
                   ,{"exist [iɡ'zist]","v.存在;生存;生活"}
                   ,{"existence [iɡ'zistəns]","n.存在,实在;生存,生活(方式)"}
                   ,{"exit ['eksit,'eɡ zit]","n.出口,通道"}
                   ,{"exotic [,iɡ'zɔtik]","a.奇异的;异国情调的;外(国)来的"}
                   ,{"expand [ik'spænd]","v.(使)膨胀,(使)扩张;张开,展开"}
                   ,{"expansion [ik'spænʃən]","n.扩张,膨胀;张开,伸展"}
                   ,{"expect [ik'spekt]","v.预期;期望,指望"}
                   ,{"expectation [,ekspek'teiʃən]","n.预期,期望,指望"}
                   ,{"expedition [,ekspi'diʃən]","n.远征(队),探险(队)"}
                   ,{"expel [ik'spel]","v.把...开除;驱逐;排出;发射"}
                   ,{"expend [ik'spend]","v.消费,花费"}
                   ,{"expenditure [iks'penditʃə]","n.花费;(时间,金钱等的)支出,消耗"}
                   ,{"expense [ik'spens]","n.花费,消费,消耗"}
                   ,{"expensive [ik'spensiv]","a.花费的,昂贵的"}
                   ,{"experience [ik'spiəriəns]","n./vt.经验;经历;体验;阅历"}
                   ,{"experiment [ik'speriment,ek's-]","n.实验;试验 v.(on)进行实验;做试验"}
                   ,{"experimental [ek,speri'mentəl,ek's-]","a.实验(性)的,试验(性)的"}
                   ,{"expert ['ekspə:t,ek'spə:t]","n.专家,能手 a.熟练的,有经验的;专门的"}
                   ,{"expertise [,ekspə:'ti:z]","n.专门知识(或技能等),专长"}
                   ,{"expire [ik'spaiə,ek-]","v.期满,(期限)终止;呼气;断气,死亡"}
                   ,{"explain [ik'splein]","v.解释,说明"}
                   ,{"explanation [,eksplə'neiʃən]","n.解释,说明"}
                   ,{"explicit [ik'splisit]","a.详述的,明确的;坦率的;显然的"}
                   ,{"explode [ik'spləud]","v.(使)爆炸,(使)爆发"}
                   ,{"exploit ['eksplɔit,ik's-]","v.开拓;开发;剥削 n.功绩[勋];业绩"}
                   ,{"explore [ik'splɔ:]","v.勘探,探测;探究,探索"}
                   ,{"explosion [ik'spləuʒən]","n.爆炸,爆发"}
                   ,{"explosive [ik'spləusiv]","a.爆炸(性)的,爆发(性)的 n.爆炸物,炸药"}
                   ,{"export [ik'spɔ:t,'ekspɔ:t]","v./n.输出,出口 n.出口商品"}
                   ,{"expose [ik'spəuz]","v.(to)使暴露,受到;使曝光"}
                   ,{"exposure [ik'spəuʒə]","n.暴露,揭露;方向;陈列;遗弃;照射量"}
                   ,{"express [ik'spres]","v.表达,表示 a.特快的,快速的 n.快车,快运"}
                   ,{"expression [ik'spreʃən]","n.表达;表情;声调;腔调;榨出;措词;式;符号"}
                   ,{"exquisite ['ekskwizit]","a.优美的,高雅的,精致的;剧烈的,异常的"}
                   ,{"extend [ik'stend]","v.延长,延伸;扩充;给予;提供;估价"}
                   ,{"extension [ik'stenʃən]","n.延长;扩大;范围;大小;尺寸;电话分机"}
                   ,{"extensive [ik'stensiv]","a.广大的,广阔的"}
                   ,{"extent [ik'stent]","n.广度,宽度,长度;程度,限度"}
                   ,{"exterior [ik'stiəriə]","a.外部的,外面的 n.外部"}
                   ,{"external [ik'stə:nəl]","a.外部的;客观的;外国的;表面的;[医]外用的"}
                   ,{"extinct [ik'stiŋkt]","a.灭绝的;熄灭了的"}
                   ,{"extinguish [ik'stiŋɡwiʃ]","v.熄灭;消灭;结束;压制;使黯然失色;偿清"}
                   ,{"extra ['ekstrə]","a.额外的,附加的 n.附加物,额外的东西"}
                   ,{"extract [ik'strækt,'ekstrækt]","v./n.拔出,抽出;摘录 n.抽取物;精华;选集"}
                   ,{"extraordinary [ik'strɔ:dənəri]","a.非常的;格外的;意外的;离奇的;临时的"}
                   ,{"extravagant [ik'strævəɡənt]","a.奢侈的;过分的;(言行等)放肆的"}
                   ,{"extreme [ik'stri:m]","a.末端的,尽头的;极度的 n.极端;最大程度"}
                   ,{"eye [ai]","n.眼(睛);视力;眼力;监督 vt.看,审视"}
                   ,{"eyebrow ['aibrau]","n.眉毛"}
                   ,{"eyesight ['aisait]","n.视力"}
                   ,{"fable ['feibl]","n.寓言"}
                   ,{"fabric ['fæbrik]","n.织物;织品;结构;构造;建筑物"}
                   ,{"fabricate ['fæbrikeit]","v.捏造,编造(谎言,借口等);建造,制造"}
                   ,{"fabulous ['fæbjuləs]","a.极好的;极为巨大的;寓言中的,传说中的"}
                   ,{"face [feis]","n.脸,面貌;表情;正面 v.面对着;朝,面向"}
                   ,{"facilitate [fə'siliteit]","v.使变得(更)容易;使便利;推动;帮助;处进"}
                   ,{"facility [fə'siliti]","n.灵巧,熟练;(pl.)设备,设施,便利条件"}
                   ,{"fact [fækt]","n.事实,实际"}
                   ,{"factor ['fæktə]","n.因素,要素"}
                   ,{"factory ['fæktəri]","n.工厂"}
                   ,{"faculty ['fækəlti]","n.才能;学院,系;(学院或系的)全体教学人员"}
                   ,{"fade [feid,fad]","v.褪色;衰减,消失 n.淡入(出)n.乏味(平淡)的"}
                   ,{"fail [feil]","v.失败,不及格;衰退,减弱"}
                   ,{"failure ['feiljə]","n.失败,不及格;失败者;故障,失灵;未能"}
                   ,{"faint ['feint]","a.微弱的;不明显的;暗淡的 n./v.昏倒;昏晕"}
                   ,{"fair [fεə]","a.公平的,合理的;相当的 n.集市,交易会"}
                   ,{"fairly ['fεəli]","ad.公正地,正当地;相当,还算"}
                   ,{"fairy ['fεəri]","a.幻想中的;虚构的;优雅的 n.仙女;精灵"}
                   ,{"faith [feiθ]","n.信任,信用;信仰,信条"}
                   ,{"faithful ['feiθful]","a.守信的,忠实的,如实的,可靠的"}
                   ,{"fake [feik]","n.假货,赝品 a.假的,冒充的 v.伪造;伪装"}
                   ,{"fall [fɔ:l]","v.跌倒;下降;减弱;坠落;变成,陷于 n.秋季"}
                   ,{"false [fɔ:ls]","a.谬误的,虚伪的,伪造的,假的"}
                   ,{"fame [feim]","n.名声;名望;传说 vt 使出名;传扬...的名"}
                   ,{"familiar [fə'miljə]","a.熟悉的;通晓的;亲近的 n.熟客;密友"}
                   ,{"family ['fæmili]","n.家,家庭成员;氏族,家庭;族,科"}
                   ,{"famine ['fæmin]","n.饥荒,饥馑"}
                   ,{"famous ['feiməs]","a.著名的"}
                   ,{"fan [fæn]","n.扇子,风扇;(影,球等)迷 v.扇,扇动,激起"}
                   ,{"fancy ['fænsi]","n.爱好,迷恋 v.想象,幻想 a.花式的,奇特的"}
                   ,{"fantastic [fæn'tæstik]","a.(fantastical)奇异的,幻想的,异想天开的"}
                   ,{"fantasy ['fæntəsi]","n.幻想,空想;空想的产物,幻想作品"}
                   ,{"far [fɑ:]","a./ad.远,久远,遥远 ad.到...程度,...得多"}
                   ,{"fare [fεə]","n.车费,船费;伙食;乘客 v.过活;进展;经营"}
                   ,{"farewell ['fεə'wel]","int.再会,别了 n.告别"}
                   ,{"farm [fɑ:m]","n.农场,饲养场 v.种田,经营农牧业"}
                   ,{"farmer ['fɑ:mə]","n.农民,农场主"}
                   ,{"farther ['fɑ:ðə]","ad.更远地,再往前地 a.更远的"}
                   ,{"fascinate ['fæsineit]","v.迷住,强烈吸引"}
                   ,{"fashion ['fæʃən]","n.流行式样(或货品),风尚,风气;样子,方式"}
                   ,{"fashionable ['fæʃənəbl]","a.流行的,时髦的"}
                   ,{"fast [fɑ:st,fæst]","a.快的,迅速的;坚固的 ad.紧紧地;迅速地"}
                   ,{"fasten ['fɑ:sən,'fæ-]","v.扎牢,使固定"}
                   ,{"fat [fæt]","a.多脂肪的,肥胖的;丰厚的 n.脂肪,肥肉"}
                   ,{"fatal ['feitl]","a.致命的,毁灭性的"}
                   ,{"fate ['feit]","n.命运"}
                   ,{"father ['fɑ:ðə]","n.父亲;创始人,发明者;(Father)神父"}
                   ,{"fatigue [fə'ti:ɡ]","n./v.(使)疲劳"}
                   ,{"fault [fɔ:lt]","n.过失,过错;缺点,毛病"}
                   ,{"faulty ['fɔ:lti]","a.有错误的,有缺点的,不完善的"}
                   ,{"favor ['feivə]","n.(favour)好感;喜爱;关切 v.赞成,支持,偏爱"}
                   ,{"favorable ['feivərəbl]","a.(favourable)赞许的,有利的,讨人喜欢的"}
                   ,{"favorite ['feivərit]","n.(favourite)最喜欢的人或物 a.喜爱的"}
                   ,{"fax [fæks]","n./v.传真(机)"}
                   ,{"fear [fiə]","n.害怕,恐惧;危险 vt.畏惧,害怕,担心"}
                   ,{"fearful ['fiəful]","a.可怕的,吓人的;害怕,担心,惊恐"}
                   ,{"feasible ['fi:zəbl]","a.可行的;切实可行的;行得通的;可用的"}
                   ,{"feast [fi:st]","n.节日;宴会"}
                   ,{"feat [fi:t]","n.功绩,伟业,技艺"}
                   ,{"feather ['feðə]","n.羽毛"}
                   ,{"feature ['fi:tʃə]","n.特征;容貌;特色;特写 v.以...为特色"}
                   ,{"February ['februəri]","n.二月"}
                   ,{"federal ['fedərəl]","a.联邦的;联邦制的;联合的;同盟的"}
                   ,{"federation ['fedəreiʃən]","n.同盟;联邦;联合;联盟;联合会"}
                   ,{"fee [fi:]","n.费(会费,学费等);酬金"}
                   ,{"feeble ['fi:bl]","a.虚弱的,无力的"}
                   ,{"feed [fi:d]","v.(on,with)喂养,饲养;(with)向...供给"}
                   ,{"feedback ['fi:dbæk]","n.反馈;反应;回授"}
                   ,{"feel ['fi:l]","v.触;认为 vi.摸上去有...感觉;摸索;觉得"}
                   ,{"feeling ['fi:liŋ]","n.感情;心情;知觉;同情"}
                   ,{"fell [fel]","v.击倒;打倒(疾病等);砍伐 a.凶猛的;可怕的"}
                   ,{"fellow ['feləu]","n.人,家伙;伙伴,同事 a.同样的,同事的"}
                   ,{"fellowship ['feləuʃip]","n.伙伴关系;联谊会,团体"}
                   ,{"female ['fi:meil]","n.女性;女人;雌兽 a.女性的;雌的;柔弱的"}
                   ,{"feminine ['feminin]","a.女性的;娇柔的"}
                   ,{"fence ['fens]","n.篱笆;围栏;剑术 v.用篱笆瓦围住;击剑"}
                   ,{"ferry ['feri]","n.摆渡;渡船;渡口 v.摆渡;渡运(人,车或物等)"}
                   ,{"fertile ['fə:tail]","a.肥沃的,富饶的;能繁殖的"}
                   ,{"fertilizer ['fə:tilaizə]","n.(fertiliser)肥料"}
                   ,{"festival ['festəvəl]","n.节日;音乐节;戏剧节 a.节日的;快乐的"}
                   ,{"fetch [fetʃ]","v.取来;接来;引出;售得;吸引 n.取得;拿"}
                   ,{"feudal ['fju:dl]","a.封建的;封地的;领地的"}
                   ,{"fever ['fi:və]","n.发热,狂热"}
                   ,{"few [fju:]","a.[表肯定]有些,几个;[表否定]几乎没有的"}
                   ,{"fiber ['faibə]","n.(fibre)纤维;构造;纤维制品"}
                   ,{"fiction ['fikʃən]","n.虚构,编造;小说"}
                   ,{"field ['fi:ld]","n.田野;运动场;(电或磁)场;领域,范围"}
                   ,{"fierce [fiəs]","a.凶猛的,残忍的;狂热的,强烈的"}
                   ,{"fifteen ['fifti:n]","num.十五 pron./a.十五(个,只...)"}
                   ,{"fifty ['fifti]","num.五十,五十个"}
                   ,{"fight [fait]","v./n.打(仗),搏斗,斗争,战斗"}
                   ,{"figure ['fiɡə]","n.体形;轮廓;数字;图形 v.描绘;计算;推测"}
                   ,{"file ['fail]","n.锉刀;文件,档案 v.锉"}
                   ,{"fill [fil]","v.(with)填满,充满"}
                   ,{"film [film]","n.电影;胶片;薄膜,薄层 vt.把..拍成电影"}
                   ,{"filter [filtə]","n.滤器,滤纸"}
                   ,{"final ['fainl]","a.最终的,决定性的 n.结局;决赛;期末考试"}
                   ,{"finally ['fainəli]","ad.最后,最终;决定性地"}
                   ,{"finance [fai'næns]","n.财政,金融 v.为...提供资金"}
                   ,{"financial [fai'nænʃəl]","a.财政的,金融的"}
                   ,{"find [faind]","v.(found,found)找到;发现;发觉;感到"}
                   ,{"finding ['faindiŋ]","n.发现,发现物;(常 pl.)调查/研究结果"}
                   ,{"fine [fain]","a.晴朗的,美好的,细致的 v./n.罚金,罚款"}
                   ,{"finger ['fiŋɡə]","n.手指;指状物;指针"}
                   ,{"finish ['finiʃ]","n.完成;结束;磨光 v.完成;结束;用完;毁掉"}
                   ,{"finite ['fainait]","a.有限的;[数]有穷的,限定的"}
                   ,{"fire ['faiə]","n.火;火灾,失火;炉火 vi.开火 vt.放(枪)"}
                   ,{"fireman ['faiəmən]","n.消防队员"}
                   ,{"fireplace ['faiəpleis]","n.壁炉"}
                   ,{"firm ['fə:m]","a.坚固的;坚决的,坚定的 n.公司,商号"}
                   ,{"first [fə:st]","a./ad.第一;最初;首次 n.开始 pron.第一名"}
                   ,{"fish [fiʃ]","n.(pl.fish(es))鱼;鱼肉 v.捕鱼;钓鱼"}
                   ,{"fisherman ['fiʃəmən]","n.渔夫,捕鱼人"}
                   ,{"fist [fist]","n.拳头 vt.用拳头打;紧握"}
                   ,{"fit ['fit]","a.(病的)发作,痉挛 v./a.n.合适,试穿,安装"}
                   ,{"fitting ['fitiŋ]","a.适当的,恰当的 n.(常 pl.)配件,附件;装配"}
                   ,{"five [faiv]","num.五 pron./a.五(个,只...)"}
                   ,{"fix [fiks]","v.(使)固定;修理;安装;决定;注视 n.困境"}
                   ,{"fixture ['fikstʃə]","n.固定设备;预定日期;比赛时间;定期存款"}
                   ,{"flag [flæɡ]","n.旗"}
                   ,{"flame [fleim]","n.火焰,火苗;热情;光辉 v.发火焰,燃烧"}
                   ,{"flap [flæp]","n.垂下物,帽沿,袋盖 n./v.拍打,拍动"}
                   ,{"flare [flεə]","v./n.闪耀,闪烁"}
                   ,{"flash [flæʃ]","n./a.闪光(的) v.发闪光,闪亮;闪现"}
                   ,{"flat [flæt]","a.平坦的,扁平的,平淡的 n.一套房间;平面"}
                   ,{"flatter ['flætə(r)]","vt.奉承;使高兴;使满意;胜过"}
                   ,{"flavor ['fleivə]","n.(flavour)情味;风味;滋味 v.给...调味"}
                   ,{"flaw [flɔ:]","n.裂缝;缺陷 v.使破裂;使有缺陷"}
                   ,{"flee [fli:]","v.逃走;逃避"}
                   ,{"fleet [fli:t]","n.舰队,船队"}
                   ,{"flesh [fleʃ]","n.肉,肌肉"}
                   ,{"flexible ['fleksibl]","a.柔韧的,易弯曲的,灵活的,能变形的"}
                   ,{"flight [flait]","n.飞翔,飞行;航班;航程;逃跑;楼梯的一段"}
                   ,{"fling [fliŋ]","v.(用力地)扔,抛,丢"}
                   ,{"float [fləut]","n.飘浮;漂流物 v.浮动;漂浮;传播;动摇"}
                   ,{"flock [flɔk]","n.(一)群,(禽,畜等的)群;大量 v.群集,成群"}
                   ,{"flood [flʌd]","n.洪水,水灾 v.淹没,发大水,泛滥"}
                   ,{"floor [flɔ:]","n.地板,(楼房)的层"}
                   ,{"flour ['flauə]","n.面粉"}
                   ,{"flourish ['flauriʃ]","n./v.繁荣,茂盛,兴旺"}
                   ,{"flow [fləu]","v.流,流动 n.流量,流速"}
                   ,{"flower ['flauə]","n.花;精华,精粹,精英;盛时 vi.开花"}
                   ,{"flu [flu:]","n.(influenza)流行性感冒"}
                   ,{"fluctuate ['flʌktjueit]","v.(使)波动;(使)起伏"}
                   ,{"fluent ['flu(:)ənt]","a.流利的,流畅的"}
                   ,{"fluid ['flu(:)id]","a.流动的,液体的 n.流体,液体"}
                   ,{"flush [flʌʃ]","n.脸红 v.发红;奔流 a.洋溢的;富裕的;齐平的"}
                   ,{"fly [flai]","n.飞行;苍蝇 v 飞行;飘杨 a.机敏的"}
                   ,{"foam [fəum]","v./n.泡沫,起泡沫"}
                   ,{"focus ['fəukəs]","n.焦点,(活动,兴趣等的)中心 v.(on)使聚集"}
                   ,{"fog [fɔɡ]","n.雾气,雾 v.以雾笼罩,被雾笼罩"}
                   ,{"fold [fəuld]","v.折叠;合拢;抱住 n.褶,褶痕;羊栏;信徒"}
                   ,{"folk [fəuk]","n.人们;民族;亲属 a.民间的"}
                   ,{"follow ['fɔləu]","v.跟随,接着;领会;沿着„前进,遵循;结果是"}
                   ,{"following ['fɔləuiŋ]","a.下列的,下述的,其次的,接着的"}
                   ,{"fond [fɔnd]","a.(of)喜爱的,爱好的"}
                   ,{"food [fu:d]","n.食物,粮食,养料"}
                   ,{"fool [fu:l]","n.傻子,笨蛋 vt.欺骗,愚弄 vi.干蠢事"}
                   ,{"foolish ['fu:liʃ]","a.愚笨的,愚蠢的"}
                   ,{"foot [fut]","n.(pl.feet)脚,足;英尺;底部"}
                   ,{"football ['fut,bɔ:l]","n.足球"}
                   ,{"footstep ['fut'step]","n.脚步(声),足迹"}
                   ,{"for [强 fɔ:,弱 fə]","prep.为了;给;代替;向;支持 conj.因为"}
                   ,{"forbid [fə'bid]","v.禁止,不许"}
                   ,{"force [fɔ:s]","n.力量,力;势力;(pl.)(总称)军队 v.强迫"}
                   ,{"fore [fɔ:]","ad.在前面 a.先前的;在前部的 n.前部"}
                   ,{"forecast ['fɔ:kɑ:st]","v./n.预测,预报"}
                   ,{"forehead ['fɔrid]","n.前额;(任何事物的)前部"}
                   ,{"foreign ['fɔrin]","a.外国的,(to)无关的;外来的;异质的"}
                   ,{"foreigner ['fɔrinə]","n.外国人"}
                   ,{"foremost ['fɔ:məust]","a.最先的;最初的; 主要的 ad.首要地"}
                   ,{"foresee [fɔ:'si:]","v.预见,预知"}
                   ,{"forest ['fɔrist]","n.森林"}
                   ,{"forever [fə'revə]","adv.(for ever)永远;总是"}
                   ,{"forge [fɔ:dʒ]","v.锻造,伪造 n.锻工车间;锻炉"}
                   ,{"forget [fə'ɡet]","v.忘记,遗忘"}
                   ,{"forgive [fə'ɡiv]","v.原谅,饶恕"}
                   ,{"fork [fɔ:k]","n.叉,耙;叉形物;餐叉"}
                   ,{"form [fɔ:m]","n.形状,形式;表格 v.组成,构成;形成"}
                   ,{"formal ['fɔ:məl]","a.正式的;形式的"}
                   ,{"format ['fɔ:mæt]","n.(出版物的)开本,版式,格式 vt.设计;安排"}
                   ,{"formation [fɔː'meɪʃn]","n.形成;构成;组织;构造;编制;塑造"}
                   ,{"former ['fɔ:mə]","a.以前的,在前的 pron.前者"}
                   ,{"formidable ['fɔ:midəbl]","a.强大的;令人敬畏的;可怕的;艰难的"}
                   ,{"formula ['fɔ:mjulə]","n.(pl.formulae)公式;规则;分子式;药方"}
                   ,{"formulate ['fɔ:mjuleit]","v. 用公式表示;规划;设计;系统地阐述"}
                   ,{"forth [fɔ:θ]","ad.向前;向外,往外"}
                   ,{"forthcoming ['fɔ:θ'kʌmiŋ]","a.即将到来的;准备好的;乐意帮助的;n.来临"}
                   ,{"fortnight ['fɔ:tnait]","n.两星期"}
                   ,{"fortunate ['fɔ:tʃənit]","a.幸运的,侥幸的"}
                   ,{"fortune ['fɔ:tʃən,-tʃu:n]","n.运气;命运;财产;财富"}
                   ,{"forty ['fɔ:ti]","num./a.四十 pron.四十(个,只...)"}
                   ,{"forum ['fɔ:rəm]","n.论坛,讨论会"}
                   ,{"forward ['fɔ:wəd]","ad.(also forwards)向前 a.向前的 v.转交"}
                   ,{"fossil ['fɔsəl]","n.化石"}
                   ,{"foster ['fɔstə]","vt.养育;收养;怀抱;鼓励 a.收养的 n.养育者"}
                   ,{"foul [faul]","a.污秽的;邪恶的 v.弄脏;妨害;犯规 n.犯规"}
                   ,{"found [faʊnd]","vt.建立;创立;创办;使有根据;铸造;熔制"}
                   ,{"foundation [faun'deiʃən]","n.基础,根本,建立,创立;地基,基金,基金会"}
                   ,{"fountain ['fauntin]","n.泉水,喷泉,源泉"}
                   ,{"four [fɔ:]","num.四 pron./a.四(个,只...)"}
                   ,{"fourteen ['fɔ:'ti:n]","num.十四,十四个"}
                   ,{"fox [fɔks]","n.狐狸"}
                   ,{"fraction ['frækʃən]","n.碎片,小部分,一点儿;分数"}
                   ,{"fracture ['fræktʃə]","n.裂缝(痕);骨折 v.(使)断裂,(使)折断"}
                   ,{"fragile ['frædʒail]","a.易碎的,脆的,易损坏的;虚弱的,脆弱的"}
                   ,{"fragment ['fræɡmənt]","n.碎片,小部分,片断"}
                   ,{"fragrant ['freiɡrənt]","a.香的;芬芳的"}
                   ,{"frame [freim]","n.框架;体格;骨架;组织;机构 v.设计;制定"}
                   ,{"framework ['freimwə:k]","n.构架;框架;结构;组织;机构"}
                   ,{"frank [fræŋk]","a.坦白的,直率的"}
                   ,{"fraud [frɔ:d]","n.欺诈,诈骗;欺骗(行为);骗子;假货"}
                   ,{"free [fri:]","a.自由的;免费的;免税的;空闲的 vt.释放"}
                   ,{"freedom ['fri:dəm]","n.自由,自主,免除,特权"}
                   ,{"freeze [fri:z]","v.使结冰,使凝固"}
                   ,{"freight [freit]","n.货物,货运,运费"}
                   ,{"frequency ['frikwənsi]","n.频率,周率"}
                   ,{"frequent ['fri:kwənt,fri'kwent]","a.时常发生的,频繁的"}
                   ,{"fresh [freʃ]","a.新鲜的,无经验的"}
                   ,{"friction ['frikʃən]","n.磨擦,摩擦力"}
                   ,{"Friday ['fraɪdeɪ]","n.星期五"}
                   ,{"fridge [fridʒ]","n.(refrigerator 的略语)冰箱"}
                   ,{"friend [frend]","n.朋友"}
                   ,{"friendly ['frendli]","a.友好的,友谊的"}
                   ,{"friendship ['frendʃɪp]","n.友谊,友好"}
                   ,{"fright [frait]","n.恐怖"}
                   ,{"frighten ['fraitən]","v.使惊恐"}
                   ,{"fringe [frindʒ]","n.边缘;(窗帘)缘饰;额前垂发 vt.饰...的边"}
                   ,{"frog [frɔɡ]","n.蛙"}
                   ,{"from [强 frɔm,弱 frəm]","prep.从,自从;由于;离;根据,按;去除"}
                   ,{"front [frʌnt]","a.前面的,前部的 n.正面;前线,战线 v.面对"}
                   ,{"frontier ['frʌntjə]","n.国境,边境;尖端,新领域"}
                   ,{"frost [frɔst]","n.霜,霜冻,严寒"}
                   ,{"frown [fraun]","v.皱眉"}
                   ,{"fruit [fru:t]","n.水果,果实;成果,效果"}
                   ,{"fruitful ['fru:tful]","a.多产的;果实累累的,富有成效的"}
                   ,{"frustrate [frʌs'treit]","vt.挫败,阻挠,使灰心"}
                   ,{"fry [frai]","v.油煎,油炸"}
                   ,{"fuel ['fjuəl]","n.燃料 vt.给...加燃料"}
                   ,{"fulfill [ful'fil]","v.(fulfil)完成,履行,实践,满足"}
                   ,{"full [ful]","a.(of)满的,充满的 a./ad.完全,充分"}
                   ,{"fume [fju:m]","n.(浓烈或难闻的)烟,气,汽"}
                   ,{"fun [fʌn]","n.玩笑,娱乐;有趣的人(或事物)"}
                   ,{"function ['fʌŋkʃən]","n.功能,作用;(pl.)职务;函数 v.起作用"}
                   ,{"fund [fʌnd]","n.资金,基金;存款,现款;(知识等的)累积"}
                   ,{"fundamental [,fʌndə'mentəl]","a.基础的,基本的 n.(pl.)基本原则,基本原理"}
                   ,{"funeral ['fju:nərəl]","n.丧葬,葬礼"}
                   ,{"funny ['fʌni]","a.滑稽的,可笑的"}
                   ,{"fur [fə]","n.毛,毛皮"}
                   ,{"furious ['fju:riəs]","a.狂怒的,狂暴的,猛烈的"}
                   ,{"furnace ['fə:nis]","n.炉子,熔炉"}
                   ,{"furnish ['fə:niʃ]","v.供应,提供;装备,布置"}
                   ,{"furniture ['fə:nitʃə]","n.家具"}
                   ,{"further ['fə:ðə]","ad./a.更远,更往前;进一步 v.促进,增进"}
                   ,{"furthermore ['fə:ðəmɔ:]","ad.而且,此外"}
                   ,{"fuse [fju:z]","n.保险丝,导火线,引信 v.熔化,熔合"}
                   ,{"fuss [fʌs]","n./v.忙乱,大惊小怪"}
                   ,{"futile ['fju:tail]","a.无效的,无用的,无希望的"}
                   ,{"future ['fju:tʃə]","n.将来,未来;前途,前景 a.将来的,未来的"}
                   ,{"gain [ɡein]","v.获得;增加;表等走快 n.增进,增加;收益"}
                   ,{"galaxy ['ɡæləksi]","n.星系;(the Galaxy)银河(系);一群显赫的人"}
                   ,{"gallery ['ɡæləri]","n.长廊,画廊,美术馆"}
                   ,{"gallon ['ɡælən]","n.加仑"}
                   ,{"gallop ['ɡæləp]","v./n.奔驰,飞奔"}
                   ,{"gamble ['ɡæmbl]","n./v.投机,冒险;赌博"}
                   ,{"game [ɡeim]","n.游戏,娱乐;比赛;(pl.)运动会 vi.赌博"}
                   ,{"gang [ɡæŋ]","n.一帮,一群,一伙"}
                   ,{"gaol [dʒeil]","n.(jail)监狱;(不加冠词)监禁 vt.使...坐牢"}
                   ,{"gap [ɡæp]","n.缺口;差距;空白;缺乏"}
                   ,{"garage ['ɡærɑ:dʒ,ɡə'r-]","n.车库,飞机库;修车厂"}
                   ,{"garbage ['ɡɑ:bidʒ]","n.垃圾"}
                   ,{"garden ['ɡɑ:dn]","n.(菜,花)园;公园"}
                   ,{"garlic ['ɡɑ:lik]","n.蒜,大蒜粉"}
                   ,{"garment ['ɡɑ:mənt]","n.(一件)衣服"}
                   ,{"gas [ɡæs]","n.气体;煤气;汽油;毒气 vt.毒(死);加油"}
                   ,{"gasoline ['ɡæsəli:n]","n.(gasolene)汽油"}
                   ,{"gasp [ɡɑ:sp,ɡæsp]","n.喘息,气喘 v.喘息;气吁吁地说"}
                   ,{"gate [ɡeit]","n.大门;入口;观众人数,门票收入"}
                   ,{"gather ['ɡæðə]","v.聚集,聚拢;推测,推断"}
                   ,{"gauge [ɡeidʒ]","n.标准尺寸;规格;量规,量表 v.测量"}
                   ,{"gay [ɡei]","a.快乐的,愉快的,色彩鲜艳的 n.同性恋"}
                   ,{"gaze [ɡeiz]","v./n.凝视,注视"}
                   ,{"gear [ɡiə]","n.齿轮,传动装置 v.(to)调整,使适合"}
                   ,{"gender ['dʒendə]","n.(生理上的)性;(名词、代词等的)性"}
                   ,{"gene [dʒi:n]","n.基因"}
                   ,{"general ['dʒenərəl]","a.一般的,普通的;总的,大体的 n.将军"}
                   ,{"generalize ['dʒenərəlaiz]","v.(generalise)归纳,概括;推广,普及"}
                   ,{"generate ['dʒenəreit]","vt.产生,发生;生殖"}
                   ,{"generation [,dʒenə'reiʃən]","n.产生,发生;一代(人)"}
                   ,{"generator ['dʒenəreitə]","n.发电机,发生器"}
                   ,{"generous ['dʒenərəs]","a.宽宏大量的,慷慨的"}
                   ,{"genetic [dʒi'netik]","a.遗传(学)的 n.[-s]遗传学"}
                   ,{"genius ['dʒi:njəs]","n.天才"}
                   ,{"gentle ['dʒentl]","a.和蔼的,文雅的,有礼貌的"}
                   ,{"gentleman ['dʒentlmən]","n.绅士,先生"}
                   ,{"gently ['dʒentli]","ad.文雅地,有礼貌地;轻轻地"}
                   ,{"genuine ['dʒenjuin]","a.真正的,名副其实的"}
                   ,{"geography [dʒi'ɔɡrəfi]","n.地理(学)"}
                   ,{"geology [dʒi'ɔlədʒi]","n.地质(学)"}
                   ,{"geometry [dʒi'ɔmitri]","n.几何(学)"}
                   ,{"germ [dʒə:m]","n.微生物,细菌"}
                   ,{"gesture ['dʒestʃə]","n.姿势,姿态,手势 v.做手势"}
                   ,{"get [ɡet]","v.获得,得到;使,使得;变得,成为;到达"}
                   ,{"ghost [ɡəust]","n.鬼魂,幽灵"}
                   ,{"giant ['dʒaiənt]","n.巨人 a.巨大的"}
                   ,{"gift [ɡift]","n.礼品,赠品;天赋,才能"}
                   ,{"gigantic [,dʒai'ɡæntik]","a.巨大的,庞大的"}
                   ,{"giggle ['ɡiɡl]","vi./n.痴笑;咯咯地笑 vt.咯咯地笑着说"}
                   ,{"girl [ɡə:l]","n.少女,姑娘,女孩;女职员"}
                   ,{"give [ɡiv]","v.给,授予;供给;献出,让步;捐赠;发表"}
                   ,{"glad [ɡlæd]","a.高兴的,快活的;乐意的,情愿的"}
                   ,{"glamor ['ɡlæmə]","n.(glamour)魅力;魔法 vt.迷惑"}
                   ,{"glance [ɡlɑ:ns,ɡlæns]","v.(at,over)扫视 n.匆匆看,一瞥,一眼"}
                   ,{"glare [ɡlεə]","vi.怒目而视;发射强光 n.强光;怒视;炫耀"}
                   ,{"glass [ɡlɑ:s,ɡlæs]","n.玻璃;玻璃杯;镜子;(pl.)眼镜"}
                   ,{"glide [ɡlaid]","n./v.溜,滑行;(时间)消逝"}
                   ,{"glimpse [ɡlimps]","n./v.一瞥,瞥见"}
                   ,{"glitter ['ɡlitə]","n.光辉,灿烂 v.闪闪发光;闪耀"}
                   ,{"global ['ɡləubəl]","a.球形的;全球的,全世界的;全面的"}
                   ,{"globe [ɡləub]","n.球体,地球仪;地球,世界"}
                   ,{"gloomy ['ɡlu:mi]","a.阴暗的,阴沉的,令人沮丧的,阴郁的"}
                   ,{"glorious ['ɡlɔ:riəs]","a.壮丽的,辉煌的;光荣的"}
                   ,{"glory ['ɡlɔ:ri]","n.光荣,荣誉"}
                   ,{"glove [ɡlʌv]","n.手套"}
                   ,{"glow [ɡləu]","v.发热,发光,发红 n.白热"}
                   ,{"glue [ɡlu:]","n.胶,胶水 v.胶合,粘贴"}
                   ,{"go [ɡəu]","v.去,离开;走;放置;变成;运转 n.围棋"}
                   ,{"goal [ɡəul]","n.目的,目标;守门员,球门;进球"}
                   ,{"goat [ɡəut]","n.山羊"}
                   ,{"god [ɡɔd]","n.上帝(小写 god 泛指所有的“神,神像”)"}
                   ,{"gold [ɡəuld]","n.金,黄金;金币;金黄色 a.金的,金制的"}
                   ,{"golden ['ɡəuldən]","a.金黄色的;贵重的,极好的"}
                   ,{"golf [ɡɔlf]","n.高尔夫球"}
                   ,{"good [ɡud]","a.好的;善良的;擅长的;乖的 n.好处;利益"}
                   ,{"goodby [,ɡud'bai]","int.(goodbye)再见"}
                   ,{"goodness ['ɡudnis]","n.善良,仁慈;(食物等)精华 int.天哪"}
                   ,{"goods [ɡudz]","n.(pl.)货物,商品"}
                   ,{"goose [ɡu:s]","n.(pl.geese)鹅,雌鹅,鹅肉"}
                   ,{"gorgeous ['ɡɔ:dʒəs]","a.华丽的;灿烂的;美丽的;宜人的;棒的"}
                   ,{"gossip ['ɡɔsip]","n./v.(说)闲话,闲聊"}
                   ,{"govern ['ɡʌvən]","v.统治,管理;决定,支配"}
                   ,{"government ['ɡʌvənmənt]","n.政府,内阁;管理,支配;政治,政体"}
                   ,{"governor ['ɡʌvənə]","n.统治者,管理者,总督,州(省)长"}
                   ,{"gown [ɡaun]","n.长袍,特殊场合穿的长服"}
                   ,{"grab [ɡræb]","v./n.(at)抓(住);夺(得)"}
                   ,{"grace [ɡreis]","n.优美,文雅;恩惠,恩泽;宽限,缓刑;感恩祷告"}
                   ,{"graceful ['ɡreisful]","a.优美的,文雅的,大方的"}
                   ,{"gracious ['ɡreiʃəs]","a.亲切的,客气的;宽厚的,仁慈的"}
                   ,{"grade [ɡreid]","n.等级,级别;年级;分数 v.分等,分级"}
                   ,{"gradual ['ɡrædʒuəl]","a.逐渐的,逐步的"}
                   ,{"graduate ['ɡrædjueit,-dʒu-]","n.大学毕业生,研究生 v.大学毕业 a.毕了业的"}
                   ,{"grain [ɡrein]","n.谷物,谷类;颗粒,细粒"}
                   ,{"gramme [ɡræm]","n.(gram)克"}
                   ,{"grammar ['ɡræmə]","n.语法,语法书"}
                   ,{"grand [ɡrænd]","a.盛大的,豪华的;重大的,主要的"}
                   ,{"grandmother ['ɡrænd,mʌð ə]","n.祖母,外祖母"}
                   ,{"grant [ɡrɑ:nt,ɡrænt]","v.同意,准予;授予 n.授予物;津贴;转让证书"}
                   ,{"grape [ɡreip]","n.葡萄"}
                   ,{"graph [ɡrɑ:f,ɡræf]","n.图表,曲线图"}
                   ,{"graphic ['ɡræfik]","a.绘画似的, 图解的,生动的"}
                   ,{"grasp [ɡrɑ:sp,ɡræsp]","v./n.抓住,抓紧;掌握,领会"}
                   ,{"grass [ɡrɑ:s,ɡræs]","n.草,草地"}
                   ,{"grateful ['ɡreitful]","a.(to,for)感激的;感谢的"}
                   ,{"gratitude ['ɡrætitju:d]","n.感激,感谢"}
                   ,{"grave [ɡreiv]","n.坟墓 a.严肃的,庄重的"}
                   ,{"gravity ['ɡræviti]","n.重力,引力;严肃,庄重"}
                   ,{"graze [ɡreiz]","vi.吃青草 vt.放牧;擦伤;掠过 .n.擦伤(处)"}
                   ,{"grease [ɡri:s]","n.动物脂,油脂,润滑脂 v.抹油,润滑"}
                   ,{"great [ɡreit]","a.伟大的;重要的;大量的;很好的;美好的"}
                   ,{"greedy [ɡri:di]","a.贪吃的,贪婪的,渴望的"}
                   ,{"green [ɡri:n]","a.绿色的;生的;未成熟的 n.绿色;蔬菜;植物"}
                   ,{"greenhouse ['ɡri:nhaus]","n.温室"}
                   ,{"greet [ɡri:t]","v.致敬,敬意,迎接;扑(鼻),入(耳),触(目)"}
                   ,{"greeting ['ɡri:tiŋ]","n.问候,致敬"}
                   ,{"grey [ɡrei]","n./a.(gray)灰色(的)"}
                   ,{"grief [ɡri:f]","n.悲伤,悲痛;悲伤的事,悲痛的缘由"}
                   ,{"grieve [ɡri:v]","v.使悲伤,使伤心"}
                   ,{"grim [ɡrim]","a.严酷的,令人害怕的;不愉快的,讨厌的"}
                   ,{"grin [ɡrin]","n./vi.露齿而笑,咧嘴一笑"}
                   ,{"grind [ɡraind]","v.磨(碎),碾(碎)"}
                   ,{"grip [ɡrip]","v./n.紧握,抓紧;掌握"}
                   ,{"groan [ɡrəun]","v./n.呻吟"}
                   ,{"grocer ['ɡrəusə]","n.食品商,杂货商"}
                   ,{"grope [ɡrəup]","n./v.摸索,探索"}
                   ,{"gross [ɡrəus]","a.总的,毛(重)的;粗鲁的,粗俗的 n.总额"}
                   ,{"ground [ɡraund]","n.地,地面,土地;场地,场所;理由,根据"}
                   ,{"group [ɡru:p]","n.群,组 v.分组"}
                   ,{"grow [ɡrəu]","v.生长,成长;渐渐变成;栽培,种植;发展"}
                   ,{"grown-up [ɡrəʊn ʌp]","a.成长的,成熟的,成人的 n.成年人"}
                   ,{"growth [ɡrəuθ]","n.生长,增长,发展"}
                   ,{"guarantee [,ɡærən'ti:]","n.保证,保证书 v.保证,担保"}
                   ,{"guard [ɡɑ:d]","v./n.保卫,守卫,提防 n.哨兵,警卫,看守"}
                   ,{"guess [ɡes]","v./n.猜测,推测;以为;猜想[同]surmise"}
                   ,{"guest [ɡest]","n.客人,宾客,旅客"}
                   ,{"guidance ['ɡaidəns]","n.引导,指导"}
                   ,{"guide [ɡaid]","n.领路人;指南,导游 v.领路;指导;支配;管理"}
                   ,{"guideline ['ɡaidlain]","n.指导方针,指导原则,准则,标准"}
                   ,{"guilt [ɡilt]","n.罪过,内疚"}
                   ,{"guilty ['ɡilti]","a.(of)有罪的,内疚的"}
                   ,{"guitar [ɡi'tɑ:]","n.吉他 vi.弹吉他"}
                   ,{"gulf [ɡʌlf]","n.海湾"}
                   ,{"gum [ɡʌm]","n.树胶;口香糖"}
                   ,{"gun [ɡʌn]","n.枪,炮,手枪"}
                   ,{"gut [ɡʌt]","n.[pl.]胆量;内脏 a.本能的 vt.取出内脏"}
                   ,{"guy [ɡai]","n.家伙, 人"}
                   ,{"gymnasium [dʒim'neiziəm]","n.(gym)体育馆,健身房"}
                   ,{"habit ['hæbit]","n.习惯,习性,脾性"}
                   ,{"habitat ['hæbitæt]","n.(动物的)栖息地,(植物的)产地"}
                   ,{"hail [heil]","v.下雹;欢呼,欢迎 n.雹"}
                   ,{"hair [hεə]","n.毛发,头发;绒毛,毛状物"}
                   ,{"half [hɑ:f,hæf]","n.半,一半 a.一半的,不完全的 ad.一半地"}
                   ,{"hall [hɔ:l]","n.礼堂,会堂,办公大楼,门厅"}
                   ,{"halt [hɔ:lt]","n.止步,停步,停止前进 v.止步,(使)停止"}
                   ,{"ham [hæm]","n.火腿"}
                   ,{"hamburger ['hæmbə:ɡə]","n.汉堡包,牛肉饼"}
                   ,{"hammer ['hæmə]","n.铁锤,槌,榔头 v.锤击,敲打"}
                   ,{"hamper ['hæmpə]","v.妨碍,阻碍,牵制"}
                   ,{"hand [hænd]","n.手,人手,雇员;专门业人员;指针 v.交"}
                   ,{"handbook ['hændbuk]","n.手册,指南"}
                   ,{"handful ['hændful]","n.一把;少数;一小撮"}
                   ,{"handicap ['hændikæp]","v.妨碍 n.(身体或智力方面的)缺陷;不利条件"}
                   ,{"handkerchief ['hæŋkətʃif,-tʃi:f]","n.手帕"}
                   ,{"handle ['hændl]","n.柄,把手,拉手 v.处理,对待,操纵;触,抚养"}
                   ,{"handsome ['hænsəm]","a.漂亮的,英俊的;慷慨的,数量可观的"}
                   ,{"handwriting ['hænd,raitiŋ]","n.笔迹,手迹,书法"}
                   ,{"handy ['hændi]","a.手边的,近便的;方便的"}
                   ,{"hang ['hæŋ]","v.悬挂,垂吊;吊死,绞死"}
                   ,{"happen ['hæpən]","v.(偶然)发生;碰巧,恰好"}
                   ,{"happy ['hæpi]","a.快乐的,幸福的;乐意的;令人满意的"}
                   ,{"harassment ['hærəsmənt]","n.骚扰,扰乱;烦恼,烦乱"}
                   ,{"harbor ['hɑ:bə]","n.(harbour)海港;避难所 v.隐匿,窝藏"}
                   ,{"hard [hɑ:d]","a.坚硬的;结实的;困难的;难忍的;严厉的"}
                   ,{"harden ['hɑ:dən]","v.(使)变硬"}
                   ,{"hardly ['hɑ:dli]","ad.几乎不,简直不;仅仅"}
                   ,{"hardship ['hɑ:dʃip]","n.艰难,困苦"}
                   ,{"hardware ['hɑ:dwεə]","n.五金,金属制品;硬件"}
                   ,{"harm [hɑ:m]","n./v.伤害,损害,危害"}
                   ,{"harmony ['hɑ:məni]","n.协调,和谐;融洽"}
                   ,{"harness ['hɑ:nis]","v.治理,利用 n.马具,挽具"}
                   ,{"harsh [hɑ:ʃ]","a.粗糙的;(声音)刺耳的;苛刻的,严酷的"}
                   ,{"harvest ['hɑ:vist]","n.收获,收成;成果,后果 v.收获,收割"}
                   ,{"haste [heist]","n.匆忙,急速;草率 v.赶快;匆忙"}
                   ,{"hasty ['heisti]","a.匆忙的,仓促的;草率的"}
                   ,{"hat [hæt]","n.帽子(一般指有边的帽子)"}
                   ,{"hatch [hætʃ]","v.孵,孵出;策划,图谋 n.舱口,小门"}
                   ,{"hate [heit]","v.恨,憎恨;不愿,不喜欢 n.恨,憎恶"}
                   ,{"hatred ['heitrid]","n.憎恨,憎恶,怨恨"}
                   ,{"haul [hɔ:l]","v.拖曳,拖运,用力拖"}
                   ,{"have [hæv,弱 həv,əv,v]","v.有,具有;体会,经受;从事;使;吃,喝"}
                   ,{"hawk [hɔ:k]","n.鹰,隼"}
                   ,{"hay [hei]","n.干草"}
                   ,{"hazard ['hæzəd]","n.危险,冒险,危害 v.冒险,拼命"}
                   ,{"he [hi:,弱 hi,i:,i]","pron.他;(不论性别的)一个人"}
                   ,{"head [hed]","n.头;顶部;领导,首脑 v.主管;位于...顶部"}
                   ,{"headache ['hedeik]","n.头痛"}
                   ,{"heading ['hediŋ]","n.标题"}
                   ,{"headline ['hedlain]","n.大字标题,新闻标题"}
                   ,{"headmaster ['hed'mɑ:stə]","n.校长"}
                   ,{"headquarters [,hed'kwɔ:təz]","n.司令部,指挥部;总部,总局"}
                   ,{"heal [hi:l]","v.治愈,愈合"}
                   ,{"health [helθ]","n.健康,健康状况;卫生"}
                   ,{"healthy ['helθi]","a.健康的,健壮的;有益健康的,卫生的"}
                   ,{"heap [hi:p]","n.(一)堆,大量,许多 v.(up)堆,堆起"}
                   ,{"hear [hiə]","v.听见;审讯;(from)收到..的信/电话;听说"}
                   ,{"hearing ['hiəriŋ]","n.听,倾听;听力;审讯"}
                   ,{"heart [hɑ:t]","n.心(脏);内心,感情;热忱;中心,要点"}
                   ,{"heat [hi:t]","n.热,热度;热烈,激烈 v.(给)加热,(使)变热"}
                   ,{"heave [hi:v]","v.(用力)举,提,拉;扔;拖;呕吐 n.举起"}
                   ,{"heaven ['hevən]","n.天,天空,天堂;(Heaven)上帝,神"}
                   ,{"heavy ['hevi]","a.重的,重型的;沉重的,大量的,猛烈的"}
                   ,{"hedge [hedʒ]","n.篱笆,树篱,障碍物 v.用树篱围住"}
                   ,{"heel [hi:l]","n.脚后跟,踵,鞋跟"}
                   ,{"height [hait]","n.高,高度;(常 pl.)高地,高处"}
                   ,{"heighten ['haitən]","v.提高,升高"}
                   ,{"heir [εə]","n.继承人"}
                   ,{"helicopter ['helikɔptə]","n.直升(飞)机"}
                   ,{"hell [hel]","n.地狱,阴间;苦境,极大痛苦"}
                   ,{"hello [he'ləu,hə-]","int.英(美)喂,你好(用来打招呼或引起注意)"}
                   ,{"helmet ['helmit]","n.头盔,钢盔"}
                   ,{"help [help]","v.帮(援)助;有助于;[呼救]救命 n.帮助(手)"}
                   ,{"helpful ['helpful]","a.(to)有帮助的,有益的,有用的"}
                   ,{"hemisphere ['hemi,sfiə]","n.半球"}
                   ,{"hen [hen]","n.母鸡"}
                   ,{"hence [hens]","ad.从此,今后;因此"}
                   ,{"henceforth ['hens'fɔ:θ]","ad.今后"}
                   ,{"her [hə:, 弱 ə:,hə, ə]","pron.[she 的宾格]她;[she 的所有格]她的"}
                   ,{"herb [hə:b,ə:b]","n.药草,(调味用的)香草,草本植物"}
                   ,{"herd [hə:d]","n.群,兽群,牛群 v.放牧,群集"}
                   ,{"here [hiə]","ad.在(到,向)这里;这时;在这一点上"}
                   ,{"heritage ['heritidʒ]","n.遗产,继承物;传统"}
                   ,{"hero ['hiərəu]","n.英雄,勇士;男主角,男主人公"}
                   ,{"heroic [hi'rəuik]","a.英雄的,英勇的,崇高的"}
                   ,{"heroin ['herəuin]","n.海洛因"}
                   ,{"heroine ['herəuin]","n.女英雄;女主角"}
                   ,{"hers [hə:z]","pron.[she 的物主代词]她的(所有物)"}
                   ,{"herself [hə:'self]","pron.[反身代词]她自己;她亲自,她本人"}
                   ,{"hesitate ['heziteit]","v.犹豫,踌躇;含糊,支吾"}
                   ,{"hi [hai]","interj.(hey)嗨!喂!"}
                   ,{"hide [haid]","v.隐藏,躲藏;隐瞒 n.皮革,兽皮"}
                   ,{"hierarchy ['haiə,rɑ:ki]","n.等级制度;统治集团,领导层"}
                   ,{"high [hai]","a.高的,高度的,高级的,高尚的 ad.高高地"}
                   ,{"highland ['hailənd]","n. 高地,高原"}
                   ,{"highlight ['hailait]","v.使显著,使突出;强调 n.最精彩的部分"}
                   ,{"highly ['haili]","ad.高度地,很,非常;赞许地"}
                   ,{"highway ['haiwei]","n.公路,大路"}
                   ,{"hijack ['haidʒæk]","v.劫持,劫机,拦路抢劫"}
                   ,{"hike [haik]","n.徒步旅行;增加 vi.徒步旅行 vt.提高"}
                   ,{"hill [hil]","n.小山,山岗,高地;[pl.]丘陵(地带)"}
                   ,{"him [him,弱 im]","pron.他(he 的宾格形式)"}
                   ,{"himself [him'self]","pron.[反身代词]他自己;他本人"}
                   ,{"hinder ['hɪndə(r)]","v.(from)阻止,妨碍 a.后面的"}
                   ,{"hinge [hindʒ]","n.合页,铰链 vi.依...而定"}
                   ,{"hint [hint]","n.暗示,提示,线索 v.暗示,示意"}
                   ,{"hip [hip]","n.臀部,髋;屋脊"}
                   ,{"hire [haiə]","n./v.雇用,租借"}
                   ,{"his [hiz,弱 iz]","pron.[he 的所有格/物主代词]他的(所有物)"}
                   ,{"historian [his'tɔ:riən]","n.历史学家"}
                   ,{"historic [his'tɔrik]","a.有历史意义的;历史的"}
                   ,{"historical [his'tɔrikəl]","a.历史的;有关历史的"}
                   ,{"history ['histəri]","n.历史,历史学;来历,经历"}
                   ,{"hit [hit]","v.打,击;碰撞 n.击中;成功而风行一时的事物"}
                   ,{"hitherto [,hið ə'tu:]","ad.到目前为止,迄今"}
                   ,{"hobby ['hɔbi]","n.业余爱好,嗜好,兴趣"}
                   ,{"hoist [hɔist]","v.举起,升起,吊起"}
                   ,{"hold [həuld]","v.拿着;保有;托住;举行;继续 n.握住;船舱"}
                   ,{"holder ['həuldə]","n.持有者,占有者;(台,架等)支持物"}
                   ,{"hole [həul]","n.洞,孔"}
                   ,{"holiday ['hɔlədi]","n.假日,节日,假期,休假"}
                   ,{"hollow ['hɔləu]","a.空的,中空的;空洞的,空虚的 v.挖空,凿空"}
                   ,{"holy ['həuli]","a.神圣的,圣洁的"}
                   ,{"home [həum]","ad.回家,在家 n.家;家乡 a.家庭的;家乡的"}
                   ,{"homework ['həumwə:k]","n.(学生的)家庭作业、课外人员"}
                   ,{"homogeneous [,hɔmə'dʒi:niəs]","a.同种类的,同性质的,有相同特征的"}
                   ,{"honest ['ɔnist]","a.诚实的,正直的,老实的"}
                   ,{"honey ['hʌni]","n.蜜,蜂蜜"}
                   ,{"honor ['ɔnə]","n.(honour)尊敬,敬意;荣誉,光荣 v.尊敬"}
                   ,{"honorable ['ɔnərəbl]","a.(honourable)可敬的;荣誉的,光荣的"}
                   ,{"hook [huk]","n.钩,吊钩,钩状物 v.钩住"}
                   ,{"hop [hɔp]","v.人单足跳;跳上(车等) n.蹦跳;短程飞行"}
                   ,{"hope [həup]","n.希望,期望;希望的人或事 v.希望,期望"}
                   ,{"hopeful ['həupful]","a.给人希望的,抱有希望的"}
                   ,{"horizon [hə'raizən]","n.地平线;眼界,见识"}
                   ,{"horizontal ['hɔri'zɔntəl]","a.地平线的;水平的"}
                   ,{"horn [hɔ:n]","n.(牛羊等的)角;号,喇叭;角状物;角制品"}
                   ,{"horrible ['hɔrəbl]","a.令人恐惧的,可怕的;极讨厌的,糟透的"}
                   ,{"horror ['hɔrə]","n.恐怖,战栗"}
                   ,{"horse [hɔ:s]","n.马;跳马,鞍马 v.骑马"}
                   ,{"horsepower ['hɔ:s,pauə]","n.[机]马力"}
                   ,{"hose [həuz]","n.水龙带,软管 v.用软管(淋浇,冲洗)"}
                   ,{"hospital ['hɔspitəl]","n.医院"}
                   ,{"hospitality [,hɔspi'tæləti]","n.好客,殷勤,款待"}
                   ,{"host [həust]","n.主人;旅店老板;节目主持人;一大群,许多"}
                   ,{"hostage ['hɔstidʒ]","n.人质"}
                   ,{"hostess ['həustis]","n.女主人,女主持人"}
                   ,{"hostile ['hɔstail,-təl]","a.敌对的,敌方的,敌意的"}
                   ,{"hot [hɔt]","a.(炎)热的;辣的;急躁的;激动的;热衷的"}
                   ,{"hotel [həu'tel]","n.旅馆"}
                   ,{"hound [haund]","n.猎狗;卑鄙的人 vt.用猎狗追,追逐"}
                   ,{"hour ['auə]","n.小时,钟点;时刻;课时,工作时间"}
                   ,{"house [haus,hauz]","n.房屋;商业机构;[H-]议院 v.给...房子住"}
                   ,{"household ['haushəuld]","n.家庭,家人 a.家庭(务)的,家常的"}
                   ,{"housewife ['hauswaif]","n.家庭主妇"}
                   ,{"housework ['hauswə:k]","n.家务,家事(不可数)"}
                   ,{"housing ['hɔvə,'hʌ-]","n.住房,住房供给;(外、阀)壳,防护罩"}
                   ,{"hover ['hɔvə,'hʌ-]","vi.(鸟)盘旋,翱翔,(人)逗留在附近徘徊"}
                   ,{"how [hau]","ad.(表示方法、手段、状态)怎样;如何"}
                   ,{"however [hau'evə]","ad.然而,可是,不过,无论如何 conj.无论"}
                   ,{"howl [haul]","n.怒吼,嗥叫 vi.(风等)怒吼,咆哮"}
                   ,{"huddle ['hʌdl]","n./v.拥挤;聚集 v.(因寒冷、害怕而)缩成一团"}
                   ,{"hug [hʌɡ]","v./n.热烈拥抱,紧抱"}
                   ,{"huge [hju:dʒ]","a.巨大的,庞大的"}
                   ,{"hum [hʌm]","v.哼曲子;发嗡嗡声;忙碌 n.嗡嗡声,嘈杂声"}
                   ,{"human ['hju:mən]","a.人的,人类的 n.人"}
                   ,{"humanity [hju:'mænəti]","n.人类,人性,人情;(pl.)人文科学"}
                   ,{"humble ['hʌmbl]","a.谦卑的,恭顺的;地位低下的 v.降低,贬低"}
                   ,{"humid ['hju:mid]","a.湿的,湿气重的"}
                   ,{"humidity [hju:'midəti]","n.湿气,湿度"}
                   ,{"humiliate [hju:'milieit]","v.使羞辱,使丢脸[同]disgrace"}
                   ,{"humor ['hju:mə]","n.(humour)幽默,诙谐"}
                   ,{"humorous ['hju:mərəs]","a.富于幽默感的,幽默的;滑稽的"}
                   ,{"hundred ['hʌndrəd]","num.百,一百;[pl.]许多 a.一百的;许多"}
                   ,{"hunger ['hʌŋɡə]","n./v.饥饿;渴望"}
                   ,{"hungry ['hʌŋɡri]","a.饥饿的,渴望的"}
                   ,{"hunt [hʌnt]","v./n.打猎,猎取;(for)搜索;寻找"}
                   ,{"hurl [hə:l]","vt.猛投,力掷;大声叫骂"}
                   ,{"hurricane ['hʌrikən]","n.飓风"}
                   ,{"hurry ['hʌri,'hə:ri]","vi.匆忙 vt.催促;急运(派) n.急(匆)忙"}
                   ,{"hurt [hə:t]","n.伤痛,伤害 v.刺痛,伤害;伤...的感情"}
                   ,{"husband ['hʌzbənd]","n.丈夫"}
                   ,{"hut [hʌt]","n.小屋,棚屋"}
                   ,{"hydrogen ['haidrədʒən]","n.氢"}
                   ,{"hypocrisy [hi'pɔkrisi]","n.伪善,虚伪"}
                   ,{"hypothesis [hai'pɔθisis]","n.假说,假设,前提"}
                   ,{"hysterical [hɪ'sterɪkl]","a.情绪异常激动的,歇斯底里的"}
                   ,{"I [aɪ]","pron.(主格)我"}
                   ,{"ice [ais]","n.冰;冰冻甜食 vt.冰冻,使成冰"}
                   ,{"ice-cream ['aiskri:m]","n.冰淇淋"}
                   ,{"idea [ai'diə,'ai'diə]","n.想法,念头;概念,观念;意见,主意"}
                   ,{"ideal [ai'diəl]","a.理想的;空想的;理想主义的;唯心的 n.理想"}
                   ,{"identical [ai'dentikəl]","a.(to.with)同一的,同样的"}
                   ,{"identification [ai,dentifi'keiʃən]","n.识别,鉴别;证件;认同"}
                   ,{"identify [ai'dentifai]","v.识别,鉴别;(with)把...和...看成一样"}
                   ,{"identity [ai'dentəti]","n.身份;本体;特征;同一(性);一致;国籍;等式"}
                   ,{"ideology [,aidi'ɔlədʒi,idi-]","n.意识形态, (政治或社会的)思想意识"}
                   ,{"idiom ['idiəm]","n.习语;成语方言;(艺术等的)风格,特色"}
                   ,{"idiot ['idiət]","n.白痴;极蠢的人;笨蛋"}
                   ,{"idle ['aidl]","a.空闲的,闲置的;懒散的 v.空费,虚度"}
                   ,{"if [ɪf]","conj.(用于连接宾语从句)是否;是不是"}
                   ,{"ignite [iɡ'nait]","v.点火,引燃"}
                   ,{"ignorance ['iɡnərəns]","n.无知,愚昧;不知道"}
                   ,{"ignorant ['iɡnərənt]","a.无知的,愚昧的;不知道的"}
                   ,{"ignore [iɡ'nɔ:]","v.不理,不顾,忽视"}
                   ,{"ill [il]","a.有病的;坏的;恶意的 ad.坏地;不利地"}
                   ,{"illegal [ɪ'liːɡl]","a.不合法的,非法的"}
                   ,{"illiterate [i'litərət]","a.文盲的,未受教育的"}
                   ,{"illness ['ilnis]","n.病,疾病"}
                   ,{"illuminate [i'lju:mineit]","vt.照亮,照明;用灯光装饰;说明,阐释"}
                   ,{"illusion [i'lju:ʒən]","n.幻想,错误的观念;错觉,幻觉,假象"}
                   ,{"illustrate ['iləstreit]","v.举例说明,阐明;图解,加插图"}
                   ,{"illustration [,ilə'streiʃən]","n.说明;例证,插图;举例说明"}
                   ,{"image ['imidʒ]","n.形象,声誉;印象;像;形象的描述,比喻"}
                   ,{"imaginary [i'mædʒinəri]","a.想象的,虚构的"}
                   ,{"imagination [i,mædʒi'neiʃən]","n.想象(力);空想,幻觉;想象出来的事物"}
                   ,{"imaginative [i'mædʒinətiv]","a.富有想象力的,爱想象的"}
                   ,{"imagine [i'mædʒin]","v.想象,设想,料想"}
                   ,{"imitate ['imiteit]","v.模仿,仿效;仿造,伪造"}
                   ,{"imitation [,imi'teiʃən]","n.模仿,仿效;仿制;仿造品"}
                   ,{"immediate [i'mi:diət]","a.立即的,即时的;直接的,最接近的"}
                   ,{"immense [i'mens]","a.广大的,巨大的;[口]极好的"}
                   ,{"immerse [i'mə:s]","v.使沉浸在;使浸没"}
                   ,{"immigrant ['imiɡrənt]","a.(从国外)移来的,移民的 n.移民,侨民"}
                   ,{"immune [i'mju:n]","a.免疫的,有免疫力的;有受影响的;豁免的"}
                   ,{"impact ['impækt,im'pækt]","n.冲击,碰撞;影响 v.影响;挤入,压紧"}
                   ,{"impair [im'pεə]","v.损害,损伤;削弱,减少"}
                   ,{"impart [im'pɑ:t]","vt.传授,给予;告知,通知"}
                   ,{"impatient [im'peiʃənt]","a.不耐烦的,急躁的"}
                   ,{"imperative [im'perətiv]","n.命令;需要;规则;祈使语气 a.强制的;紧急的"}
                   ,{"imperial [im'piəriəl]","a.帝国的,帝王的;(度量衡)英制的"}
                   ,{"impetus ['ɪmpɪtəs]","n.推动(力),促进"}
                   ,{"implement ['impliment]","n.(pl.)工具,器具 v.贯彻,实现"}
                   ,{"implication [,impli'keiʃən]","n.含意,暗示,暗指;牵连"}
                   ,{"implicit [im'plisit]","a.含蓄的;(in)固有的;无疑问的;绝对的"}
                   ,{"imply [im'plai]","v.意指,含...意思,暗示"}
                   ,{"import [im'pɔ:t,'impɔ:t]","v./n.进口,输入,(pl.)进口商品;要旨,含意"}
                   ,{"importance [im'pɔ:təns]","n.重要,重要性"}
                   ,{"important [im'pɔ:tənt]","a.重要的,重大的;有地位的,有权力的"}
                   ,{"impose [im'pəuz]","v.征(税);(on)把...强加给"}
                   ,{"impossible [im'pɔsəbl]","a.不可能的;难以忍受的,很难对付的"}
                   ,{"impress [im'pres,'impres]","v.(on)印,盖印;留下印象,引人注目"}
                   ,{"impression [im'preʃən]","n.印象,感想;盖印,压痕"}
                   ,{"impressive [im'presiv]","a.给人深刻印象的,感人的"}
                   ,{"improve [im'pru:v]","v.改善,改进,增进;好转,进步"}
                   ,{"improvement [im'pru:vmənt]","n.改进,进步,增进;改进措施"}
                   ,{"impulse ['impʌls]","v.推动 n.推动;冲动,刺激"}
                   ,{"in [in]","prep.在...里(内,上);用...(表示)ad.进,入"}
                   ,{"incentive [in'sentiv]","n.刺激;动力;鼓励;诱因;动机"}
                   ,{"inch [intʃ]","n.英寸"}
                   ,{"incidence ['insidəns]","n.影响程度,影响范围;发生率"}
                   ,{"incident ['insidənt]","n.事件,事变"}
                   ,{"incidentally [,insi'dentəli]","ad.附带地,顺便提及"}
                   ,{"incline [in'klain]","v.(使)倾斜;(使)倾向于 n.斜坡,斜面"}
                   ,{"include [in'klu:d]","v.包括,包含,计入"}
                   ,{"inclusive [in'klu:siv]","a.(of)包括的,包含的;范围广的"}
                   ,{"income ['inkʌm]","n.收入,收益,所得"}
                   ,{"incorporate [in'kɔ:pəreit]","v.合并,纳入,结合 a.合并的"}
                   ,{"increase [in'kri:s,'inkri:s]","v./n.增加,增长,增进"}
                   ,{"increasingly [in'kri:siŋli]","ad.不断增加地,日益"}
                   ,{"incredible [in'kredəbl]","a.不可相信的,惊人的,不可思议的"}
                   ,{"incur [in'kə:]","v.招致,惹起,遭受"}
                   ,{"indeed [in'di:d]","ad.确实,实在;真正地,多么"}
                   ,{"independence [,indi'pendəns]","n.独立,自主"}
                   ,{"independent [,indi'pendənt]","a.(of)独立的,自主的"}
                   ,{"index ['indeks]","n.(pl.indexes,indices)索引 v.附以索引"}
                   ,{"indicate ['indikeit]","v.指出,指示;表明,暗示"}
                   ,{"indication [,indi'keiʃən]","n.指出,指示;表明,暗示"}
                   ,{"indicative [in'dikətiv]","a.(of)指示的,暗示的"}
                   ,{"indifferent [in'difərənt]","a.漠不关心的；无关紧要的；平凡的；中立的"}
                   ,{"indignant [in'diɡnənt]","a.愤慨的,愤慨不平的"}
                   ,{"indignation [,indiɡ'neiʃən]","n.愤怒,愤慨"}
                   ,{"indispensable [,indis'pensəbl]","a.(to,for)必不可少的,必需的"}
                   ,{"individual [,indi'vidjuəl,-dʒəl]","a.个人的,单独的;独特的 n.个人,个体"}
                   ,{"indoor ['indɔ:]","a.室内的,户内的"}
                   ,{"induce [in'dju:s,in'du:s]","v.引诱,劝使;引起,导致;感应"}
                   ,{"indulge [in'dʌldʒ]","v.放任,纵容,沉溺;使(自己)纵情享受"}
                   ,{"industrial [in'dʌstriəl]","a.工业的,产业的"}
                   ,{"industrialize [in'dʌtriəlaiz]","v.(industrialise)(使)工业化"}
                   ,{"industry ['indəstri]","n.工业,产业;勤劳,勤奋"}
                   ,{"inertia [i'nə:ʃiə]","n.不活动,惰性;惯性"}
                   ,{"inevitable [in'evitəbl]","a.不可避免的,必然发生的"}
                   ,{"infant ['infənt]","n.婴儿,幼儿"}
                   ,{"infect [in'fekt]","vt.传染,感染;影响(思想等)"}
                   ,{"infectious [in'fekʃəs]","a.传染的,传染性的,有感染力的"}
                   ,{"infer [in'fə:]","v.推论,推断"}
                   ,{"inference ['infərəns]","n.推论,推理,推断;结论"}
                   ,{"inferior [in'fiəriə]","a.下等的,下级的;劣等的,差的 n.下级,晚辈"}
                   ,{"infinite ['infinət]","a.无限的,无穷的 n.无限"}
                   ,{"inflation [in'fleiʃən]","n.通货膨胀"}
                   ,{"influence ['influəns]","n.(on)影响,感化;势力,权势 v.影响,感化"}
                   ,{"influential [,influ'enʃəl]","a.有影响的;有权势的"}
                   ,{"inform [in'fɔ:m]","v.(of,about)通知,告诉,报告;告发,告密"}
                   ,{"information [,infə'meiʃən]","n.通知,报告;情报,资料,消息;信息"}
                   ,{"infrared [,infrə'red]","a./n.红外线(的)"}
                   ,{"infrastructure ['infrə,strʌktʃə]","n.基础结构,基础设施"}
                   ,{"ingenious [in'dʒi:njəs]","a.机敏的;有独创性的;精致的;精巧制成的"}
                   ,{"ingredient [in'ɡri:diənt]","n.(混合物的)组成部分,配料;成份,要素"}
                   ,{"inhabit [in'hæbit]","vt.居住于,存在于;栖息于"}
                   ,{"inhabitant [in'hæbitənt]","n.居民,住户"}
                   ,{"inhale [in'heil]","v.吸入(气体等),吸(烟)"}
                   ,{"inherent [in'hiərənt]","a.固有的,内在的,天生的"}
                   ,{"inherit [in'herit]","vt.继承(金钱等),经遗传而得(性格、特征)"}
                   ,{"inhibit [in'hibit]","vt.抑制,约束"}
                   ,{"initial [i'niʃəl]","a.最初的,开头的;词首的 n.词首大写字母"}
                   ,{"initiate [i'niʃieit,i'niʃiət,-eit]","vt.开始,创始,发动;启蒙,使入门;引入"}
                   ,{"initiative [i'niʃiətiv,-ʃətiv]","a.创始的,起始的 n.第一步,创始,主动精神"}
                   ,{"inject [in'dʒekt]","vt.注射(药液等);注入"}
                   ,{"injure ['indʒə]","v.损害,损伤,伤害"}
                   ,{"injury ['indʒəri]","n.伤害,损害"}
                   ,{"ink [iŋk]","n.墨水,油墨"}
                   ,{"inland ['inlənd,-lænd]","a./ad.国内,内地,内陆"}
                   ,{"inlet ['inlet,-lit,in'let]","n.水湾,小湾;进口,入口"}
                   ,{"inn [in]","n.小旅馆,客栈"}
                   ,{"inner ['inə]","a.内部的,里面的;内心的"}
                   ,{"innocent ['inəsənt]","a.(of)清白的,无罪的;无害的;单纯的,无知的"}
                   ,{"innovation [,inəu'veiʃən]","n.改革,革新;新观念,新方法,新发明"}
                   ,{"innumerable [ɪ'njuːmərəbl]","a.无数的,数不清的"}
                   ,{"input ['input]","n./v.输入"}
                   ,{"inquiry [in'kwaiəri]","n.(enquiry)询问,打听,调查"}
                   ,{"insect ['insekt]","n.昆虫"}
                   ,{"insert [in'sə:t,'insə:t]","v.插入,嵌入;登载 n.插入物"}
                   ,{"inside [,in'said,'in-]","a.里面的 ad.在里面 n.内部 prep.在...里"}
                   ,{"insight ['insait]","n.洞察力,见识"}
                   ,{"insist [in'sist]","vi.(on)坚持要求,坚决主张,坚持"}
                   ,{"inspect [in'spekt]","vt.检查,调查,视察"}
                   ,{"inspiration [,inspə'reiʃən]","n.灵感;鼓舞,激励"}
                   ,{"inspire [in'spaiə]","vt.鼓舞,激起;使产生灵感"}
                   ,{"install [in'stɔ:l]","vt.(instal)安装,设置,安置;使就职,任命"}
                   ,{"installation [,instə'leiʃən]","n.安装,设置;装置,设备"}
                   ,{"installment [in'stɔ:lmənt]","n.(instalment)分期付款;(连载的)一期"}
                   ,{"instance ['instəns]","n.例子,事例,例证"}
                   ,{"instant ['instənt]","a.立即的;紧迫的;(食品)速溶的 n.瞬间,时刻"}
                   ,{"instantaneous [,instən'teinjəs]","a.瞬间的,即刻的"}
                   ,{"instead [in'sted]","ad.代替,顶替"}
                   ,{"instinct ['instiŋkt]","n.本能,直觉,天性"}
                   ,{"institute ['institjut,-tu:t]","n.学会,研究所;学院 v.设立,设置,制定"}
                   ,{"institution [,insti'tju:ʃən]","n.公共机构;协会;学校;研究所;制度;惯例"}
                   ,{"instruct [in'strʌkt]","v.教,教授;命令,指示"}
                   ,{"instruction [in'strʌkʃən]","n.教授;指导;(pl.)用法说明(书),操作指南"}
                   ,{"instrument ['instrumənt]","n.工具,仪器,器械;乐器"}
                   ,{"instrumental [,instru'mentəl]","a.仪器的;器械的;乐器的;起作用的;有帮助的"}
                   ,{"insulate ['insjuleit,'insə-]","vt.隔离,孤立;使绝缘,使绝热"}
                   ,{"insult [in'sʌlt]","vt./n.侮辱,凌辱"}
                   ,{"insurance [in'ʃuərəns]","n.保险,保险费,保险业"}
                   ,{"insure [in'ʃuə]","vt.保险,给...保险;保证"}
                   ,{"intact [in'tækt]","a.完整无缺的,未经触动的,未受损伤的"}
                   ,{"integral ['intiɡrəl]","a.构成整体所必需的;完整的"}
                   ,{"integrate ['intiɡreit]","v.(into,with)(使)成为一体,(使)结合在一起"}
                   ,{"integrity [in'teɡrəti]","n.正直,诚实;完整,完全"}
                   ,{"intellectual [,intə'lektjuəl]","n.知识分子 a.智力的,理智的,有理解力的"}
                   ,{"intelligence [in'telidʒəns]","n.智力,聪明;理解力;情报,消息,报导"}
                   ,{"intelligent [in'telidʒent]","a.聪明的,明智的,理智的"}
                   ,{"intelligible [in'telidʒəbl]","a.可理解的,明白易懂的,清楚的"}
                   ,{"intend [in'tend]","vt.想要,打算,企图"}
                   ,{"intense [in'tens]","a.强烈的,剧烈的;热烈的,热情的"}
                   ,{"intensity [in'tensəti]","n.强烈,剧烈;强度"}
                   ,{"intensive [in'tensiv]","a.加强的,集中的,深入细致的,精耕细作的"}
                   ,{"intention [in'tenʃən]","n.意图,意向,目的"}
                   ,{"interact ['intərækt]","v.互相作用,互相影响"}
                   ,{"intercourse ['intəkɔ:s]","n.交流,交往,交际,性交"}
                   ,{"interest ['intrist,'intər-]","n.(in)兴趣,重要性;利益 v.(in)使发生兴趣"}
                   ,{"interesting ['intristiŋ,'intər-]","a.有趣的,引人入胜的"}
                   ,{"interface ['intəfeis]","n.接合部位,分界面 v.(使)互相联系"}
                   ,{"interfere [,intə'fiə]","v.(in)干涉,干预;(with)妨碍,打扰"}
                   ,{"interference [,intə'fiərəns]","n.(in)干涉,干预;(with)妨碍,打扰"}
                   ,{"interim ['intərim]","a.中间的,暂时的,临时的 n.过渡时期,暂定"}
                   ,{"interior [in'tiəriə]","a.内部的,里面的 n.内部,内地"}
                   ,{"intermediate [,intə'mi:djət,-dieit]","a.中间的,居间的;中级的 n.中间体,媒介物"}
                   ,{"intermittent [,intə'mitənt]","a.间歇的,断断续续的"}
                   ,{"internal [in'tə:nəl]","a.内部的,内的;国内的,内政的"}
                   ,{"international [,intə'næʃənəl]","a.国际的,世界(性)的,跨国的"}
                   ,{"internet ['intənet]","n.[the~]国际互联网,因特网"}
                   ,{"interpret [in'tə:prit]","vt.解释,说明;口译"}
                   ,{"interrupt [ˌɪntə'rʌpt]","v.中断,遮断,阻碍;打断(话),打扰 n.[计算机]中断"}
                   ,{"intersection [,intə'sekʃən]","n.相交,交叉;道路交叉口,十字路口"}
                   ,{"interval ['intəvəl]","n.间隔,间歇;(幕间或工间)休息"}
                   ,{"intervene [,intə'vi:n]","v.(in)干涉,干预;插入,介入"}
                   ,{"interview ['intəvju:]","v./n.接见,会见;采访;面试"}
                   ,{"intimate ['intimət]","a.亲密的,密切的 n.熟友,熟人"}
                   ,{"intimidate [in'timideit]","vt.胁迫,威胁(某人做某事)"}
                   ,{"into ['intu:,-tu,-tə]","prep.到...里面,进入;成为(表示变化)"}
                   ,{"intricate ['intrikət]","a.复杂的,错综的,难以理解的"}
                   ,{"intrigue [in'tri:ɡ,'in-]","n.阴谋 v.密谋,私通;激起...的兴趣;诡计取得"}
                   ,{"intrinsic [in'trinsik,-kəl]","a.(指价值、性质)固有的,本质的,内在的"}
                   ,{"introduce [,intrə'dju:s]","vt.介绍;引进,传入;提出(议案等)"}
                   ,{"introduction [,intrə'dʌkʃən]","n.(to)介绍;传入,引进;导言,导论,绪论"}
                   ,{"intrude [in'tru:d]","vi.闯入,侵入 vt.把(思想等)强加于人;强挤入"}
                   ,{"intuition [,intju:'iʃən]","n.直觉,直观;凭直觉而知的事物"}
                   ,{"invade [in'veid]","vt.入侵,侵略,侵袭,侵扰"}
                   ,{"invalid ['invəli:d]","n.病人,伤残人 a.有病的,伤残的;无效的"}
                   ,{"invaluable [in'væljuəbl]","a.非常宝贵的,无价的"}
                   ,{"invariably [ɪn'veəriəbli]","ad.不变地,永恒地,总是"}
                   ,{"invasion [in'veiʒən]","n.入侵,侵略,侵犯"}
                   ,{"invent [in'vent]","v.发明,创造;捏造,虚构"}
                   ,{"invention [in'venʃən]","n.发明,创造,发明物"}
                   ,{"inventory ['invəntəri,-tɔ:ri]","n.详细目录,存货,财产清册,总量"}
                   ,{"inverse ['invə:s,in'v-,in'və:s]","a.相反的,倒转的,反转的 n.相反之物 v.倒转"}
                   ,{"invert [in'və:t,'invə:t]","v.倒置,倒转,颠倒"}
                   ,{"invest [in'vest]","vt.投资,投入(精力、时间等)"}
                   ,{"investigate [in'vestiɡeit]","v.调查,调查研究"}
                   ,{"investment [in'vestmənt]","n.投资,投资额"}
                   ,{"invisible [in'vizəbl]","a.看不见的,无形的"}
                   ,{"invitation [,invi'teiʃən]","n.邀请,招待;请柬"}
                   ,{"invite [in'vait,'invait]","vt.邀请,招待"}
                   ,{"involve [in'vɔlv]","v.卷入,陷入,连累;包含,含有,涉及"}
                   ,{"inward ['inwəd]","ad.向内,在内 a.向内的,在内的,里面的"}
                   ,{"iron ['aiən]","n.铁,铁制品,烙铁,熨斗 v.熨(衣),熨平"}
                   ,{"irony ['aiərəni]","n.反话, 讽刺, 讽刺之事"}
                   ,{"irrespective [,iri'spektiv]","a.不顾的,不考虑的,无关的"}
                   ,{"irrigate ['iriɡeit]","vt.灌溉,修水利 vi.进行灌溉"}
                   ,{"irritate ['iriteit]","vt.激怒,恼火,使急躁"}
                   ,{"island ['ailənd]","n.岛,岛屿;(道路上的)交通安全岛"}
                   ,{"isle [ail]","n.小岛(用于诗歌中)"}
                   ,{"isolate ['aisəleit,-lit]","vt.隔离,孤立"}
                   ,{"issue ['iʃju:,'isju:]","n.问题,争端,发行(物),期号 vt.发行,流出"}
                   ,{"it [it]","pron.它;[作无人称动词的主语]"}
                   ,{"item ['aitəm]","n.条(款),项目;一则(新闻),(戏剧的)节目"}
                   ,{"its [its]","pron.[it 的所有格]它的"}
                   ,{"itself [it'self]","pron.(it 的反身代词)它自己,它本身"}
                   ,{"jacket ['dʒækit]","n.短上衣,茄克衫"}
                   ,{"jam [dʒæm]","n.阻塞,轧住;果酱 v.(使)阻塞,(使)轧住不动"}
                   ,{"January ['dʒænjuəri]","n.一月"}
                   ,{"jar [dʒɑ:]","n.罐坛,广口瓶"}
                   ,{"jargon ['dʒɑ:ɡən,-ɡɔn]","n.行话"}
                   ,{"jaw [dʒɔ:]","n.颌,颚"}
                   ,{"jazz [dʒæz]","n.爵士乐"}
                   ,{"jealous ['dʒeləs]","a.(of)妒忌的;猜疑的,警惕的"}
                   ,{"jeans [dʒiːnz]","n.牛仔裤(又称 blue jeans dungarees等"}
                   ,{"jet [dʒet]","n.喷气发动机,喷气式飞机;喷口 v.喷出,喷射"}
                   ,{"jewel ['dʒu:əl]","n.宝石,宝石饰物"}
                   ,{"jewelry ['dʒu:əlri]","n.(jewllery)(总称)珠宝"}
                   ,{"job [dʒɔb]","n.工作,职位;零活,一件工作;任务,职责"}
                   ,{"jog [dʒɔɡ]","v.慢跑"}
                   ,{"join [dʒɔin]","v.参加,加入;联合,连接;和„在一起"}
                   ,{"joint [dʒɔint]","n.接合处,接头;关节 a.联合的,共同的,连接的"}
                   ,{"joke [dʒəuk]","n.笑话,玩笑 v.说笑话,开玩笑"}
                   ,{"jolly ['dʒɔli]","a.欢乐的,高兴的"}
                   ,{"journal ['dʒə:nəl]","n.定期刊物,杂志,日报;日志,日记"}
                   ,{"journalist ['dʒə:nəlist]","n.记者,新闻工作者"}
                   ,{"journey ['dʒə:ni]","n.旅行,旅程 v.旅行"}
                   ,{"joy [dʒɔi]","n.欢乐,喜悦;乐事,乐趣"}
                   ,{"judge [dʒʌdʒ]","n.法官;裁判员;鉴定人 vt.审判;评论,裁判"}
                   ,{"judgement ['dʒʌdʒmənt]","n.(judgment)审判,判决;判断(力);看法,意见"}
                   ,{"judicial [dʒu:'diʃəl]","a.司法的,法庭的,审判的;明断的,公正的"}
                   ,{"jug [dʒʌɡ]","n.(有柄,小口,可盛水等的)大壶,罐,盂"}
                   ,{"juice [dʒu:s]","n.(水果等)汁,液"}
                   ,{"July [dʒu'laɪ]","n.七月"}
                   ,{"jump [dʒʌmp]","v./n.跳跃,跳动,跳过;暴涨,猛增"}
                   ,{"junction ['dʒʌŋkʃən]","n.连接,接合,交叉点,枢纽站,接头,中继线"}
                   ,{"June [dʒuːn]","n.六月"}
                   ,{"jungle ['dʒʌŋɡl]","n.丛林,生死地带"}
                   ,{"junior ['dʒu:njə]","a./n.年少的/者,三年级的/学生,下级(的)"}
                   ,{"junk [dʒʌŋk]","n.废物,旧货;舢板"}
                   ,{"jury ['dʒuəri]","n.陪审团;全体评审员"}
                   ,{"just [dʒʌst]","ad.正好地;刚才;只不过 a.公正的,公平的"}
                   ,{"justice ['dʒʌstis]","n.公正,公平;审判,司法"}
                   ,{"justify ['dʒʌstifai]","v.证明...正当(或有理、正确),为...辩护"}
                   ,{"juvenile ['dʒu:vənail,-nil]","n.青少年,少年读物 a.青少年的,幼稚的"}
                   ,{"keen [ki:n]","a.锋利的;敏锐的;敏捷的;(on)热心的,渴望的"}
                   ,{"keep [ki:p]","v.保持,保存,遵守,经营,看守,拘留,维持"}
                   ,{"kettle ['ketl]","n.水壶"}
                   ,{"key [ki:]","n.钥匙;答案;关键;键 a.主要的,关键的"}
                   ,{"keyboard ['ki:bɔ:d]","n.键盘 vt.用键盘输入(信息)"}
                   ,{"kick [kik]","n./v.踢"}
                   ,{"kid [kid]","n.小孩,儿童 v.戏弄,取笑"}
                   ,{"kidnap ['kidnæp]","vt.诱拐;绑架,劫持"}
                   ,{"kidney ['kidni]","n.肾,肾脏"}
                   ,{"kill [kil]","vt.杀死,消灭;破坏,毁灭;消磨(时间)"}
                   ,{"kilo ['ki:ləu,'ki-]","n.(kilogram/kilogramme)千克"}
                   ,{"kilometre ['kɪləmiːtə(r)]","n.(kilometer) 公里,千米(略作 km)"}
                   ,{"kin [kin]","n.家族,亲属,血缘关系 a.亲属关系的,同类的"}
                   ,{"kind [kaind]","a.仁慈的,友好的,亲切的,和蔼的 n.种类"}
                   ,{"kindergarten ['kɪndəɡɑːtn]","n.幼儿园"}
                   ,{"kindness ['kaindnis]","n.仁慈,亲切;好意;友好行为"}
                   ,{"king [kiŋ]","n.君主,国王"}
                   ,{"kingdom ['kiŋdəm]","n.王国,领域"}
                   ,{"kiss [kis]","n./v.吻,接吻"}
                   ,{"kit [kit]","n.成套工具,用具包,工具箱"}
                   ,{"kitchen ['kitʃin]","n.厨房"}
                   ,{"kite [kait]","n.风筝"}
                   ,{"knee [ni:]","n.膝,膝盖"}
                   ,{"kneel [ni:l]","v.跪,下跪"}
                   ,{"knife [naif]","n.刀,餐刀 v.用刀切,用匕首刺"}
                   ,{"knit [nit]","v.编织,编结;接合,粘合"}
                   ,{"knob [nɔb]","n.门把,(球形)把手,旋纽"}
                   ,{"knock [nɔk]","v.敲,敲打,碰撞 n.敲,击"}
                   ,{"knot [nɔt]","n.(绳)结;(树)节;节(=海里/小时) v.打结"}
                   ,{"know [nəu]","vt.知道,了解;认识;识别 vi.知道,了解"}
                   ,{"knowledge ['nɔlidʒ]","n.知识,学识;知道,了解"}
                   ,{"lab [læb]","n.(laboratory)实验室"}
                   ,{"label ['leibl]","n.标签 v.把...称为;用标签于;用标签标明"}
                   ,{"labor ['leɪbə(r)]","n.(labour)工作,劳动;劳力 v.劳动,苦干"}
                   ,{"lace [leis]","n.花边;带子,鞋带 v.系带,扎带"}
                   ,{"lack [læk]","n./v.缺乏,不足"}
                   ,{"lad [læd]","n.男孩,小伙子"}
                   ,{"ladder ['lædə]","n.梯子,阶梯"}
                   ,{"lady ['leidi]","n.女士,夫人"}
                   ,{"lag [læɡ]","v./n.落后,滞后 vt.用隔热材料覆盖(锅炉等)"}
                   ,{"lake [leik]","n.湖泊,湖水"}
                   ,{"lamb [læm]","n.羔羊,小羊;羔羊肉"}
                   ,{"lame [leim]","a.跛的,(辩解、论据等)无说服力的"}
                   ,{"lamp [læmp]","n.灯"}
                   ,{"land [lænd]","n.陆地,土地,国家 v.(使)靠岸(登陆,降落)"}
                   ,{"landlady ['lænd,leidi]","n.女房东,女地主"}
                   ,{"landlord ['lændlɔ:d]","n.房东,地主"}
                   ,{"lane [lein]","n.小路,小巷,行车道"}
                   ,{"language ['læŋɡwidʒ]","n.语言,术语,(运用语言的)方式、风格"}
                   ,{"lantern ['læntən]","n.灯,灯笼"}
                   ,{"lap [læp]","n.大腿,(跑道的)一圈,一段路程,工作阶段"}
                   ,{"lapse [læps]","n.失误,流逝,丧失,下降 v.失效,偏离,流逝"}
                   ,{"laptop ['læptɔp]","n.膝上型电脑"}
                   ,{"large [lɑ:dʒ]","a.大的,广大的,大规模的"}
                   ,{"largely ['lɑ:dʒli]","ad.主要地,基本上;大量地,大规模地"}
                   ,{"laser ['leizə]","n.激光"}
                   ,{"lash [læʃ]","v.鞭打,摆动,捆扎 n.鞭子,鞭打,睫毛,讽刺"}
                   ,{"last [lɑ:st,læst]","a.最后的,刚过去的 ad.最后 n.最后 v.持续"}
                   ,{"late [leit]","a.迟的,晚的,晚期的;已故的 ad.迟,晚"}
                   ,{"lately ['leitli]","ad.最近,不久前"}
                   ,{"latent ['leitənt]","a.潜在的,潜伏的,不易察觉的"}
                   ,{"later ['leitə]","ad.后来,过后"}
                   ,{"lateral ['lætərəl]","n.侧面的,旁边的"}
                   ,{"Latin ['lætɪn]","a.拉丁的,拉丁文的 n.拉丁语"}
                   ,{"latitude ['lætitju:d]","n.纬度,行动或言论的自由(范围),(pl.)地区"}
                   ,{"latter ['lætə]","a.后者的;后一半的,接近终了的 n.后者"}
                   ,{"laugh [lɑ:f,læf]","v.笑;(on)讥笑 n.笑,笑声"}
                   ,{"laughter ['lɑ:ftə,'læf-]","n.笑,笑声"}
                   ,{"launch [lɔ:ntʃ,lɑ:ntʃ]","v.发射;使(船)下水,发动,开展 n.发射,下水"}
                   ,{"laundry ['lɔ:ndri,'lɑ:n-]","n.洗衣房(店);待洗衣物,所洗衣物"}
                   ,{"lavatory ['lævətəri,-tɔ:ri]","n.厕所,盥洗室"}
                   ,{"law [lɔ:]","n.法律,法规,法学,规律,定律"}
                   ,{"lawn [lɔ:n]","n.草地,草坪"}
                   ,{"lawyer ['lɔ:jə]","n.律师"}
                   ,{"lay [lei]","v.放,搁;下(蛋);铺设,敷设;设置,布置"}
                   ,{"layer ['leiə]","n.层,层次;铺设者"}
                   ,{"layman ['leimən]","n.外行"}
                   ,{"layoff ['leiɔf]","n.临时解雇,操作停止,活动停止期间,失业期"}
                   ,{"layout ['leɪaʊt]","n.安排,布局,设计;规划图,布局图"}
                   ,{"lazy ['leizi]","a.懒惰的,懒散的"}
                   ,{"lead [li:d]","v.领导;领先;通向,导致 n.带领,引导;铅"}
                   ,{"leadership ['li:dəʃip]","n.领导阶层,领导能力"}
                   ,{"leading ['liːdɪŋ]","a.领导的,指导的;第一位的;最主要的"}
                   ,{"leaf [li:f]","n.叶子;(书刊的)一页,一张;金属薄片"}
                   ,{"leaflet ['li:flit]","n.小叶,嫩叶;传单,活页"}
                   ,{"league [li:ɡ]","n.同盟,联盟;联合会,社团"}
                   ,{"leak [li:k]","v.漏,泄漏 n.漏洞,漏隙;泄漏,漏出"}
                   ,{"lean [li:n]","v.倾斜,屈身;倚,靠,依赖 a.瘦的,无脂肪的"}
                   ,{"leap [li:p]","v.跳,跳跃 n.跳跃,飞跃"}
                   ,{"learn [lə:n]","v.学习,学,学会;(of,about)听到,获悉"}
                   ,{"learned ['lə:nid]","a.博学的,有学问的"}
                   ,{"learning ['lə:niŋ]","n.知识,学问;学习"}
                   ,{"lease [li:s]","vt.出租,租用 n.租借,租期,租赁物"}
                   ,{"least [li:st]","a.最小的;最少的 ad.最小;最少"}
                   ,{"leather ['leðə]","n.皮革,皮革制品"}
                   ,{"leave [li:v]","v.离开;留下,忘带;让,听任;交付 n.许可;假期"}
                   ,{"lecture ['lektʃə]","n./v.演讲,讲课"}
                   ,{"left [left]","n.左面,左方 a.左边的,左面的;在左方的"}
                   ,{"leg [leɡ]","n.腿,腿部;支柱;(旅程的)一段,一站"}
                   ,{"legacy ['leɡəsi]","n.遗产,遗赠;先人(或过去)留下的东西"}
                   ,{"legal ['li:ɡəl]","a.法律的,法定的;合法的,正当的"}
                   ,{"legend ['ledʒənd]","n.传说,传奇"}
                   ,{"legislation [,ledʒis'leiʃən]","n.法律(规);立法,法律的制定(或通过)"}
                   ,{"legitimate [li'dʒitimət]","a.合法的;合理的,合乎逻辑的 vt.使合法"}
                   ,{"leisure ['leʒə]","n.空闲,闲暇;悠闲,安逸"}
                   ,{"lemon ['lemən]","n.柠檬"}
                   ,{"lend [lend]","vt.借给,贷(款)"}
                   ,{"length [leŋθ,leŋkθ]","n.长,长度;一段,一节,程度,范围"}
                   ,{"lens [lenz]","n.透镜,镜头"}
                   ,{"less [les]","a./ad.更少的(地),更小的(地)"}
                   ,{"lesson ['lesən]","n.(功)课;[pl.]课程;教训"}
                   ,{"lest [lest]","conj.惟恐,免得"}
                   ,{"let [let]","v.让,允许,听任;设,假设;出租,租给"}
                   ,{"letter ['letə]","n.信,函件;字母,文字"}
                   ,{"level ['levəl]","n.水平,水准,等级 v.弄平,铺平 a.水平的"}
                   ,{"lever ['li:və,'le-]","n.杆,杠杆,手段,途径,工具"}
                   ,{"levy ['levi]","n.征收,征税,征兵 v.征收,征集,征用"}
                   ,{"liability [,laiə'biləti]","n.责任,义务;(pl.)债务"}
                   ,{"liable ['laiəbl]","a.有...倾向的;可能遭受...的;有责任的"}
                   ,{"liberal ['libərəl]","a.慷慨的,大方的;富足的;自由的,思想开放的"}
                   ,{"liberate ['libəreit]","vt.解放,释放"}
                   ,{"liberty ['libəti]","n.自由,自由权;特权"}
                   ,{"librarian [lai'brεəriən]","n.图书管理员"}
                   ,{"library ['laibrəri]","n.图书馆;藏书室;藏书,丛书,文库"}
                   ,{"license ['laisəns]","n.(licence)许可证,执照 v.准许,认可"}
                   ,{"lick [lik]","vt.舔;(火焰或浪)掠过;打败 n.舔;少量"}
                   ,{"lid [lid]","n.盖"}
                   ,{"lie [lai]","vi.躺,平放;处于;位于 v.说谎 n.谎话"}
                   ,{"life [laif]","n.生命,生存;一生,寿命;生活;生物"}
                   ,{"lifetime ['laiftaim]","n.一生,终生"}
                   ,{"lift [lift]","v.升起,举起,消散 n.电梯,上升,免费搭车"}
                   ,{"light ['lait]","n.光;灯 v.点燃;照亮 a.轻(快);淡;明亮"}
                   ,{"lightning ['laitniŋ]","n.闪电 a.闪电般的,快速的"}
                   ,{"like [laik]","v.喜欢 prep.像;比如 a.相象的 n.像...一样"}
                   ,{"likelihood ['laiklihud]","n.可能性"}
                   ,{"likely ['laikli]","a.很可能的,有希望的 ad.大概,多半"}
                   ,{"likewise ['laikwaiz]","ad.同样地,照样地;又,也,而且"}
                   ,{"limb [lim]","n.肢,翼,大树枝"}
                   ,{"limit ['limit]","n.界限,限度,范围 v.(to)限制,限定"}
                   ,{"limitation [,limi'teiʃən]","n.限制,局限性"}
                   ,{"limited ['limitid]","a.有限的,被限制的"}
                   ,{"limp [limp]","a.柔软的,易曲的 v./n.蹒跚,跛行"}
                   ,{"line [lain]","n.线;路线,航线;排;线路;界线 v.排队;加衬"}
                   ,{"linear ['liniə]","a.线的,直线的,线状的;长度的;线性的"}
                   ,{"linen ['linin]","n.亚麻布,亚麻布制品"}
                   ,{"liner ['lainə]","n.班机,定期轮船,邮船"}
                   ,{"linger ['liŋɡə]","v.逗留,徘徊,拖延,留恋,浪费光阴,苟延残喘"}
                   ,{"linguistic [liŋ'ɡwistik,-kəl]","a.语言的,语言学的"}
                   ,{"link [liŋk]","v.连接,联系 n.环节,链环"}
                   ,{"lion ['laiən]","n.狮子"}
                   ,{"lip [lip]","n.嘴唇"}
                   ,{"liquid ['likwid]","n.液体 a.液体的,液态的"}
                   ,{"liquor ['likə]","n.酒;溶液,液剂"}
                   ,{"list [list]","n.表,目录,名单 v.把...编列成表,列入表内"}
                   ,{"listen ['lisən]","vi.倾听(与介词 to 并用,方可置宾语)"}
                   ,{"literacy ['litərəsi]","n.有文化,有教养,有读写能力"}
                   ,{"literally ['litərəli]","ad.照字面意义,逐字地;确实"}
                   ,{"literary ['litərəri]","a.文学上的,文学的;精通文学的,从事写作的"}
                   ,{"literature ['litərətʃə]","n.文学,文学作品,文献,图书资料,印刷品"}
                   ,{"litre ['li:tə]","n.(liter)升;公升(容量单位)"}
                   ,{"litter ['litə]","n.垃圾,(杂乱的)废物 v.使杂乱,乱丢"}
                   ,{"little ['litl]","a.小,幼小;不多的 ad./n.不多,几乎没有"}
                   ,{"live [liv]","v.活着,生活,居住 a.活的,生动的,直播的"}
                   ,{"lively ['laivli]","a.活泼的,活跃的;栩栩如生的,真实的"}
                   ,{"liver ['lɪvə(r)]","n.肝,肝脏"}
                   ,{"living ['liviŋ]","a.活的,有生命的,天然的,逼真的 n.生活,生计"}
                   ,{"living-room ['lɪvɪŋ'ruːm]","n.起居室"}
                   ,{"load [ləud]","v.装(货),装载 n.装载(量),负荷(量);(一)担"}
                   ,{"loaf [ləuf]","n.一个面包"}
                   ,{"loan [ləun]","n.贷款;出借,借出 v.借出"}
                   ,{"lobby ['lɔbi]","n.门廊,门厅,(会议)休息厅"}
                   ,{"local ['ləukəl]","a.地方的,当地的;局部的"}
                   ,{"locality [ləu'kæləti]","n.位置,地点"}
                   ,{"locate [ləu'keit,'ləu]","v.查出,探出,查找„地点,使„坐落于,位于"}
                   ,{"location [ləu'keiʃən]","n.位置,场所,定位,测位"}
                   ,{"lock [lɔk]","n.锁 v.锁,锁上"}
                   ,{"locker ['lɔkə]","n.更衣箱"}
                   ,{"locomotive ['ləukə,məutiv]","n.机车,火车头 a.运动的,移动的,运载的"}
                   ,{"lodge [lɔdʒ]","v.临时住宿,寄宿,寄存,容纳 n.传达室,小旅馆"}
                   ,{"lofty ['lɔfti,'lɔ:f-]","a.崇高的,高尚的;高傲的;极高的"}
                   ,{"log [lɔɡ,lɔ:ɡ]","n.原木,圆木;(航海、飞行)日志"}
                   ,{"logic ['lɔdʒik]","n.逻辑,逻辑学"}
                   ,{"logical ['lɔdʒikəl]","a.逻辑的,符合逻辑的"}
                   ,{"lonely ['ləunli]","a.孤独的,寂寞的;荒凉的,人迹稀少的"}
                   ,{"long [lɔŋ,lɔ:ŋ]","a.长的,长时间的,长期的 ad.长久,长期地"}
                   ,{"longitude ['lɔndʒitju:d,-tu:d]","n.经度"}
                   ,{"look [luk]","vi./n.看,注视 v.好像,显得 n.外表,脸色"}
                   ,{"loom [lu:m]","n.织布机,织机 v.隐现,(危险、忧虑等)迫近"}
                   ,{"loop [lu:p]","n.圈,环"}
                   ,{"loose [lu:s]","a.(宽)松的;不精确的;自由的,散漫的"}
                   ,{"loosen ['lu:sən]","v.解开,放松"}
                   ,{"lord [lɔ:d]","n.(Lord)上帝,主;主人,长官,君主,贵族"}
                   ,{"lorry ['lɔ:ri,'lɔ:-]","n.卡车,运货汽车"}
                   ,{"lose [lu:z]","v.丢失,迷路,输掉,亏本,失败,走慢,使沉湎于"}
                   ,{"loss [lɔs,lɔ:s]","n.丧失,遗失;损失,损耗,亏损;失败"}
                   ,{"lot [lɔt]","n.许多,大量;签,抽签;命运;场地"}
                   ,{"lottery ['lɔtəri]","n.抽彩;碰运气的事,难于算计的事"}
                   ,{"loud [laud]","a.大声的,响亮的;吵闹的,喧嚣的"}
                   ,{"loudspeaker ['laud'spi:kə]","n.扬声器,扩音器"}
                   ,{"lounge [laundʒ]","n.休息室,起居室,客厅"}
                   ,{"love [lʌv]","n.爱,爱情,喜欢 vt.爱,热爱;爱好,喜欢"}
                   ,{"lovely ['lʌvli]","a.可爱的,好看的;令人愉快的,美好的"}
                   ,{"lover ['lʌvə]","n.爱好者;(pl.)情侣"}
                   ,{"low [ləu]","a.低,矮;低级的,下层的,卑贱的;低声的"}
                   ,{"lower ['ləʊə(r)]","a.较低的,下级的,下游的 v.降下,放低"}
                   ,{"loyal ['lɔiəl]","a.(to)忠诚的,忠贞的"}
                   ,{"loyalty ['lɔiəlti]","n.忠诚,忠心"}
                   ,{"lubricate ['lubrikeit]","v.润滑,加润滑油,行贿,收买"}
                   ,{"luck [lʌk]","n.运气;好运,侥幸"}
                   ,{"lucky ['lʌki]","a.幸运的,侥幸的"}
                   ,{"luggage ['lʌɡidʒ]","n.行李,皮箱"}
                   ,{"lumber ['lʌmbə]","n.木材,木料"}
                   ,{"lump [lʌmp]","n.团,块 v.(使)成团,(使)成块"}
                   ,{"lunar ['lju:nə]","a.月亮的"}
                   ,{"lunch [lʌntʃ]","n.午餐,(美)便餐"}
                   ,{"lung [lʌŋ]","n.肺"}
                   ,{"lure [ljuə]","n.吸引力,魅力,诱惑物 vt.引诱,吸引"}
                   ,{"luxury ['lʌkʃəri,'lʌɡʒəri]","n.奢侈,华贵;奢侈品 a.奢华的,豪华的"}
                   ,{"machine [mə'ʃi:n]","n.机器,机械 v.用机器加工"}
                   ,{"machinery [mə'ʃi:nəri]","n.(总称)机器,机械"}
                   ,{"mad [mæd]","a.发疯的;狂热的,着迷的;恼火的,生气的"}
                   ,{"madame [mɑ:'dɑ:m,'mædəm]","n.(madam)夫人,太太,女士"}
                   ,{"magazine [,mæɡə'zi:n]","n.杂志,期刊"}
                   ,{"magic ['mædʒik]","n.魔术,魔(魅)力,巫术 a.有魔力的,魔术的"}
                   ,{"magistrate ['mædʒistreit]","n.地方行政官,地方法官,治安官"}
                   ,{"magnet ['mæɡnit]","n.磁体,磁铁"}
                   ,{"magnetic [mæɡ'netik]","a.磁的,有磁性的;有吸引力的"}
                   ,{"magnificent [mæɡ'nifisənt]","a.华丽的,高尚的,宏伟的"}
                   ,{"magnify ['mæɡnifai]","vt.放大,扩大,夸大,夸张"}
                   ,{"magnitude ['mæɡnitju:d]","n.大小,数量;巨大,广大"}
                   ,{"maid [meid]","n.少女,处女,女仆"}
                   ,{"maiden ['meidən]","n.少女,处女 a.未婚的,纯洁的,无经验的"}
                   ,{"mail [meil]","n.邮件 v.邮寄"}
                   ,{"main [mein]","a.主要的,总的 n.总管道;干线"}
                   ,{"mainland ['meinlənd]","n.大陆,本土"}
                   ,{"maintain [mein'tein]","v.维修,保养,维持,供养,坚持,主张,支持"}
                   ,{"maintenance ['meintənəns]","n.维修,保养,维持,保持,生活费用"}
                   ,{"majesty ['mædʒisti]","n.雄伟,壮丽,庄严,威严;最高权威,王权"}
                   ,{"major ['meidʒə]","a.主要的 n.成年人,专业学生,主修课程 v.主修"}
                   ,{"majority [mə'dʒɔriti]","n.多数,大多数,成年,法定年龄"}
                   ,{"make [meik]","n.(产品)来源,制法 vt.制造,做成,准备"}
                   ,{"male [meil]","n./a.男性(的),雄性(的)"}
                   ,{"malignant [mə'liɡnənt]","a.恶性的,致命的;恶意的,恶毒的"}
                   ,{"mammal ['mæməl]","n.哺乳动物"}
                   ,{"man [mæn]","n.(pl.men)人;人类(单数,不加冠词);男人"}
                   ,{"manage ['mænidʒ]","v.经营,管理,处理;设法,对付;操纵,运用"}
                   ,{"management ['mænidʒmənt]","n.经营,管理;处理,操纵;管理部门"}
                   ,{"manager ['mænidʒə]","n.经理,管理人"}
                   ,{"maneuver [mə'nu:və]","n.(manoeuvre)机动;运用,操作; v.机动"}
                   ,{"manifest ['mænifest]","v.表明,证明,显示 a.明白的,明了的"}
                   ,{"manipulate [mə'nipjuleit]","vt.(熟练地)使用,操作;(巧妙地)处理"}
                   ,{"mankind [,mæn'kaind]","n.人类"}
                   ,{"manner ['mænə]","n.方式;举止;(pl.)风度,礼貌;规矩;风俗"}
                   ,{"manual ['mænjuəl]","a.手的,手工做的,体力的 n.手册,指南"}
                   ,{"manufacture [,mænju'fæktʃə]","v.制造,加工 n.制造,制造业;产品"}
                   ,{"manuscript ['mænjuskript]","n.手稿,原稿"}
                   ,{"many ['meni]","a.许多的,多的 pron.许多人或物,许多"}
                   ,{"map [mæp]","n.地图,图 vt.在地图上标示出,绘制地图"}
                   ,{"marble ['mɑ:bl]","n.大理石,云石"}
                   ,{"march [mɑ:tʃ]","v.(使)行军,(使)行进 n.行军,行程"}
                   ,{"March [mɑ:tʃ]","n.三月(略作 Mar.)"}
                   ,{"margin ['mɑ:dʒin]","n.页边空白;边缘;余地;幅度"}
                   ,{"marginal ['mɑ:dʒinəl]","a.记在页边的,旁注的;(意识)边缘的"}
                   ,{"marine [mə'ri:n]","a.海的,海生的;船舶的,航海的"}
                   ,{"marital ['mæritəl]","a.婚姻的,夫妻之间的"}
                   ,{"mark [mɑ:k]","n.痕迹;记号;分数 v.标记,打分,使有特色"}
                   ,{"market ['mɑ:kit]","n.集市,市场;销路,需求(量) v.销售"}
                   ,{"marriage ['mæridʒ]","n.结婚,婚姻;结婚仪式"}
                   ,{"married ['mærid]","a.已婚的,夫妇的;(to)与...结婚的"}
                   ,{"marry ['mæri]","v.结婚,嫁,娶"}
                   ,{"marvelous ['mɑːvɪləs]","a.(marvellous)惊人的,奇迹般的,妙极的"}
                   ,{"Marxist ['mɑːksɪst]","a.马克思主义的 n.马克思主义者"}
                   ,{"masculine ['mæskjulin]","a.男性的,似男性的;[语法]阳性的"}
                   ,{"mask [mɑ:sk,mæsk]","n.面具,面罩;假面具,伪装 v. 掩饰,化装"}
                   ,{"mass [mæs]","n.大量,众多;团,块;(pl.)群众,民众;质量"}
                   ,{"massacre ['mæsəkə]","vt.残杀,集体屠杀 n.残杀,大屠杀"}
                   ,{"massive ['mæsiv]","a.大而重的,厚实的,粗大的;大规模的,大量的"}
                   ,{"master ['mɑ:stə,'mæstə]","n.男主人;师傅;硕士 v.精通,控制 a.主要的"}
                   ,{"masterpiece ['mɑ:stəpi:s,'mæs-]","n.杰作,名著"}
                   ,{"mat [mæt]","n.席子,垫子"}
                   ,{"match [mætʃ]","n.火柴;比赛,竞赛;对手,配偶 v.匹配,相称"}
                   ,{"mate [meit]","n.伙伴,同事,同伴,配偶 v. 结伴,配对,交配"}
                   ,{"material [mə'tiəriəl]","n.材料,原料,资料 a.物质的,肉体的,实质性的"}
                   ,{"mathematical [,mæθi'mætikəl]","a.数学的;数学上的"}
                   ,{"maths [mæθs]","n.(mathematics/math)数学"}
                   ,{"matter ['mætə]","n.物质,物体;毛病,麻烦;事情 v.有关系,要紧"}
                   ,{"mature [mə'tjuə]","a.成熟的,熟的;成年人的 v.(使)成熟"}
                   ,{"maximum ['mæksiməm]","n.最大值,极限 a.最大的,最高的"}
                   ,{"may [mei]","aux.v.可能,也许;可以,被允许;祝,愿"}
                   ,{"May [mei]","n.五月"}
                   ,{"maybe ['meibi]","adv.可能;大概;也许"}
                   ,{"mayor ['mεə]","n.市长"}
                   ,{"me [mi:,弱 mi]","pron.[I 的宾格]我"}
                   ,{"meadow ['medəu]","n.草地,牧场"}
                   ,{"meal [mi:l]","n.膳食,一餐"}
                   ,{"mean [mi:n]","v.表示...的意思 a.卑鄙的;平均的 n.平均值"}
                   ,{"meaning ['mi:niŋ]","n.意思,意义,含义;重要性,价值"}
                   ,{"means [mi:nz]","n.方法,手段"}
                   ,{"meantime ['mi:n'taim]","n.(meanwhile)其间,其时 ad.同时,当时"}
                   ,{"meanwhile ['mi:nwail]","n.其时,其间 ad.当时,与此同"}
                   ,{"measure ['meʒə]","v.测量,分派,权衡 n.尺寸,量度器,措施,办法"}
                   ,{"meat [mi:t]","n.(食用)肉类"}
                   ,{"mechanic [mi'kænik]","n.技工,机修工"}
                   ,{"mechanical [mi'kænikəl]","a.机械的,由机构制成的;机械似的,呆板的"}
                   ,{"mechanism ['mekənizəm]","n.机械装置,机构;机制"}
                   ,{"medal ['medəl]","n.奖章,勋章,纪念章"}
                   ,{"medical ['medikəl]","a.医学的,医疗的,医药的;内科的"}
                   ,{"medicine ['medisin]","n.内服药,医药;医术;医学,内科学"}
                   ,{"medieval [,medi'i:vəl,mi:-]","a.中世纪的,中古(时代)的,老式的,原始的"}
                   ,{"meditate ['mediteit]","v.想,考虑,(尤指宗教上的)沉思,冥想"}
                   ,{"meditation [,medi'teiʃən]","n.熟虑;(尤指宗教的)默想,沉思;(pl.)冥想录"}
                   ,{"medium ['mi:diəm,-djəm]","n.(pl.media)媒体,方法,媒介,介质 a.中等的"}
                   ,{"meet [mi:t]","n.会,集会 v.遇见;会谈;迎接;满足;符合"}
                   ,{"meeting ['mi:tiŋ]","n.会议,集合,汇合,会见,接见,汇合点"}
                   ,{"melody ['melədi]","n.旋律,曲调;悦耳的音乐"}
                   ,{"melon ['melən]","n.甜瓜"}
                   ,{"melt [melt]","v.(使)融化,(使)熔化"}
                   ,{"member ['membə]","n.成员,会员"}
                   ,{"membership ['membəʃip]","n.会员资格,成员资格"}
                   ,{"memo ['meməu]","n.(memorandum)备忘录"}
                   ,{"memorial [mi'mɔ:riəl,-'məu-]","a.记忆的,纪念的 n.纪念物,纪念碑,纪念馆"}
                   ,{"memory ['meməri]","n.记忆,记忆力;回忆;存储(器)"}
                   ,{"menace ['menəs]","vt./n.有危险性的人(或物);威胁,威吓"}
                   ,{"mend [mend]","v.修理,缝补;改正,改进"}
                   ,{"mental ['mentəl]","a.精神的,思想的,心理的,智力的,脑力的"}
                   ,{"mention ['menʃən]","v./n.提及,说起"}
                   ,{"menu ['menju:,mə'nju:]","n.菜单"}
                   ,{"merchandise ['mə:tʃəndaiz,-dais]","n.商品,货物"}
                   ,{"merchant ['mə:tʃənt]","n.商人,零售商"}
                   ,{"mercury ['mə:kjuri]","n.水银,汞"}
                   ,{"mercy ['mə:si]","n.仁慈,怜悯,宽恕"}
                   ,{"mere [miə]","a.纯粹的;仅仅,只不过"}
                   ,{"merely ['miəli]","adv.仅仅,只不过"}
                   ,{"merge [mə:dʒ]","v.(使)结合,(使)合并,(使)合为一体"}
                   ,{"merit ['merit]","n.优点,价值,功绩 v.值得,应得"}
                   ,{"merry ['meri]","a.欢乐的,愉快的"}
                   ,{"mess [mes]","n.混乱,混杂,脏乱 v.弄脏,弄乱,搞糟"}
                   ,{"message ['mesidʒ]","n.消息,信息,通讯,启示,教训,广告词,预言"}
                   ,{"messenger ['mesindʒə]","n.送信者,使者,传令兵"}
                   ,{"metal ['metəl]","n.金属,金属制品"}
                   ,{"metaphor ['metəfə]","n.隐喻,暗喻"}
                   ,{"method ['meθəd]","n.方法,办法"}
                   ,{"metre ['mi:tə]","n.(meter)米,公尺;仪表,计量器"}
                   ,{"metric ['metrik]","a.米制的,公制的"}
                   ,{"metropolitan [,metrə'pɔlitən]","a.首都的,主要都市的,大城市"}
                   ,{"microphone ['maikrəfəun]","n.话筒,扩音器"}
                   ,{"microscope ['maikrəskəup]","n.显微镜"}
                   ,{"middle ['midl]","n./a.中间(的),当中(的)"}
                   ,{"midst [midst]","n.中间,当中"}
                   ,{"might [mait]","aux.v.可能,也许 n.力量,威力,权力"}
                   ,{"migrate [mai'ɡreit,'maiɡ-]","v.迁移,移居(国外)"}
                   ,{"mild [maild]","a.温和的,轻微的,味淡的,不含有害物质的的"}
                   ,{"mile [mail]","n.英里,哩,海里"}
                   ,{"militant ['militənt]","a.好战的,富于战斗性的 n.斗士"}
                   ,{"military ['militəri]","a.军事的,军用的,军队的"}
                   ,{"milk [milk]","n.牛奶;(植物流出的)白色乳液 v.挤奶"}
                   ,{"mill [mil]","n.磨粉机,磨坊;作坊,工厂"}
                   ,{"millimeter ['mili,mi:tə]","n.(millimetre)毫米"}
                   ,{"million ['miljən]","num./n.百万,百万个"}
                   ,{"millionaire [,miljə'nεə]","n.百万富翁"}
                   ,{"mind [maind]","n.精神,理智,意见,记忆力 v.注意,介意,反对"}
                   ,{"mine [main]","pron.(I 的物主代词)我的(东西)n.矿 v.采矿"}
                   ,{"mineral ['minərəl]","n.矿物,矿石 a.矿物的,矿质的"}
                   ,{"mingle ['miŋɡl]","v.(使)混合"}
                   ,{"miniature ['miniətʃə]","n.缩小的模型,缩图 a.微型的,缩小的"}
                   ,{"minimize ['minimaiz]","v.(minimize)使减少到最少,使降到最低"}
                   ,{"minimum ['miniməm]","n.最小值,最低限度 a.最小的,最低的"}
                   ,{"minister ['ministə]","n.部长,大臣"}
                   ,{"ministry ['ministri]","n.(政府的)部;牧师"}
                   ,{"minor ['mainə]","a.较小的,较小的 n.兼修学科 v.(in)兼修"}
                   ,{"minority [mai'nɔrəti,mi-]","n.少数,少数派,少数民族"}
                   ,{"minus ['mainəs]","a.负的,减的 prep.减去 n.负号,减号"}
                   ,{"minute ['minit]","n.分钟,片刻;(pl.)会议记录 a.微小的"}
                   ,{"miracle ['mirəkl]","n.奇迹,令人惊奇的人(或事)"}
                   ,{"mirror ['mirə]","n.镜子;反映,反射 v.反映,反射"}
                   ,{"mischief ['mistʃif]","n.损害,伤害,危害;恶作剧,胡闹;灾祸"}
                   ,{"miserable ['mizərəbl]","a.痛苦的,悲惨的"}
                   ,{"misery ['mizəri]","n.痛苦,悲惨,不幸"}
                   ,{"misfortune [mis'fɔ:tʃən]","n.不幸,灾祸,灾难"}
                   ,{"mislead [,mis'li:d]","v.把...带错路,使误入岐途"}
                   ,{"miss [mis]","n.小姐 v. 思念,未击中,错过,漏掉,逃脱"}
                   ,{"missile ['misail,-səl]","n.导弹,发射物"}
                   ,{"missing ['misiŋ]","a.漏掉的,失去的,失踪的"}
                   ,{"mission ['miʃən]","n.使命,任务;使团,代表团"}
                   ,{"missionary ['miʃənəri]","a.教会的,传教(士)的 n.传教士"}
                   ,{"mist [mist]","n.薄雾,霭"}
                   ,{"mistake [mi'steik]","n.错误,过失,误解 v.弄错;(for)把...误认为"}
                   ,{"mistress ['mistris]","n.女主人;主妇;情妇,情人"}
                   ,{"misunderstand [,misʌndə'stænd]","v.误解,误会"}
                   ,{"mix [miks]","v.使混合;混淆"}
                   ,{"mixture ['mikstʃə]","n.混合;混合物,混合剂"}
                   ,{"moan [məun]","n.呻吟声,悲叹声 v.呻吟,抱怨,悲叹"}
                   ,{"mob [mɔb]","n.乌合之众(尤指暴力者) vi.围攻,聚众闹事"}
                   ,{"mobile ['məubail]","a.可动的,活动的,运动的"}
                   ,{"mobilize ['məubilaiz]","v.(mobilise)动员,赋予可动性"}
                   ,{"mock [mɔk]","v.嘲笑 a.假的,模拟的 n.(常 pl.)模拟考试"}
                   ,{"mode [məud]","n.方式,式样"}
                   ,{"model ['mɔdəl]","n.样式,型;模范;模型,原型;模特 v.模仿"}
                   ,{"moderate ['mɔdərət,'mɔdəreit]","a.有节制的,中等的,适度的,温和的,稳健的"}
                   ,{"modern ['mɔdən]","a.现代的,近代的,新式的"}
                   ,{"modernization [,mɔdənai'zeiʃən]","n.(modernisation)现代化"}
                   ,{"modest ['mɔdist]","a.谦虚的,有节制的"}
                   ,{"modify ['mɔdifai]","v.更改,修改,修饰"}
                   ,{"module ['mɔdju:l,-dʒu:l]","n.组件,模块,模件;(航天器的)舱"}
                   ,{"moist [mɔist]","a.潮湿的,湿润的,多雨的"}
                   ,{"moisture ['mɔistʃə]","n.潮湿,湿气,湿度"}
                   ,{"molecule ['mɔlikjul]","n.分子"}
                   ,{"moment ['məumənt]","n.片刻,瞬间,时刻"}
                   ,{"momentum [məu'mentəm]","n.动力,要素"}
                   ,{"monarch ['mɔnək,-ɑ:k]","n.帝王,君主,最高统治者"}
                   ,{"Monday ['mʌndeɪ]","n.星期一"}
                   ,{"monetary ['mʌnitəri]","a.金融的,货币的"}
                   ,{"money ['mʌni]","n.货币,钱"}
                   ,{"monitor ['mɔnitə]","n.班长;监听器,监视器 v.监控,监测"}
                   ,{"monkey ['mʌŋki]","n.猴子"}
                   ,{"monopoly [mə'nɔpəli]","n.垄断,专卖,专利权,专利事业"}
                   ,{"monotonous [mə'nɔtənəs]","a.单调的,无变化的"}
                   ,{"monster ['mɔnstə]","n.怪物,妖怪,畸形的动植物"}
                   ,{"month [mʌnθ]","n.月,月份"}
                   ,{"monthly ['mʌnθli]","a.每月的 ad.每月一次,按月 n.月刊"}
                   ,{"monument ['mɔnjumənt]","n.纪念碑,纪念馆,遗迹,不朽的业绩"}
                   ,{"mood [mu:d]","n.心情,情绪;语气"}
                   ,{"moon [mu:n]","n.(加 the)月球,月亮;卫星"}
                   ,{"moral ['mɔrəl,'mɔ:-]","a.道德(上)的,精神上的 n.寓意,教育意义"}
                   ,{"morality [mə'ræləti,mɔ:-]","n.道德,美德"}
                   ,{"more [mɔ:]","a.更多的 n.更多的人(或东西) ad.更,更多"}
                   ,{"moreover [mɔ:'rəuvə]","conj./ad.再者,加之,而且"}
                   ,{"morning ['mɔ:niŋ]","n.早晨,上午"}
                   ,{"mortal ['mɔ:təl]","a.致命的;终有一死的;人世间的 n.凡人"}
                   ,{"mortgage ['mɔ:ɡidʒ]","n./v.抵押(借款)"}
                   ,{"mosaic [məu'zeiik]","n.马赛克;镶嵌体"}
                   ,{"mosquito [mə'ski:təu]","n.蚊子"}
                   ,{"moss [mɔs]","n.苔,藓,地衣"}
                   ,{"most [məust]","a.最多的;大多数的 ad.最;极其 n.大多数"}
                   ,{"mostly ['məustli]","ad.几乎全部地;主要地,大部分,基本上"}
                   ,{"motel [məu'tel]","n.(附有停车场的)汽车旅馆"}
                   ,{"mother ['mʌðə]","n.母亲"}
                   ,{"motion ['məuʃən]","n.运动,动;提议,动议 v.提议,动议"}
                   ,{"motivate ['məutiveit]","vt.促动;激励,鼓励,作为...的动机"}
                   ,{"motive ['məutiv]","n.动机,目的 a.发动的,运动的"}
                   ,{"motor ['məutə]","n.发动机,电动机"}
                   ,{"mould [məuld]","n.(mold)模子,铸型 v.浇铸,造型,塑造"}
                   ,{"mount [maunt]","v.登上;安装 n.支架,底板;(用于山名前)山峰"}
                   ,{"mountain ['mauntin]","n.山"}
                   ,{"mourn [mɔ:n,məun]","v.哀悼,忧伤"}
                   ,{"mouse [maus,mauz]","n.(pl.mice)鼠,耗子"}
                   ,{"mouth [mauθ]","n.口,嘴"}
                   ,{"move [mu:v]","v.移动,迁移;活动;感动 n.移动,活动,行动"}
                   ,{"movement ['mu:vmənt]","n.运动,活动;移动,迁移"}
                   ,{"movie ['mu:vi]","n.电影,电影院"}
                   ,{"much [mʌtʃ]","a.多的,大量的 ad.十分,非常;到极大程度"}
                   ,{"mud [mʌd]","n.泥,泥浆 v.弄脏,使沾污泥"}
                   ,{"mug [mʌɡ]","n.(有柄的)大茶杯"}
                   ,{"multiple ['mʌltipl]","a.多样的,多重的 n.倍数 v.成倍增加"}
                   ,{"multiply ['mʌltiplai]","v.(by)乘,使相乘;倍增,增加,繁殖"}
                   ,{"multitude ['mʌlti,tju:d,-tu:d]","n.众多,大量"}
                   ,{"municipal [mju:'nisipəl]","a.市(立,政)的;地方性的,地方自治的"}
                   ,{"murder ['mə:də]","v./n.谋杀,凶杀"}
                   ,{"murmur ['mə:mə]","v./n.小声说(话);小声抱怨,咕哝"}
                   ,{"muscle ['mʌsl]","n.肌肉,体力"}
                   ,{"muscular ['mʌskjulə]","a.肌肉的;肌肉发达的;强健的"}
                   ,{"museum [mju:'ziəm]","n.博物馆,展览馆"}
                   ,{"mushroom ['mʌʃru:m,-rum]","n.蘑菇 vt.迅速生长,迅速增加,采蘑菇"}
                   ,{"music ['mju:zik]","n.音乐,乐曲,乐谱"}
                   ,{"musical ['mju:zikəl]","a.音乐的;有音乐才能的 n.音乐片"}
                   ,{"musician [mju:'ziʃən]","n.音乐家,乐师"}
                   ,{"must [mʌst]","aux.&v.必须;很可能;一定要 n.必须做的事"}
                   ,{"mute [mju:t]","a.哑的,缄默的 n.哑巴;弱音器 v.减弱...的声音"}
                   ,{"mutter ['mʌtə]","n.喃喃而语,小声低语;抱怨 v.低声说,抱怨"}
                   ,{"mutton ['mʌtən]","n.羊肉"}
                   ,{"mutual ['mju:tʃuəl,-tjuəl]","a.相互的,彼此的;共同的,共有的"}
                   ,{"my [maɪ]","pron.(I 的所有格)我的 int.哎呦（用于表示惊讶的感叹词）"}
                   ,{"myself [mai'self]","pron.[反身代词]我自己;我亲自"}
                   ,{"mysterious [mi'stiəriəs]","a.神秘的,可疑的,难理解的"}
                   ,{"mystery ['mistəri]","n.神秘,神秘的事物;神秘小说,侦探小说"}
                   ,{"myth [miθ]","n.神话;虚构的理论"}
                   ,{"nail [neil]","n.指甲,爪;钉 v.将...钉牢,钉住"}
                   ,{"naive [nɑ:'i:v,nai-]","a.天真的"}
                   ,{"naked ['neikid]","a.裸体的,无遮敝的,无掩饰的"}
                   ,{"name [neim]","n.名字(称/声/义) vt.给...取名;列举;提名"}
                   ,{"namely ['neimli]","ad.即,也就是"}
                   ,{"nap [næp]","n.小睡,打盹"}
                   ,{"napkin ['næpkin]","n.餐巾,餐巾纸,<英>尿布"}
                   ,{"narrative ['nærətiv]","a.叙述性的 n.叙述"}
                   ,{"narrow ['nærəu]","a.狭窄的,狭的,狭隘的"}
                   ,{"nasty ['nɑ:sti,'næs-]","a.肮脏的,卑劣的,下流的;令人厌恶的"}
                   ,{"nation ['neiʃən]","n.民族,国家"}
                   ,{"national ['næʃənəl]","a.民族的,国家的,国立的"}
                   ,{"nationality [,næʃən'æliti]","n.国籍,民族"}
                   ,{"native ['neitiv]","a.本地的,本国的;天生的 n.本地人,本国人"}
                   ,{"natural ['nætʃərəl]","a.正常的;自然界的,天然的,天赋的,固有的"}
                   ,{"nature ['neitʃə]","n.自然界,大自然;性质,本性,天性"}
                   ,{"naughty ['nɔ:ti]","a.顽皮的,淘气的"}
                   ,{"naval ['neivəl]","n.海军的,军舰的"}
                   ,{"navigation [,nævi'ɡeiʃən]","n.航海,航空;导航,领航"}
                   ,{"navy ['neivi]","n.海军"}
                   ,{"near [niə]","a.近的,接近的;亲近的 prep.靠近 ad.接近"}
                   ,{"nearby ['niə'bai]","a.附近的 ad.在附近 prep.在...附近"}
                   ,{"nearly ['niəli]","ad.差不多,几乎"}
                   ,{"neat [ni:t]","a.整洁的,干净的,优美的,精致的"}
                   ,{"necessary ['nesisəri]","a.必需的,必要的;必然的 n.必需品"}
                   ,{"necessitate [ni'sesi,teit,nə-]","v.使成为必要,需要"}
                   ,{"necessity [ni'sesəti,nə-]","n.必要性,需要;必然性;(pl.)必需品"}
                   ,{"neck [nek]","n.颈脖"}
                   ,{"necklace ['neklis]","n.项链,项圈"}
                   ,{"need [ni:d]","aux.v./v.需要;必须 n.需要;贫困,困窘"}
                   ,{"needle ['ni:dl]","n.针,指针,针状物"}
                   ,{"negative ['neɡətiv]","a.否定的,消极的,阴性的 n.负数;(摄影)底片"}
                   ,{"neglect [ni'ɡlekt]","v./n.忽视;疏忽,漏做,忽略"}
                   ,{"negligible ['neɡlidʒəbl]","a.可忽略不计的,微不足道的"}
                   ,{"negotiate [ni'ɡəuʃieit,-si-]","v.商订;谈判,洽谈,交涉"}
                   ,{"Negro ['niːɡrəʊ]","n.黑人 a.黑人的"}
                   ,{"neighbor ['neibə]","n.(neighbour)邻居"}
                   ,{"neighborhood ['neibəhud]","n.(neighbourhood)邻居;四邻,街道"}
                   ,{"neither ['naiðə,'ni:-]","a.两者都不 pron.两者都不 ad.也不"}
                   ,{"nephew ['nefju:,'nev-]","n.侄子,外甥"}
                   ,{"nerve [nə:v]","n.神经;勇敢,胆量"}
                   ,{"nervous ['nə:vəs]","a.神经的;神经过敏的,紧张不安的"}
                   ,{"nest [nest]","n.窝,巢 v.筑巢"}
                   ,{"net [net]","n.网,网状物 v.用网捕,使落网 a.纯净的"}
                   ,{"network ['netwə:k]","n.网状物;广播网,电视网;网络"}
                   ,{"neutral ['nju:trəl]","a.中立的;中性的,中和的"}
                   ,{"never ['nevə]","ad.永不,从不,决不;从来没有;不,没有"}
                   ,{"nevertheless [,nevəðə'les]","conj.(nonetheless)然而,不过 ad.仍然,不过"}
                   ,{"new [nju:,nu:]","a.新(近)的;新来的;不熟悉的;没经验的"}
                   ,{"news [nju:z,nu:z]","n.新闻,消息;新闻报道,新闻广播"}
                   ,{"newspaper ['nju:s,peipə,'nju:z-]","n.报纸"}
                   ,{"next [nekst]","a.紧接的,其次的;贴近的 ad.其次;居后"}
                   ,{"nice [nais]","a.美好的,令人愉快的;友好的,亲切的"}
                   ,{"nickel ['nikəl]","n.镍;镍币;五美分"}
                   ,{"nickname ['nikneim]","n.绰号,浑名 vt.给...起绰号"}
                   ,{"niece [ni:s]","n.侄女,甥女"}
                   ,{"night [nait]","n.夜间;夜;晚(上)"}
                   ,{"nightmare ['naitmεə]","n.恶梦;可怕的事物,无法摆脱的恐惧"}
                   ,{"nine [nain]","num.九 pron./ad.九(个,只...)"}
                   ,{"nineteen [,nain'ti:n]","num./a.十九 pron.十九(个,只...)"}
                   ,{"ninety ['nainti]","num.九十,九十个"}
                   ,{"nitrogen ['naitrədʒən]","n.[化]氮"}
                   ,{"no [nəu]","ad.不是,不 a.没有的;不允许 n.不,拒绝"}
                   ,{"noble ['nəubl]","a.高尚的;贵族的,高贵的 n.贵族"}
                   ,{"nobody ['nəubədi,-bɔdi]","pron.谁也不,无人 n.小人物"}
                   ,{"nod [nɔd]","v.点(头),点头招呼 n.点头招呼;打盹,瞌睡"}
                   ,{"noise [nɔiz]","n.喧闹声,噪声,吵嚷声"}
                   ,{"noisy ['nɔizi]","a.吵闹的,喧闹的"}
                   ,{"nominal ['nɔminəl]","a.名义上的;(金额,租金)微不足道的"}
                   ,{"nominate ['nɔmineit]","v.提名,任命"}
                   ,{"none [nʌn]","pron.没有任何人(东西);都不 ad.一点也不"}
                   ,{"nonetheless [ˌnʌnðə'les]","ad.[nevertheless]虽然如此, 但是"}
                   ,{"nonsense ['nɔnsəns]","n.胡说,废话"}
                   ,{"noodle ['nu:dl]","n.(常用复数)面条"}
                   ,{"noon [nu:n]","n.中午,正午"}
                   ,{"nor [nɔ:,弱 nə]","conj./ad.也不,也没有"}
                   ,{"norm [nɔ:m]","n.准则,规范,准则,平均数"}
                   ,{"normal ['nɔ:məl]","a.正常的,普通的;正规的,标准的"}
                   ,{"normalization [,nɔ:məlai'zeiʃən]","n.(normalisation)正常化,标准化"}
                   ,{"north [nɔ:θ]","n.北,北方 a.北方的,北部 ad.向北方,在北方"}
                   ,{"northeast [,nɔ:θ'i:st]","n.东北 a.东北方的 ad.向东北,在东北"}
                   ,{"northern ['nɔːðən]","a.北方的,北部的"}
                   ,{"northwest [,nɔ:θ'west]","n.西北方,西北部 a.西北的 ad.向西北,在西北"}
                   ,{"nose [nəuz]","n.鼻子;(飞机,船等的)前端,突出部分"}
                   ,{"not [nɔt]","ad.不,不是,不会;没有"}
                   ,{"notable ['nəutəbl]","n.值得注意的,显著的,著名的"}
                   ,{"note [nəut]","n.笔记;按语,注释;钞票,纸币 v.记下,摘下"}
                   ,{"notebook ['nəutbuk]","n.笔记本"}
                   ,{"nothing ['nʌθiŋ]","n.没有东西;什么也没有;无关紧要的人或事"}
                   ,{"notice ['nəutis]","n.通知,通告,布告;注意,认识 v.注意到,注意"}
                   ,{"noticeable ['nəutisəbl]","a.显而易见的,值得注意的,重要的"}
                   ,{"notify ['nəutifai]","v.通知,告知,报告"}
                   ,{"notion ['nəuʃən]","n.概念,想法,意念,看法,观点"}
                   ,{"notorious [nəu'tɔ:riəs]","a.臭名昭著的,声名狼藉的"}
                   ,{"notwithstanding [,nɔtwiθ'stændiŋ]","prep./ad./conj.尽管"}
                   ,{"noun [naun]","n.名词"}
                   ,{"nourish ['nʌriʃ,'nə:-]","v.提供养分,养育,怀有(希望,仇恨等)"}
                   ,{"novel ['nɔvəl]","n.(长篇)小说 a.新奇的,新颖的"}
                   ,{"novelty ['nɔvəlti]","n.新奇,新颖,新奇的事物"}
                   ,{"November [nəʊ'vembə(r)]","n.十一月"}
                   ,{"now [nau]","ad.现在,如今,目前;当时,于是,然后"}
                   ,{"nowadays ['nauədeiz]","ad.现今,现在"}
                   ,{"nowhere ['nəʊweə(r)]","ad.任何地方都不,没有地方"}
                   ,{"nuclear ['nju:kliə,'nu:-]","a.核心的,中心的;原子核的,核能的"}
                   ,{"nucleus ['nju:kliəs]","n.(pl.nuclei)核,核心,原子核"}
                   ,{"nuisance ['nju:səns]","n.讨厌的人(或东西);麻烦事"}
                   ,{"numb [nʌm]","a.麻木的,失去感觉的 v.使麻木"}
                   ,{"number ['nʌmbə]","n.数,数字,数量,号码,一群 v.共计,编号"}
                   ,{"numerical [nju:'merikəl]","a.数字的,用数字表示的,数值的"}
                   ,{"numerous ['nju:mərəs]","a.众多的,许多的,大批的"}
                   ,{"nurse [nə:s]","n.护士,保姆 v.护理,看护"}
                   ,{"nursery ['nə:səri]","n.托儿所"}
                   ,{"nurture ['nə:tʃə]","n./v.养育,教育,教养 n.营养品 v.给与营养物"}
                   ,{"nut [nʌt]","n.坚果;螺母,螺帽"}
                   ,{"nutrition [nju:'triʃən]","n.营养,营养学"}
                   ,{"nylon ['nailɔn]","n.尼龙"}
                   ,{"oak [əuk]","n.橡树,橡木 a.橡木的"}
                   ,{"oar [ɔ:,əu]","n.桨,橹 v.划,划动,划行"}
                   ,{"oath [əuθ]","n.誓言,誓约,诅咒"}
                   ,{"obedience [əu'bi:diəns]","n.服从,顺从"}
                   ,{"obedient [əu'bi:diənt]","a.服从的,顺从的"}
                   ,{"obey [əu'bei]","v.服从, 顺从"}
                   ,{"object ['ɔbdʒikt]","n.物体;客体,对象;目标;宾语 v.(to)反对"}
                   ,{"objection [əb'dʒekʃən,ɔb-]","n.(to)反对,异议,不喜欢,反对的理由"}
                   ,{"objective [əb'dʒektiv,ɔb-]","n.目标,目的 a.客观的,真实的"}
                   ,{"obligation [,ɔbli'ɡeiʃən]","n.义务,责任"}
                   ,{"oblige [ə'blaidʒ]","v.强迫,迫使;责成;(使)感激,施恩于"}
                   ,{"obscure [əb'skjuə,ɔb-]","a.暗的,朦胧的;模糊的,晦涩的"}
                   ,{"observation [,ɔbzə:'veiʃən]","n.观察,观测,监视;(pl.)观察资料;观察力"}
                   ,{"observe [əb'zə:v]","v.观察,观测,注意到,监视,遵守,评述,说"}
                   ,{"obsession [əb'seʃən,ɔb-]","n.迷住, 困扰"}
                   ,{"obsolete ['ɔbsəli:t,ɔbsə'li:t]","a.已废弃的,过时的"}
                   ,{"obstacle ['ɔbstəkl]","n.障碍(物),妨碍,阻碍,干扰"}
                   ,{"obstruct [əb'strʌkt,ɔb-]","v.阻隔,阻塞(道路、通道等)n.阻碍物,障碍物"}
                   ,{"obstruction [əb'strʌkʃən,ɔb-]","n.妨碍,障碍物"}
                   ,{"obtain [əb'tein,ɔb-]","v.获得,得到"}
                   ,{"obvious ['ɔbviəs]","a.明显的,显而易见的"}
                   ,{"occasion [ə'keiʒən,əu-]","n.场合,时节,时刻;时机,机会"}
                   ,{"occasional [ə'keiʒənəl,əu-]","a.偶然的,非经常的,特殊场合的;临时的"}
                   ,{"occupation [,ɔkju'peiʃən]","n.占领,占据;占用;职业,工作"}
                   ,{"occupy ['ɔkjupai]","v.占,占用;占据,占领;使忙碌,使从事"}
                   ,{"occur [ə'kə:]","v.发生,出现;存在;想起,想到"}
                   ,{"occurrence [ə'kə:rəns,-'kʌ-]","n.发生,出现;事件,事故,发生的事情"}
                   ,{"ocean ['əuʃən]","n.海洋"}
                   ,{"o'clock [ə'klɔk,əu-]","ad.(...)点钟(与 1 至 12 数字连用)"}
                   ,{"October [ɒk'təʊbə(r)]","n.十月"}
                   ,{"odd [ɔd]","a.奇数的;奇怪的;单只的;临时的;带零头的"}
                   ,{"odds [ɔdz]","n.不平等,差异;机会"}
                   ,{"odor ['əudə]","n.(odour)气味,香味,臭味,名声"}
                   ,{"of [ɔv,əv,v,f]","prep....的;在...之中;用...制的;关于...的"}
                   ,{"off [ɔ:f,ɔf]","ad.离开;在远处;脱开 prep.从,从...离开"}
                   ,{"offend [ə'fend]","v.犯罪,冒犯,违反,得罪,使...不愉快"}
                   ,{"offensive [ə'fensiv]","a.冒犯的,攻击的 n.攻势,进攻"}
                   ,{"offer ['ɔfə,'ɔ:-]","v.提供,提议,出现 n.出价,提议,意图"}
                   ,{"office ['ɔfis,'ɔ:-]","n.办公室,办事处;职务,公职;部,局,处"}
                   ,{"officer ['ɔfisə,'ɔ:-]","n.官员,办事员;工作人员;军官"}
                   ,{"official [ə'fiʃəl,əu-]","n.官员,行政官员 a.官方的,官方的,正式的"}
                   ,{"offset [,ɔf'set,'ɔfset,'ɔ:-]","n.分支,补偿,[计]偏移量 v.抵消,补偿"}
                   ,{"offspring ['ɔfspriŋ,'ɔ:-]","n.子孙,后代;结果,产物"}
                   ,{"often ['ɔfən,'ɔftən,'ɔ:-]","ad.常常,经常,通常"}
                   ,{"oil [ɔil]","n.油,石油 v.给...加润滑油;涂油,上油"}
                   ,{"okay [ˌəʊ'keɪ]","a.(okey,OK,O.K.)好,行,不错 n.同意"}
                   ,{"old [əuld]","a.年老的;...岁的;长时间的,老的;过去的"}
                   ,{"omit [əu'mit]","v.省略,删去;遗漏,忽略"}
                   ,{"on [ɔn,ɔ:n,ən,n]","a.连接上 prep.在...上;靠近 ad.向前,继续"}
                   ,{"once [wʌns]","ad.一次,曾经 conj.一(旦)...就... n.一次"}
                   ,{"one [wʌn]","num.一 pron.一个(只)(表示代替可数的东西)"}
                   ,{"oneself [wʌn'self,-zelf]","pron.[反身代词]自己;亲自,本人"}
                   ,{"onion ['ʌnjən]","n.洋葱"}
                   ,{"only ['əunli]","ad.仅仅,只不过 a.唯一的 conj.可是,不过"}
                   ,{"onto ['ɔntu,-tə]","prep.在...上面;到...上面"}
                   ,{"opaque [əu'peik]","a.不透明(光)的;难理解的,晦涩的"}
                   ,{"open ['əupən]","n.公开,户外 a.开的,开放的 v.开"}
                   ,{"opening ['əupəniŋ]","n.开,开放,开始,空缺,机会 a.开始的,开幕的"}
                   ,{"opera ['ɔpərə]","n.歌剧"}
                   ,{"operate ['ɔpəreit]","v.操作,运转,开动,起作用,动手术"}
                   ,{"operation [,ɔpə'reiʃən]","n.运转,开动,操作,手术,运算,经营"}
                   ,{"operational [,ɔpə'reiʃənəl]","a.操作的,运转的,起作用的,经营的"}
                   ,{"operator ['ɔpəreitə]","n.操作人员,(电话)接线员"}
                   ,{"opinion [ə'pinjən]","n.意见,看法,主张"}
                   ,{"opponent [ə'pəunənt]","n.对手,反对者,敌手 a.对立的,对抗的"}
                   ,{"opportunity [,ɔpə'tju:niti]","n.机会"}
                   ,{"oppose [ə'pəuz]","v.反对,使对立,使对抗,使相对"}
                   ,{"opposite ['ɔpəzit,-sit]","a.对面的,相对的,相反的 n.对立面"}
                   ,{"oppress [ə'pres]","v.压迫,压制"}
                   ,{"opt [ɔpt]","vi.抉择,选择"}
                   ,{"optical ['ɔptikəl]","a.眼的,视力的;光学的"}
                   ,{"optimistic [,ɔpti'mistik]","a.乐观主义的"}
                   ,{"optimum ['ɔptiməm]","a.最适宜的 n.最适宜(条件)"}
                   ,{"option ['ɔpʃən]","n.选择(权),[商]选择买卖的特权"}
                   ,{"optional ['ɔpʃənəl]","a.可以任选的,随意的,非强制的"}
                   ,{"or [ɔ:,ə]","conj.或,或者(表示选择);即,大约;否则"}
                   ,{"oral ['ɔ:rəl,'ɔ-]","a.口头的"}
                   ,{"orange ['ɔrindʒ,'ɔ:-]","n.柑,桔,橙"}
                   ,{"orbit ['ɔ:bit]","n.轨道 v.(使)沿轨道行"}
                   ,{"orchard ['ɔ:tʃəd]","n.果园,果园里的全部果树,<美俚>棒球场"}
                   ,{"orchestra ['ɔ:kistrə,-kes-]","n.管弦乐队"}
                   ,{"order ['ɔ:də]","n.命令;次序;整齐;定货单;等级 v.定制,订购"}
                   ,{"orderly ['ɔ:dəli]","a.整齐的,有秩序的,有条理的 n.勤务兵"}
                   ,{"ordinary ['ɔ:dinəri,-neri-]","a.普通的,平凡的,平常的;平庸的"}
                   ,{"ore [ɔ:]","n.矿石,矿砂"}
                   ,{"organ ['ɔ:ɡən]","n.器官;机构,机关;风琴"}
                   ,{"organic [ɔ:'ɡænik]","a.器官的;有机的;有机体的"}
                   ,{"organism ['ɔ:ɡənizəm]","n.生物,有机体"}
                   ,{"organization [,ɔ:ɡənai'zeiʃən,-ni'z-]","n.(organization)组织,团体,机构"}
                   ,{"organize ['ɔ:ɡənaiz]","v.(organise)组织,编组"}
                   ,{"orient ['ɔ:riənt,'əu-,'ɔ:rient]","n.东方,亚洲 v.使朝东,为...定位,使适应"}
                   ,{"oriental [ˌɔːri'entl]","a.东方的,东方诸国的 n.东方人"}
                   ,{"orientation [,ɔ:rien'teiʃən,əu-]","n.方向,方位,定位,倾向性,向东方"}
                   ,{"origin ['ɔridʒin,'ɔ:-]","n.起源,由来;出身,来历"}
                   ,{"original [ə'ridʒənəl]","a.最初的,原文的;新颖的 n.原物,原作,原文"}
                   ,{"originate [ə'ridʒəneit]","v.(in,from)起源,发生;首创,创造"}
                   ,{"ornament ['ɔ:nəmənt,'ɔ:nəment]","v.装饰,美化 n.装饰,装饰物"}
                   ,{"orphan ['ɔ:fən]","n.孤儿"}
                   ,{"orthodox ['ɔ:θədɔks]","a.传统的,正统的,习惯的,保守的,东正教的"}
                   ,{"other ['ʌðə]","a.另外的,其他的 n./pron.另一个人(或事)"}
                   ,{"otherwise ['ʌðəwaiz]","ad.另样,用别的方法;在其他方面 conj.要不然"}
                   ,{"ought [ɔ:t]","aux.应该(使用时,之后应接 to,再接动词原形)"}
                   ,{"ounce [auns]","n.盎司,英两"}
                   ,{"our ['auə,ɑ:]","pron.[we 的所有格]我们的"}
                   ,{"ours ['auəz,弱ɑ:z]","pron.[we 的物主代词]我们的(所有物)"}
                   ,{"ourselves [,auə'selvz,ɑ:-]","pron.[反身代词]我们自己;我们亲自"}
                   ,{"out [aut]","ad.出去;离家;突出来 a.外面的,往外去的"}
                   ,{"outbreak ['autbreik,aut'breik]","n.(战争,愤怒,火灾等的)爆发,(疾病的)发作"}
                   ,{"outcome ['autkʌm]","n.结果,成果"}
                   ,{"outdoor ['əutdɔ:]","a.室外的,野外的"}
                   ,{"outer ['autə]","a.外部的,外面的,外层的"}
                   ,{"outfit ['autfit]","n.用具,机构,全套装配 v.配备,(得到)装备"}
                   ,{"outing ['autiŋ]","n.外出,旅行,散步"}
                   ,{"outlet ['autlet,-lit]","n.出路,出口;销路,市场;发泄方法;电源插座"}
                   ,{"outline ['autlain]","n.轮廓,略图;大纲,梗概 v.概述,略述"}
                   ,{"outlook ['autluk,aut'luk]","n.景色,风光;观点,见解;展望,前景"}
                   ,{"output ['autput,aut'put]","n.产量,输出(量)"}
                   ,{"outrage ['autreidʒ]","n.暴行,侮辱,愤怒 v.凌辱,引起...义愤,强奸"}
                   ,{"outset ['autset]","n.开始,开端"}
                   ,{"outside [,aut'said,'aut'said]","ad.向外面 n.外部 a.外部的 prep.在...外"}
                   ,{"outskirts ['aʊtskɜːts]","n.郊区"}
                   ,{"outstanding [,aut'stændiŋ]","a.突出的,显著的,杰出的"}
                   ,{"outward ['autwəd]","a.外面的,公开的,向外的 ad.向外,在外 n.外表"}
                   ,{"oval ['əuvəl]","a.卵形的,椭圆形的 n.卵形,椭圆形"}
                   ,{"oven ['ʌvən]","n.炉,灶,灶箱"}
                   ,{"over ['əuvə]","ad.在上方;遍及地 prep.在的上方 a.结束的"}
                   ,{"overall ['əuvərɔ:l,əuvə'rɔ:l]","a.全面的,综合的 n.(pl.)(套头)工作服"}
                   ,{"overcoat ['əuvəkəut]","n.外衣,大衣"}
                   ,{"overcome [,əuvə'kʌm]","v.战胜,克服"}
                   ,{"overflow [,əuvə'fləu,'əuvəfləu]","v.(使)外溢,(使)溢出;溢出,流出,漫出"}
                   ,{"overhead ['əuvəhed,əuvə'hed]","a.在头顶上的;架空的 ad.在头顶上"}
                   ,{"overhear [,əuvə'hiə]","v.偶然听到,从旁听到"}
                   ,{"overlap [,əuvə'læp,'əuvəlæp]","v.重叠,与„交叠 n.重叠"}
                   ,{"overlook [,əuvə'luk,'əuvəluk]","v.看漏,忽略;俯瞰,眺望;宽容,放任"}
                   ,{"overnight [,əuvə'nait,'əuvənait]","a.通宵的,晚上的 ad.在昨夜,一夜工夫,突然"}
                   ,{"overpass ['əuvəpɑ:s,-pæs]","n.过街天桥 vt.胜过,通过,忽视"}
                   ,{"overseas ['əuvə'si:z]","a.外国的,海外的 ad.在海外"}
                   ,{"overtake [,əuvə'teik]","v.追上,超过,突然降临,压倒"}
                   ,{"overthrow [,əuvə'θrəu]","v./n.推翻,颠覆"}
                   ,{"overtime ['əuvətaim]","a.超时的,加班的 ad.加班"}
                   ,{"overturn [,əuvə'tə:n,'əuvətə:n]","n.倾覆,破灭,革命 v.打翻,推翻,颠倒,翻倒"}
                   ,{"overwhelm [ˌəʊvə'welm]","v.淹没,覆没,压倒,制服,使不知所措"}
                   ,{"overwhelming [,əuvə'hwelmiŋ]","a.势不可挡的,压倒的"}
                   ,{"owe [əu]","v.欠(债等),应向...付出,归功于,得感谢"}
                   ,{"owing ['əuiŋ]","a.欠的,未付的"}
                   ,{"owl [aul]","n.猫头鹰"}
                   ,{"own [əun]","a.(用在所有格后面,加强语气)自己的"}
                   ,{"owner ['əunə]","n.物主,所有者"}
                   ,{"ownership ['əunəʃip]","n.所有(权),所有制"}
                   ,{"ox [ɔks]","n.牛,公牛"}
                   ,{"oxide ['ɒksaɪd]","n.[化]氧化物"}
                   ,{"oxygen ['ɔksidʒən]","n.氧,氧气"}
                   ,{"ozone ['əuzəun]","n.臭氧;(海岸等的)新鲜空气"}
                   ,{"pace [peis,'peisi]","n.步,步伐,步调,速度 v.踱步,用步测"}
                   ,{"pack [pæk]","v.捆扎,打包;塞满,挤满 n.包裹,背包,一群/副"}
                   ,{"package ['pækidʒ]","n.包装,包裹,箱,包装费,标准部件,成套设备"}
                   ,{"packet ['pækit]","n.小包裹,小捆;盒;一捆,一扎;邮船,班轮"}
                   ,{"pact [pækt]","n.合同,条约,公约,协定"}
                   ,{"pad [pæd]","n.垫,衬垫;便笺簿 v.加上衬垫"}
                   ,{"paddle ['pædl]","n.桨 v.用桨划"}
                   ,{"page [peidʒ]","n.页,记录,事件,专栏 vt.给...标页码"}
                   ,{"pail [peil]","n.桶, 提桶; 一桶的量"}
                   ,{"pain [pein]","n.痛,痛苦;(pl.)努力,劳苦 vt.使痛苦"}
                   ,{"painful ['peinfl]","a.疼痛的,使痛苦的,费力[心]的,棘手的"}
                   ,{"paint [peint]","n.油漆,颜料 v.油漆;涂,涂漆;画;描绘,描述"}
                   ,{"painter ['peintə]","n.漆工,画家"}
                   ,{"painting ['peintiŋ]","n.上油漆,着色;绘画;油画;画法"}
                   ,{"pair [pεə]","n.一对,一双;一副;夫妇 v.配对,成对"}
                   ,{"palace ['pælis]","n.宫,宫殿"}
                   ,{"pale [peil]","a.苍白的,灰白的;浅的,暗淡的"}
                   ,{"palm [pɑ:m]","n.手掌,掌状物,棕榈 vt.与...握手,藏...于掌中"}
                   ,{"pamphlet ['pæmflit]","n.小册子"}
                   ,{"pan [pæn]","n.平底锅,盘子,面板"}
                   ,{"panda ['pændə]","n.熊猫"}
                   ,{"panel ['pænl]","n.面,板;控制板,仪表盘;专门小组"}
                   ,{"panic ['pænik]","n./a.恐慌(的),惊慌(的) vt.使惊慌,使害怕"}
                   ,{"panorama [,pænə'rɑ:mə]","n.全景,全景画,全景摄影,全景照片[装置]"}
                   ,{"pant [pænt]","n.喘气 v.喘,气喘吁吁地说"}
                   ,{"pants [pænts]","n.裤子, 短裤"}
                   ,{"paper ['peipə]","n.纸;纸制品;报纸;(pl)文件;试卷;论文"}
                   ,{"paperback ['peipəbæk]","n.平装本,简装本"}
                   ,{"parachute ['pærə,ʃu:t]","n.降落伞 v.跳伞"}
                   ,{"parade [pə'reid]","n./v.游行,夸耀 n.检阅,阅兵式 v.使列队行进"}
                   ,{"paradigm ['pærədim]","n.典范; 范例; 示例"}
                   ,{"paradox ['pærədɔks]","n.似非而是的话,自相矛盾的话,反论"}
                   ,{"paragraph ['pærəɡrɑ:f,-ɡræf]","n.段,节;小新闻,短评"}
                   ,{"parallel ['pærəlel]","a.平行的,相同的,类似的 n.平行线,类似,对比"}
                   ,{"paralyze ['pærəlaiz]","v.(paralyse)使瘫痪(麻痹);使丧失作用"}
                   ,{"parameter [pə'ræmitə]","n.参数,参量"}
                   ,{"parasite ['pærəsait]","n.寄生虫,食客"}
                   ,{"parcel ['pɑ:sl]","n.包裹,邮包,部分 v.打包,捆扎,分配"}
                   ,{"pardon ['pɑ:dn]","n.原谅,宽恕;请再说一遍 v.原谅,饶恕,赦免"}
                   ,{"parent ['pεərənt]","n.父母,母亲;(pl.)双亲;父母"}
                   ,{"park [pɑ:k]","n.公园,停车场,运动场 v.停放(汽车等),寄放"}
                   ,{"parliament ['pɑ:ləmənt]","n.国会,议会"}
                   ,{"part [pɑ:t]","n.部分,角色,一方,零件,地区,部,篇 v.使分开"}
                   ,{"partial ['pɑ:ʃəl]","a.部分的,不完全的;偏袒的,不公平的,偏爱的"}
                   ,{"participant [pɑ:'tisipənt]","n.参加者,参与者 a.有份的,参与的"}
                   ,{"participate [pɑ:'tisipeit]","v.(in)参与,参加;分享,分担;含有,带有"}
                   ,{"particle ['pɑ:tikl]","n.粒子,微粒;极小量;小品词,虚词"}
                   ,{"particular [pə'tikjulə]","a.特殊的,苛求的,个别的 n.详情,细节,特色"}
                   ,{"partly ['pɑ:tli]","ad.部分地,不完全地,在一定程度上"}
                   ,{"partner ['pɑ:tnə]","n.合作者,合伙人,合股人,伙伴,舞伴,配偶"}
                   ,{"party ['pɑ:ti]","n.聚会,政党,当事人 v.举行(参加)社交聚会"}
                   ,{"pass [pɑ:s,pæs]","v.经/通/穿/度过;传递 n.通行证;考试及格"}
                   ,{"passage ['pəsidʒ]","n.通过,经过;通路,走廊;(一)段落,(一)节"}
                   ,{"passenger ['pæsindʒə]","n.乘客,旅客"}
                   ,{"passer-by ['pɑːsə baɪ]","n.(pl.passers-by)过路人"}
                   ,{"passion ['pæʃən]","n.热情,激情,爱好;激怒;强烈感情"}
                   ,{"passive ['pæsiv]","a.被动的,消极的"}
                   ,{"passport ['pɑ:spɔ:t,'pæs-]","n.护照,达到某种目的的手段"}
                   ,{"past [pɑ:st,pæst]","a.过去的 ad.过 n.过去,昔日 prep.(经)过"}
                   ,{"paste [peist]","n.糊,浆糊 v.粘,贴"}
                   ,{"pastime ['pɑ:staim]","n.消遣,娱乐"}
                   ,{"pasture ['pɑ:stʃə,'pæs-]","n.牧草地,牧场"}
                   ,{"pat [pæt]","v./n.轻拍,轻打,抚摸"}
                   ,{"patch [pætʃ]","n.补丁,斑点,碎片小块 v.补,修补,掩饰"}
                   ,{"patent ['peitənt]","a.专利的,特许的 n.专利(权、品)v.批准专利"}
                   ,{"path [pɑ:θ,pæθ]","n.小路,小径;路线,轨道"}
                   ,{"pathetic [pə'θetik]","a.可怜的, 悲惨的"}
                   ,{"patience ['peiʃəns]","n.耐心,忍耐"}
                   ,{"patient ['peiʃənt]","a.有耐心的,能忍耐的 n.病人,患者"}
                   ,{"patriotic [,pætri'ɔtik]","a.爱国的"}
                   ,{"patrol [pə'trəul]","v.巡逻,巡查 n.巡逻,巡查;巡逻队"}
                   ,{"patron ['peitrən]","n.赞助人;资助人;老顾客,老主顾"}
                   ,{"pattern ['pætən]","n.模式,式样;图案,图样 v.仿制,模仿"}
                   ,{"pause [pɔ:z]","v./n.中止,暂停"}
                   ,{"pave [peiv]","v.铺砌,铺(路)"}
                   ,{"pavement ['peivmənt]","n.人行道"}
                   ,{"paw [pɔ:]","n.爪"}
                   ,{"pay [pei]","v.付款,付出代价,给予注意 n.工资,薪金"}
                   ,{"payment ['peimənt]","n.支付,付款额"}
                   ,{"pea [pi:]","n.豌豆"}
                   ,{"peace [pi:s]","n.和平;平静,安宁"}
                   ,{"peaceful ['pi:sful]","a.和平的,平静的,安宁的,爱好和平的"}
                   ,{"peach [pi:tʃ]","n.桃,桃树"}
                   ,{"peak [pi:k]","n.山顶,最高点;峰,山峰 a.高峰的,最高的"}
                   ,{"peanut ['pi:nʌt]","n.花生"}
                   ,{"pear [pεə]","n.梨子,梨树"}
                   ,{"pearl [pə:l]","n.珍珠"}
                   ,{"peasant ['pezənt]","n.(不用于英国或美国)小农;佃农;农民"}
                   ,{"pebble ['pebl]","n.卵石"}
                   ,{"peculiar [pi'kju:ljə]","a.古怪的,异常的;特殊的,特有的"}
                   ,{"pedal ['pedl]","n.踏板 v.踩踏板,骑自行车"}
                   ,{"pedestrian [pi'destriən]","n.步行者 a.徒步的,呆板的,通俗的"}
                   ,{"peel [pi:l]","v.削皮,剥皮 n.果皮"}
                   ,{"peep [pi:p]","v.偷看,窥视"}
                   ,{"peer [piə]","n.同辈,同等地位的人;贵族 v.凝视,隐约出现"}
                   ,{"pen [pen]","n.钢笔,圆珠笔,作家,围栏 vt.写,关入栏中"}
                   ,{"penalty ['penəlti]","n.处罚,刑罚,惩罚,罚金"}
                   ,{"pencil ['pensəl]","n.铅笔 vt.用铅笔写"}
                   ,{"pendulum ['pendjuləm,-dʒə-]","n.摆,钟摆"}
                   ,{"penetrate ['penitreit]","v.穿过,渗入,看穿"}
                   ,{"peninsula [pi'ninsjulə]","n.半岛"}
                   ,{"penny ['peni]","n.便士,美分"}
                   ,{"pension ['penʃən]","n.养老金,抚恤金"}
                   ,{"people ['pi:pl]","n.人们,人;[the-]人民;一国人民,民族"}
                   ,{"pepper ['pepə]","n.胡椒粉,胡椒;辣椒"}
                   ,{"per [强 pə:,弱 pə]","prep.每;经,由"}
                   ,{"perceive [pə'si:v]","v.察觉,感知;理解,领悟"}
                   ,{"percent [pə'sent]","n.(per cent)百分之...的"}
                   ,{"percentage [pə'sentidʒ]","n.百分数,百分率,百分比"}
                   ,{"perfect ['pə:fikt,pə'fekt]","a.完善的;完全的;(语法)完成的 v.使完美"}
                   ,{"perfection [pə'fekʃən]","n.尽善尽美,完美"}
                   ,{"perform [pə'fɔ:m]","v.履行,执行;表演,演出;完成(事业)"}
                   ,{"performance [pə'fɔ:məns]","n.履行,执行;表演,演出;性能,特性;成绩"}
                   ,{"perfume [pə'fju:m]","n.香味,芳香;香料 v.使发香,洒香水于"}
                   ,{"perhaps [pə'hæps,præps]","ad.也许,大概,恐怕"}
                   ,{"period ['piəriəd]","n.时期,时代;学时;周期,一段时间;句点"}
                   ,{"periodical [,piəri'ɔdikəl]","n.期刊,杂志 a.周期的,定期的"}
                   ,{"perish ['periʃ]","v.丧生;凋谢;毁灭,消亡"}
                   ,{"permanent ['pə:mənənt]","a.永久的,持久的"}
                   ,{"permeate ['pə:mieit]","v.弥漫,遍布,散布;渗入,渗透"}
                   ,{"permission [pə'miʃən]","n.允许,同意"}
                   ,{"permit [pə'mit]","v.许可,允许 n.许可证,执照"}
                   ,{"perpetual [pə'petʃuəl,-tju-]","a.永久的,永恒的,长期的"}
                   ,{"perplex [pə'pleks]","v.使困惑,使费解,使复杂化"}
                   ,{"persecute ['pə:sikju:t]","v.迫害"}
                   ,{"persevere [,pə:si'viə]","v.坚持,坚忍,不屈不挠"}
                   ,{"persist [pə'sist,-'zist]","v.(in)坚持,持续"}
                   ,{"person ['pə:sən]","n.人,喜欢(或适应)...的人;人物;人称"}
                   ,{"personal ['pə:sənl]","a.个人的,私人的;亲自的;身体的,人身的"}
                   ,{"personality [,pə:sə'næləti]","n.人格,个性"}
                   ,{"personnel [,pə:sə'nel]","n.全体人员,全体职员;人事(部门)"}
                   ,{"perspective [pə'spektiv]","n.透视画法,透视图;远景,前途;观点,看法"}
                   ,{"persuade [pə'sweid]","v.说服,劝说;(of)使相信"}
                   ,{"persuasion [pə'sweiʒən]","n.说服,说服力"}
                   ,{"pessimistic [,pesi'mistik]","a.悲观(主义)的"}
                   ,{"pest [pest]","n.害虫"}
                   ,{"pet [pet]","n.爱畜,宠儿 a.宠爱的,表示亲昵的"}
                   ,{"petition [pi'tiʃən]","n.请愿书,申请书 v.(向...)请愿,正式请求"}
                   ,{"petrol ['petrəl]","n.汽油"}
                   ,{"petroleum [pi'trəuliəm,pə-]","n.石油"}
                   ,{"petty ['peti]","a.小(器、规模)的,不重要的,细微的,卑鄙的"}
                   ,{"pharmacy ['fɑ:məsi]","n.药房,药剂学,制药业,配药业,一批备用药品"}
                   ,{"phase [feiz]","n.阶段,状态,时期;相,相位"}
                   ,{"phenomenon [fi'nɔminən,fə-]","n.现象,稀有现象,珍品,奇迹,杰出人才"}
                   ,{"philosopher [fi'lɔsəfə,fə-]","n.哲学家,哲人"}
                   ,{"philosophy [fi'lɔsəfi,fə-]","n.哲学,哲理,人生观,价值观,世界观"}
                   ,{"phone [fəun]","n.(telephone)电话,电话机,耳机 v.打电话"}
                   ,{"photo ['fəutəu]","n.(photograph)照片"}
                   ,{"phrase [freiz]","n.短语,词语,习语"}
                   ,{"physical ['fizikəl]","a.物质的;肉体的,身体的;自然科学的,物理的"}
                   ,{"physician [fi'ziʃən]","n.内科医生"}
                   ,{"physicist ['fizisist]","n.物理学家"}
                   ,{"physics ['fiziks]","n.物理(学)"}
                   ,{"physiological [,fiziə'lɔdʒikəl]","a.生理学的, 生理学上的"}
                   ,{"piano [pi'ænəu,pi'ɑ:-]","n.钢琴"}
                   ,{"pick [pik]","v.拾,采,摘;挑选,选择 n.镐,鹤嘴锄"}
                   ,{"pickup ['pikʌp]","n.拾起,获得"}
                   ,{"picnic ['piknik]","n.野餐 v.(去)野餐"}
                   ,{"picture ['piktʃə]","n.画,图片;影片;美景 v.画,描述,想象"}
                   ,{"pie [pai]","n.馅饼"}
                   ,{"piece [pi:s]","n.(一)件/片/篇;碎片 v.(together)拼合,拼凑"}
                   ,{"pierce [piəs]","v.剌穿,刺破"}
                   ,{"pig [piɡ]","n.猪,猪肉;猪一般的人(指肮脏,贪吃的人)"}
                   ,{"pigeon ['pidʒin]","n.鸽"}
                   ,{"pile [pail]","n.堆,大量,大数目 v.(up)堆,叠,堆积"}
                   ,{"pilgrim ['pilɡrim]","n.(在国外)旅游者;朝圣者,最初的移民"}
                   ,{"pill [pil]","n.药丸"}
                   ,{"pillar ['pilə]","n.柱,台柱,栋梁"}
                   ,{"pillow ['piləu]","n.枕头"}
                   ,{"pilot ['pailət]","n.飞行员;领港员 v.驾驶(飞机等);领航,引水"}
                   ,{"pin [pin]","n.钉;大头针,别针,徽章 v.(up)钉住,别住"}
                   ,{"pinch [pintʃ]","v.捏,掐,拧;收缩;紧急关头;匮乏;压力"}
                   ,{"pine [pain]","n.松树"}
                   ,{"pink [piŋk]","n.粉红色 a.粉红色的"}
                   ,{"pint [paint]","n.品脱（容量单位，主要在英国、美国及爱尔兰使用）"}
                   ,{"pioneer [,paiə'niə]","n.先驱,倡导者,开拓者"}
                   ,{"pipe [paip]","n.管子,导管;烟斗;笛"}
                   ,{"pirate ['paiərit]","n./v.海盗,盗版(者)"}
                   ,{"pistol ['pistl]","n.手枪"}
                   ,{"piston ['pistən]","n.活塞"}
                   ,{"pit [pit]","n.坑,陷阱;煤矿,矿井"}
                   ,{"pitch [pitʃ]","n.沥青;掷 v.用沥青覆盖;投掷,扔"}
                   ,{"pity ['piti]","v.(觉得)可怜,惋惜 n.憾事,怜悯"}
                   ,{"place [pleis]","n.地方;名次;地位;寓所 v.安排;放置;投(资)"}
                   ,{"plague [pleiɡ]","n.瘟疫,灾害,麻烦,苦恼 vt.折磨,使苦恼"}
                   ,{"plain [plein]","a.明白的;朴素的;坦率;平凡 n.平原,旷野"}
                   ,{"plan [plæn]","n.计划,规划;平面图,设计图 v.计划"}
                   ,{"plane [plein]","n.飞机;平面,水平面"}
                   ,{"planet ['plænit]","n.行星"}
                   ,{"plant [plɑ:nt,plænt]","n.植物,作物;工厂;装置 v.栽种,播种,栽培"}
                   ,{"plantation [plæn'teiʃən]","n.种植园"}
                   ,{"plaster ['plɑ:stə,'plæs-]","n.灰泥;熟石膏;膏药"}
                   ,{"plastic ['plæstik,'plɑ:s-]","n.(常 pl.)塑料,塑料制品 a.可塑的,塑性的"}
                   ,{"plate [pleit]","n.金属板,片;盘子,盆子;板,钢板 v.镀,电镀"}
                   ,{"plateau ['plætəu,plæ't-]","n.高原,平稳状态[时期]"}
                   ,{"platform ['plætfɔ:m]","n.平台,台;站台,月台;政纲,党纲"}
                   ,{"plausible ['plɔ:zəble]","a.似是而非的,似乎合理的,似乎可信的"}
                   ,{"play [plei]","v.玩,做游戏;参加比赛 n.游戏;玩耍;剧本"}
                   ,{"playground ['pleiɡraund]","n.运动场,游戏场"}
                   ,{"plea [pli:]","n.(法律)抗辩;请求,恳求,托词,口实"}
                   ,{"plead [pli:d]","v.恳求,请求;为...辩护;提出...为理由"}
                   ,{"pleasant ['plezənt]","a.令人愉快的 vt.使高兴 vi.满意;喜欢"}
                   ,{"please [pli:z]","v.请;使愉快,使满意;喜欢,愿意"}
                   ,{"pleasure ['pleʒə,'plei-]","n.愉快,快乐;乐事,乐趣"}
                   ,{"pledge [pledʒ]","n.誓约;保证 v.发誓;保证"}
                   ,{"plentiful ['plentiful]","a.富裕的,丰富的"}
                   ,{"plenty ['plenti]","n.丰富,大量"}
                   ,{"plight [plait]","n.情况,状态,困境,盟誓(婚姻) v.保证,约定"}
                   ,{"plot [plɔt]","n.秘密计划;情节 v.标绘,绘制;密谋,策划"}
                   ,{"plough [plau]","n.(plow)犁,耕地,犁过的地 v.犁,费力地前进"}
                   ,{"plug [plʌɡ]","n.塞子,插头 v.堵,塞,插上,插栓"}
                   ,{"plumber ['plʌmə]","n.(装修水管的)管子工"}
                   ,{"plunge [plʌndʒ]","v.(into)(使)投入,(使)插进,陷入;猛冲"}
                   ,{"plural ['pluərəl]","a.复数的 n.复数"}
                   ,{"plus [plʌs]","prep.加上 a.正的,加的 n.加号,正号"}
                   ,{"pneumonia [nju:'məunjə]","n.肺炎"}
                   ,{"pocket ['pɔkit]","n.衣袋 a.袖珍的,小型的 v.把...装入袋内"}
                   ,{"poem ['pəuim]","n.诗"}
                   ,{"poet ['pəuit]","n.诗人"}
                   ,{"poetry ['pəuitri]","n.诗歌,诗集"}
                   ,{"point [pɔint]","n.尖;点;条款;分数,得分;论点 v.(at,to)指"}
                   ,{"poison ['pɔizən]","n.毒物,毒药 v.放毒,毒害,污染"}
                   ,{"poisonous ['pɔizənəs]","a.有毒的,恶意的,恶毒的,道德败坏的"}
                   ,{"poke [pəuk]","n.刺,戳,懒汉,袋子 v.戳,刺,伸出,刺探,闲荡"}
                   ,{"polar ['pəulə]","a.两极的,极地的,南辕北辙的 n.极线,极面"}
                   ,{"pole [pəul]","n.柱,杆;地极,磁极,电极"}
                   ,{"police [pə'li:s]","n.警察,警察机关 a.警察的 v.管辖"}
                   ,{"policeman [pə'li:smən]","n.警察"}
                   ,{"policy ['pɔlisi]","n.政策,方针"}
                   ,{"polish ['pɔliʃ]","v.磨光,擦亮;使优美,润饰 n.擦光剂,上光蜡"}
                   ,{"polite ['pə:lait]","a.有礼貌的,客气的;有教养的,文雅的"}
                   ,{"political [pə'litikəl]","a.政治的"}
                   ,{"politician [,pɔli'tiʃən]","n.政治家,政客"}
                   ,{"politics ['pɔlitiks]","n.政治,政治学;政纲,政见"}
                   ,{"poll [pəul]","n.民意测验;(pl.)政治选举 v.获得...选票"}
                   ,{"pollute [pə'lu:t]","v.弄脏,污染"}
                   ,{"pollution [pə:'lu:ʃən]","n.污染"}
                   ,{"pond [pɔnd]","n.池塘"}
                   ,{"ponder ['pɔndə]","v.沉思,考虑"}
                   ,{"pool [pu:l]","n.水池,游泳池;合资经营 v.合伙经营,联营"}
                   ,{"poor [puə,pɔ:]","a.贫困的;可怜的;贫乏的;贫瘠的;低劣的"}
                   ,{"pop [pɔp]","a.流行的 n.(发出)砰的一声 v.突然出现"}
                   ,{"pope [pəup]","n.罗马教皇,主教,大腿上要害部位"}
                   ,{"popular ['pɔpjulə]","a.流行的,通俗的,大众的;广受欢迎的"}
                   ,{"population [,pɔpju'leiʃən]","n.人口,(全体)居民"}
                   ,{"porcelain ['pɔ:səlin,-lein]","n.瓷器 a.精制的,瓷器的"}
                   ,{"porch [pɔ:tʃ]","n.门廊,入口处"}
                   ,{"pork [pɔ:k]","n.猪肉"}
                   ,{"port [pɔ:t,pəut]","n.港口"}
                   ,{"portable ['pɔ:təbl,'pəu-]","a.轻便的,手提(式)的,可移动的"}
                   ,{"porter ['pɔ:tə,'pəu-]","n.守门人,门房,行李搬运工,服务员"}
                   ,{"portion ['pɔ:ʃən,'pəu-]","n.一部分,一份"}
                   ,{"portrait ['pɔ:trit,-treit,'pəu-]","n.肖像,画像"}
                   ,{"portray [pɔ:'trei,pəu-]","v.描写,描述;画(人物、景象等)"}
                   ,{"pose [pəuz]","n.姿势,姿态 v.造成,提出,摆姿势,佯装"}
                   ,{"position [pə'ziʃən]","n.位置;职位;姿势,姿态;见解,立场,形势"}
                   ,{"positive ['pɔzətiv,-zi-]","a.肯定的,积极的,绝对的,无疑的,正的"}
                   ,{"possess [pə'zes]","v.占有,拥有"}
                   ,{"possession [pə'zeʃən]","n.持有,拥有;所有权;所有物;(pl.)财产,财富"}
                   ,{"possibility [,pɔsə'biləti]","n.可能,可能性;可能的事,希望"}
                   ,{"possible ['pɔsəbl]","a.可能的,做得到的;合理的;可允许的"}
                   ,{"possibly ['pɔsəbli]","ad.可能地,也许;无论如何"}
                   ,{"post [pəust]","v.贴出;公告;投寄 n.(支)柱;邮政,邮寄;职位"}
                   ,{"postage ['pəustidʒ]","n.邮费,邮资"}
                   ,{"postcard ['pəʊstkɑːd]","n.明信片"}
                   ,{"poster ['pəustə]","n 海报,张贴的大幅广告"}
                   ,{"postman ['pəustmən]","n.邮递员"}
                   ,{"postpone [pəust'pəun,pə'sp-]","v.推迟,延期"}
                   ,{"posture ['pɔstʃə]","n.姿势,姿态,心态,态度 v.作出某种姿势"}
                   ,{"pot [pɔt]","n.罐,壶"}
                   ,{"potato [pə'teitəu]","n.马铃薯,土豆"}
                   ,{"potential [pəu'tenʃəl]","a.潜在的,可能的 n.潜能,潜力"}
                   ,{"poultry ['pəultri]","n.家禽"}
                   ,{"pound [paund]","n.磅;英镑 v.(连续)猛击,(猛烈)敲打,捣碎"}
                   ,{"pour [pɔ:]","v.灌注, 倾泻, 涌入, 流, 倾盆大雨"}
                   ,{"poverty ['pɔvəti]","n.贫穷,贫困"}
                   ,{"powder ['paudə]","n.粉末,药粉;火药,炸药"}
                   ,{"power [pauə]","n.力,精力;功率,电力;(数学)幂;权力,势力"}
                   ,{"powerful ['pauəful]","a.强大的,有力的,有权的"}
                   ,{"practical ['præktikəl]","a.实际的,实用的"}
                   ,{"practically ['præktikəli]","ad.几乎,实际上,简直"}
                   ,{"practice ['præktis]","n.练习,实践,实际,业务,惯例,习惯"}
                   ,{"practise ['præktis]","v.练习,实习,实践,实行,使...练习,训练"}
                   ,{"practitioner [præk'tiʃənə]","n.实践者,从事者;(医生或律师等)开业者"}
                   ,{"praise [preiz]","v.赞扬,歌颂;表扬 n.称赞,赞美;赞美的话"}
                   ,{"pray [prei]","v.请求,恳求;祈祷,祈求"}
                   ,{"prayer [preə]","n.祈祷,祷告,祷文"}
                   ,{"preach [pri:tʃ]","v.宣讲(教义),布道;竭力鼓吹,宣传;说教"}
                   ,{"precaution [pri'kɔ:ʃən]","n.预防,谨慎,警惕"}
                   ,{"precede [pri:'si:d,pri-]","v.领先(于),在(...之前);优先,先于"}
                   ,{"precedent [pri'si:dənt,'presi-]","n.先例"}
                   ,{"preceding [pri'si:diŋ,'pri:-]","a.在前的,在先的"}
                   ,{"precious ['preʃəs]","a.珍贵的,贵重的"}
                   ,{"precise [pri'sais]","a.精确的,准确的"}
                   ,{"precision [pri'siʒən]","n.精确,精确度"}
                   ,{"preclude [pri'klu:d]","v.排除,阻止,妨碍"}
                   ,{"predecessor ['pri:disesə,'pre-]","n.前辈,前任"}
                   ,{"predict [pri'dikt]","v.预言,预测,预告"}
                   ,{"predominant [,pri'dɔminənt]","a.(over)占优势的;主要的,突出的"}
                   ,{"preface ['prefis]","n.序言,引言,前言 v.作序,写前言"}
                   ,{"prefer [pri'fə:]","v.(to)更喜欢,宁愿"}
                   ,{"preferable ['prefərəbl]","a.(to)更可取的,更好的"}
                   ,{"preference ['prefərəns]","n.(for,to)偏爱,喜爱;优惠;优先选择"}
                   ,{"pregnant ['preɡnənt]","a.怀孕的,孕育的,充满的,意味深长的"}
                   ,{"prejudice ['predʒudis]","n.偏见,成见;损害,侵害 v.使抱偏见,损害"}
                   ,{"preliminary [pri'liminəri]","a.预备的,初步的"}
                   ,{"premier ['premjə,pri'miə]","n.首相,总理"}
                   ,{"premise [pri'maiz,'premis]","n.前提,房屋连地基 v.提论,预述,假定"}
                   ,{"premium ['pri:miəm]","n.额外费用,奖金,奖赏,保险费"}
                   ,{"preparation [,prepə'reiʃən]","n.准备,预备;制剂,制备品"}
                   ,{"prepare [pri'pεə]","v.准备,预备"}
                   ,{"preposition [,prepə'ziʃən]","n.介词"}
                   ,{"prescribe [pris'kraib]","v.指示,规定;处(方),开(药)"}
                   ,{"prescription [pris'kripʃən]","n.药方,处方"}
                   ,{"presence ['prezəns]","n.出席,到场,存在,在"}
                   ,{"present ['prezənt,pri'zent]","a.出席的,现在的 n.现在,礼物 v.赠送,提出"}
                   ,{"presently ['prezəntli]","ad.一会儿,不久;现在,目前"}
                   ,{"preserve [pri'zə:v]","v.保护,维持;保存,保藏"}
                   ,{"preside [pri'zaid]","v.(at,over)主持"}
                   ,{"president ['prezidənt]","n.总统,校长,会长,主席"}
                   ,{"press [pres]","v.压;压榨;紧迫,催促 n.报刊,通讯社;压榨机"}
                   ,{"pressure ['preʃə]","n.压,压力,压迫,强制,紧迫,困苦,困难"}
                   ,{"prestige [pre'sti:ʒ]","n.声望,威望,威信"}
                   ,{"presumably [pri'zju:-məbli,pri:-]","ad.推测起来,大概"}
                   ,{"presume [pri'zju:m,-'zu:m]","v.假定,假设,认为,揣测,滥用,擅自行动"}
                   ,{"pretend [pri'tend,pri:-]","v.假装,假托,借口,(在演戏中)装扮"}
                   ,{"pretext ['pri:tekst]","n.借口,托词"}
                   ,{"pretty ['priti]","ad.相当,很 a.漂亮的,俊俏的,标致的"}
                   ,{"prevail [pri'veil,pri:-]","v.(over,against)取胜,占优势;流行,盛行"}
                   ,{"prevalent ['prevələnt]","a.流行的,普遍的"}
                   ,{"prevent [pri'vent,pri:-]","v.(from)预防,防止,阻止,制止,妨碍"}
                   ,{"previous ['pri:vjəs]","a.先前的,以前的"}
                   ,{"prey [prei]","n.被掠食者,牺牲者,掠食 v.捕食,掠夺,折磨"}
                   ,{"price [prais]","n.价格,价钱;代价 v.标价"}
                   ,{"prick [prik]","n./v.刺伤,刺痛,刺孔"}
                   ,{"pride [praid]","n.自豪;自满;引以自豪的东西 v.使自豪"}
                   ,{"priest [pri:st]","n.教士,神父"}
                   ,{"primary ['praiməri]","a.最初的,初级的;首要的,主要的,基本的"}
                   ,{"prime [praim]","a.首要的;最好的,第一流的 n.青春,全盛期"}
                   ,{"primitive ['primitiv]","a.原始的,远古的,早期的;粗糙的,简单的"}
                   ,{"prince [prins]","n.王子,亲王"}
                   ,{"princess [prin'ses,'prinsis]","n.公主,王妃"}
                   ,{"principal ['prinsəpəl]","a.最重要的,主要的 n.负责人,校长;资本,本金"}
                   ,{"principle ['prinsəpl]","n.原理,原则;主义,信念"}
                   ,{"print [print]","n.印刷,印刷品,字体 v.印刷,出版;洗印"}
                   ,{"prior ['praiə]","a.优先的,在前的;(to)在...之前"}
                   ,{"priority [prai'ɔrəti]","n.先,前;优先,重点,优先权"}
                   ,{"prison ['prizən]","n.监狱"}
                   ,{"prisoner ['prizənə]","n.囚犯"}
                   ,{"privacy ['praivəsi,'pri-]","n.(不受干扰的)独处,自由,隐私,私生活"}
                   ,{"private ['praɪvət]","a.私人的,个人的,秘密的,私下的"}
                   ,{"privilege ['privilidʒ]","n.特权,优惠,特许 v.给予优惠,给予特权"}
                   ,{"prize [praiz]","n.奖赏,奖金,奖品 v.珍视,珍惜"}
                   ,{"probability [,prɔbə'biləti]","n.可能性,或然性,概率"}
                   ,{"probable ['prɔbəbl]","a.很可能的,大概的;有希望的,可能的"}
                   ,{"probe [prəub]","n.探针,探测器 v.(以探针等)探查,穿刺,查究"}
                   ,{"problem ['prɔbləm]","n.问题,疑难问题;思考题,讨论题"}
                   ,{"procedure [prə'si:dʒə]","n.程序,手续,步骤"}
                   ,{"proceed [prəu'si:d]","v.进行,继续下去;发生"}
                   ,{"proceeding [prəu'si:diŋ]","n.行动,进行,(pl.)会议录,学报"}
                   ,{"process ['prəuses,'prɔ-]","n.过程,进程;工序,制作法;工艺v.加工,处理"}
                   ,{"procession [prəu'seʃən]","n.队伍,行列"}
                   ,{"proclaim [prəu'kleim]","v.宣告,声明"}
                   ,{"produce [prəu'dju:s,'prɔdju:s]","v.生产,制造,显示,演出,导致 n.产品"}
                   ,{"product ['prɔdəkt,-ʌkt]","n.产品,产物;乘积"}
                   ,{"production [prəu'dʌkʃən]","n.生产,产品,作品,(研究)成果,总产量"}
                   ,{"productive [prəu'dʌktiv]","a.生产(性)的,能产的,多产的"}
                   ,{"productivity [,prɔdʌk'tivəti,prəu-]","n.生产率"}
                   ,{"profession [prəu'feʃən]","n.职业,专业,表白,宣布"}
                   ,{"professional [prəu'feʃənəl]","a.职业的,专门的 n.自由职业者,专业人员"}
                   ,{"professor [prəu'fesə]","n.教授"}
                   ,{"proficiency [prəu'fiʃənsi]","n.(in)熟练,精通"}
                   ,{"profile ['prəufail]","n.侧面(像);轮廓,外形;人物简介"}
                   ,{"profit ['prɔfit]","n.利润,收益 v.(by,from)得利,获益;有利于"}
                   ,{"profitable ['prɔfitəbl]","a.有利可图的,有益的"}
                   ,{"profound [prəu'faund]","a.深刻的,意义深远的;渊博的,造诣深的"}
                   ,{"programme ['prəuɡræm,-ɡrəm]","n.(program)节目,计划,规划,程序 v.编程序"}
                   ,{"progress ['prəuɡres,prəu'ɡres]","v./n.进步,进展;前进"}
                   ,{"progressive [prəu'ɡresiv]","a.进步的,先进的;前进的"}
                   ,{"prohibit [prəu'hibit]","v.禁止,不准;阻止"}
                   ,{"project ['prɔdʒekt,prə'dʒekt]","n.方案,工程,项目 v.投射,放映;设计,规划"}
                   ,{"projector [prəu'dʒektə]","n.放映机,幻灯机,投影仪"}
                   ,{"prolong [prə'lɔŋ]","v.拉长,延长,拖延"}
                   ,{"prominent ['prɔminənt]","a.突起的,凸出的;突出的,杰出的"}
                   ,{"promise ['prɔmis]","v.允许,答应;有...可能 n.承诺;希望,出息"}
                   ,{"promising ['prɔmisiŋ]","a.有希望的,有前途的"}
                   ,{"promote [prəu'məut]","v.促进,发扬;提升,提拔;增进,助长"}
                   ,{"prompt [prɔmpt]","a.敏捷的,迅速的,即刻的 v.激起,促进,推动"}
                   ,{"prone [prəun]","a.倾向于,俯伏的,倾斜的,陡的"}
                   ,{"pronoun ['prəunaun]","n.代词"}
                   ,{"pronounce [prəu'nauns]","v.发...的音;宣布,宣判"}
                   ,{"pronunciation [prəu,nʌnsi'eiʃən]","n.发音,发音方法"}
                   ,{"proof [pru:f]","n.证据,证明;校样,样张"}
                   ,{"propaganda [,prɔpə'ɡændə]","n.宣传(机构);[天主教]传道总会"}
                   ,{"propel [prəu'pel]","vt.推进,推动;激励,驱使"}
                   ,{"proper ['prɔpə]","a.适合的;合乎体统的;固有的;有礼貌的"}
                   ,{"property ['prɔpəti]","n.财产,资产,地产,房地产,所有物;性质,特性"}
                   ,{"prophet ['prɔfit]","n.预言家;先知;提倡者"}
                   ,{"proportion [prəu'pɔ:ʃən]","n.比例;部分;均衡,相称"}
                   ,{"proposal [prəu'pəuzəl]","n.提议,建议;求婚"}
                   ,{"propose [prəu'pəuz]","v.提议,建议;提名,推荐;求婚"}
                   ,{"proposition [,prɔpə'ziʃən]","n.主张,建议;陈述,命题"}
                   ,{"prose [prəuz]","n.散文 a.散文的"}
                   ,{"prosecute ['prɔsikju:t]","vt.实行,从事 v.起诉,告发 vi.作检察官"}
                   ,{"prospect ['prɔspekt]","n.景色;前景,前途,展望"}
                   ,{"prospective [prəu'spektiv]","a.预期的"}
                   ,{"prosper ['prɔspə]","v.成功,兴隆,昌盛,使成功,使昌隆,繁荣"}
                   ,{"prosperity [prɔs'periti]","n.繁荣,兴旺"}
                   ,{"prosperous ['prɔspərəs]","a.繁荣的,兴旺的,茂盛的,顺利的"}
                   ,{"protect [prə'tekt]","v.(from)保护,保卫"}
                   ,{"protein ['prəuti:n,-ti:in]","n.蛋白质"}
                   ,{"protest [prəu'test,'prəu-]","v./n.主张,断言,抗议,反对"}
                   ,{"prototype ['prəutətaip]","n.原型;典型,范例"}
                   ,{"proud [praud]","a.(of)自豪的;引以自豪的;妄自尊大的"}
                   ,{"prove [pru:v]","v.证明,证实;检验;考验;鉴定;结果是,表明是"}
                   ,{"provide [prəu'vaid]","v.供应,供给,准备,预防,规定"}
                   ,{"provided [prə'vaɪdɪd]","conj.倘若,只要,假如 a.预备好的；提供的"}
                   ,{"province ['prɔvins]","n.省;领域,范围,本分"}
                   ,{"provision [prəu'viʒən]","n.供应,(一批)供应品;预备;条款;(pl.)给养"}
                   ,{"provoke [prəu'vəuk]","v.挑动;激发;招惹"}
                   ,{"prudent ['pru:dənt]","a.谨慎的,智慧的,稳健的,节俭的"}
                   ,{"psychiatry [psai'kaiətri,psi-]","n.精神病学,精神病疗法"}
                   ,{"psychology [psai'kɔlədʒi]","n.心理,心理学,心理状态"}
                   ,{"pub [pʌb]","n.(英国)小酒店;小旅馆"}
                   ,{"public ['pʌblik]","a.公共的,公用的;公开的,公然的 n.公众,民众"}
                   ,{"publication [,pʌbli'keiʃən]","n.出版物;出版,发行;公布,发表"}
                   ,{"publicity [pʌb'lisiti]","n.公开,宣传,广告,推销"}
                   ,{"publish ['pʌbliʃ]","v.出版,刊印;公布,发布"}
                   ,{"puff [pʌf]","n.一阵,一股(气味等);喘息;吹嘘 v.喘息,鼓吹"}
                   ,{"pull [pul]","v.拉,拖 n.拉,拖;拉力,牵引力"}
                   ,{"pulse [pʌls]","n.脉搏,脉冲"}
                   ,{"pump [pʌmp]","n.泵 v.用(泵)抽(水);打气,泵送"}
                   ,{"punch [pʌntʃ]","n.冲压机,冲床;穿孔机 v.冲压,穿孔"}
                   ,{"punctual ['pʌŋktjuəl,-tʃuəl]","a.严守时刻的,准时的,正点的"}
                   ,{"punish ['pʌniʃ]","v.惩罚,处罚"}
                   ,{"pupil ['pjupəl]","n.学生,小学生;瞳孔"}
                   ,{"puppet ['pʌpit]","n.木偶,傀儡"}
                   ,{"purchase ['pə:tʃəs]","v.买,购买 n.购买的物品"}
                   ,{"pure [pjuə]","a.纯的,纯洁的;纯理论的,抽象的;完全的"}
                   ,{"purify ['pjuərifai]","v.使纯净,提纯"}
                   ,{"purple ['pə:pl]","a.紫的 n.紫色"}
                   ,{"purpose ['pə:pəs]","n.目的,意图;用途,效果"}
                   ,{"purse [pə:s]","n.钱包"}
                   ,{"pursue [pə'sju:,-'su:]","v.追赶,追踪;继续,从事"}
                   ,{"pursuit [pə'sju:t]","n.追赶,追求;职业,工作"}
                   ,{"push [puʃ]","v.推;催逼,逼迫 n.推,推力;促进,推进"}
                   ,{"put [put]","vt.放,搁,置;表达;使处于...状态,记下"}
                   ,{"puzzle ['pʌzl]","n.难题,谜,迷惑 v.(使)迷惑,(使)为难"}
                   ,{"pyramid ['pirəmid]","n.金字塔"}
                   ,{"qualification [,kwɔlifi'keiʃən]","n.资格,合格;限定,条件;合格证"}
                   ,{"qualify ['kwɔlifai]","v.(使)具有资格,证明合格;限制,限定;修饰"}
                   ,{"qualitative ['kwɔlitətiv,-tei-]","a.性质上的,定性的"}
                   ,{"quality ['kwɔləti]","n.质量,品质,特性"}
                   ,{"quantify ['kwɔntifai]","v.确定数量"}
                   ,{"quantitative ['kwɔntitətiv,-tei-]","a.数量的,定量的"}
                   ,{"quantity ['kwɔntəti]","n.量,数量;大量"}
                   ,{"quarrel ['kwɔ:rəl]","v.争吵,争论 n.争吵,争吵的原因"}
                   ,{"quart [kwɔ:t]","n.夸脱（容量单位）"}
                   ,{"quarter ['kwɔ:tə]","n.四分之一;季;一刻钟;(pl.)方向;(pl.)住处"}
                   ,{"quarterly ['kwɔ:təli]","a.每季的 ad.每季一次 n.季刊"}
                   ,{"quartz [kwɔ:ts]","n.石英"}
                   ,{"queen [kwi:n]","n.女王,皇后,王后"}
                   ,{"queer [kwiə]","a.奇怪的,古怪的"}
                   ,{"quench [kwentʃ]","v.熄灭,扑灭,压制,抑制,止渴"}
                   ,{"quest [kwest]","n.探寻,探求;寻求,追求"}
                   ,{"question ['kwestʃən]","n.问题;询问 v.询问;怀疑,对„表示疑问"}
                   ,{"questionnaire [,kwestʃə'nεə,kes-]","n.调查表,问卷"}
                   ,{"queue [kju:]","n.行列,长队 v.(up)排队,排队等待"}
                   ,{"quick [kwik]","a.快的;灵敏的,伶俐的;敏锐的 ad.快,迅速地"}
                   ,{"quiet ['kwaiət]","a.安静的,平静的 n.安静 v.使安静,平静"}
                   ,{"quilt [kwilt]","n.被子"}
                   ,{"quit [kwit]","v.离开,退出;停止,放弃,辞职"}
                   ,{"quite [kwait]","ad.十分,完全;相当,颇;的确,真正"}
                   ,{"quiver ['kwivə]","v./n.颤抖,抖动"}
                   ,{"quiz [kwiz]","n.小型考试,测验,问答比赛"}
                   ,{"quota ['kwəutə]","n.(生产、进出口等的)配额,(移民的)限额"}
                   ,{"quote [kwəut,kəut]","v.引用,援引"}
                   ,{"rabbit ['ræbit]","n.兔子"}
                   ,{"race [reis]","n.赛跑;人种,种族;属,种 v.赛跑"}
                   ,{"racial ['reiʃəl]","a.种的,种族的"}
                   ,{"rack [ræk]","n.挂物架,搁物架 v.使痛苦,折磨"}
                   ,{"racket ['rækit]","n.球拍"}
                   ,{"radar ['reidə]","n.雷达"}
                   ,{"radiant ['reidiənt]","a.发光的,辐射的,容光焕发的"}
                   ,{"radiate ['reidieit]","v.放射,辐射;散布,传播"}
                   ,{"radical ['rædikəl]","a.基本的,重要的;激进的,极端的;根本的"}
                   ,{"radio ['reidiəu]","n.收音机;无线电报,无线电话 v.无线电通讯"}
                   ,{"radioactive [,reidiəu'æktiv]","a.放射性,放射引起的"}
                   ,{"radius ['reidiəs]","n.半径,半径范围,有效航程,范围,界限"}
                   ,{"rag [ræɡ]","n.抹布,破布,碎布"}
                   ,{"rage [reidʒ]","n.愤怒"}
                   ,{"raid [reid]","n/v..袭击,搜查"}
                   ,{"rail [reil]","n.栏杆,围栏;(pl.)铁路;铁轨;横杆,栏杆"}
                   ,{"railroad ['reilrəud]","n.(railway)铁路 v.由铁道运输"}
                   ,{"rain [rein]","n.雨;雨天;下雨 vi.下雨 vt.使大量落下"}
                   ,{"rainbow ['reinbəu]","n.虹"}
                   ,{"raise [reiz]","v.举起,提升;增加;饲养;引起;竖起;提出"}
                   ,{"rake [reik]","n.耙子,耙机 v.耙;搜索,探索"}
                   ,{"rally ['ræli]","v.重整,恢复,振作 n.聚集,集会,拉力赛"}
                   ,{"random ['rændəm]","a.随机的,随意的 n.随机,随意"}
                   ,{"range [reindʒ]","n.范围,领域;排列,连续;(山)脉 v.排列成行"}
                   ,{"rank [ræŋk]","n.军衔,社会阶层;排 v.分等级,把...分类"}
                   ,{"rap [ræp]","n.叩击,轻拍,斥责 v.敲,拍,打,斥责,使着迷"}
                   ,{"rape [reip]","n./vt.掠夺,蹂躏,强奸"}
                   ,{"rapid ['ræpid]","a.快,急速的 n.(pl.)急流,湍滩"}
                   ,{"rare [rεə]","a.稀有的,难得的,珍奇的;稀薄的,稀疏的"}
                   ,{"rarely ['rεəli]","ad.很少,难得,非常地"}
                   ,{"rash [ræʃ]","a.轻率的,鲁莽的 n.皮疹"}
                   ,{"rat [ræt]","n.鼠"}
                   ,{"rate [reit]","n.速率;等级;价格,费用 v.估价;评级,评价"}
                   ,{"rather ['rɑ:ðə,'ræ-]","ad.相当,有一点儿;宁愿,宁可"}
                   ,{"ratio ['reiʃiəu,-ʃəu]","n.比,比率"}
                   ,{"rational ['ræʃənəl]","a.理性的,合理的"}
                   ,{"raw [rɔ:]","a.未煮过的,生的;未加工过的,未经训练的"}
                   ,{"ray [rei]","n.光线,射线"}
                   ,{"razor ['reizə]","n.剃刀"}
                   ,{"reach [ri:tʃ]","v.抵达;(out)伸手,够到 n.能达到的范围"}
                   ,{"react [ri'ækt,ri:-]","v.反应,起作用;(against)反对,起反作用"}
                   ,{"read [ri:d]","v.朗读;阅读 vt.辨认,观察 vi.读到,获悉"}
                   ,{"reader ['ri:də]","n.读者;读本,读物;(英国的)大学讲师"}
                   ,{"readily ['redili]","ad.容易地;乐意地,欣然地"}
                   ,{"reading ['ri:diŋ]","n.读书,读物,(仪表等的)读数,阅读"}
                   ,{"ready ['redi]","a.(for)准备好的,现成的;甘心的"}
                   ,{"real ['riəl,ri:l]","a.真的,真实的;实际的,现实的"}
                   ,{"realise ['riəlaiz,'ri:-]","v.(realize)认识到,体会到;实现"}
                   ,{"realistic [,riə'listik,ri:-]","a.现实(主义)的"}
                   ,{"reality [ri'æləti,ri:-]","n.现实,实际;真实"}
                   ,{"really ['riəli,'ri:li]","ad.确实,实在,真正地,果然"}
                   ,{"realm [relm]","n.王国,国土;领域"}
                   ,{"reap [ri:p]","v.收割,收获"}
                   ,{"rear [riə]","a.后面的；后方的；背面的 n.后面,背后,后方 v.饲养,抚养,栽培,举起"}
                   ,{"reason ['ri:zən]","n.原因,理性,理智 v.推理,说服,辩论,讨论"}
                   ,{"reasonable ['ri:zənəbl]","a.合理的,有道理的;通情达理的;适度的"}
                   ,{"reassure [,ri:ə'ʃuə]","v.使安心,使放心;使消除疑虑"}
                   ,{"rebel ['rebəl,ri'bel]","v.反抗,反叛,起义 n.叛逆者,起义者"}
                   ,{"rebellion [ri'beljən]","n.叛乱,反抗,起义"}
                   ,{"recall [ri'kɔ:l,'ri:kɔ:l]","v.回忆,回想;撤消,收回"}
                   ,{"recede [ri'si:d]","v.退回,后退;收回,撤回;跌落,缩减,贬值"}
                   ,{"receipt [ri'si:t]","n.收据,收条;收到,接到"}
                   ,{"receive [ri'si:v]","v.收到,接到;遭受,受到;接待,接见"}
                   ,{"recent ['ri:sənt]","a.新近的,近来的"}
                   ,{"reception [ri'sepʃən]","n.接待,招待会;接收,接受,接收效果"}
                   ,{"recipe ['resipi]","n.烹饪法,食谱;诀窍,方法"}
                   ,{"recipient [ri'sipiənt]","a.接受的,感受性强的 n.接受者,感受者,容器"}
                   ,{"reciprocal [ri'siprəkəl]","a.相互的,往复的,互利的"}
                   ,{"recite [ri'sait]","v.背诵,朗诵"}
                   ,{"reckless ['reklis]","a.不注意的,大意的,卤莽的,不顾后果的"}
                   ,{"reckon ['rekən]","v.计算,总计,估计,猜想,依赖"}
                   ,{"reclaim [ri'kleim]","v.要求归还,收回;开垦"}
                   ,{"recognition [,rekəg'niʃən]","n.认出,辨认;承认"}
                   ,{"recognize ['rekəɡnaiz]","v.(recognise)认出,承认,公认,赏识,表扬"}
                   ,{"recollect [,rekə'lekt]","v.回忆,想起,记起,忆起,记得"}
                   ,{"recommend [,rekə'mend]","v.推荐,介绍;劝告,建议"}
                   ,{"reconcile ['rekənsail]","v.使和好,调解,使调和;(to,with)使一致"}
                   ,{"record [ri'kɔ:d,'rekɔ:d]","n.记录;最高记录;履历;唱片 v.记录;录音"}
                   ,{"recorder [ri'kɔ:də]","n.记录员;录音机"}
                   ,{"recover [ri'kʌvə]","v.收回;(from)恢复,痊愈;重新获得"}
                   ,{"recovery [ri'kʌvəri]","n.痊愈,复元;重获,恢复"}
                   ,{"recreation [,rekri'eiʃən,-kri:-]","n.娱乐,消遣"}
                   ,{"recruit [ri'kru:t]","v.征募(新兵),吸收;补充 n.新成员,新兵"}
                   ,{"rectangle ['rek,tæŋɡl]","n.[数]矩形, 长方形"}
                   ,{"rectify ['rektifai]","v.纠正,整顿, [化]精馏"}
                   ,{"recur [ri'kə:]","v.(尤指不好的事)一再发生;重现"}
                   ,{"recycle [,ri:'saikl]","v./n.再循环,重复利用"}
                   ,{"red [red]","a.红的,红色的 n.红色;红色颜料"}
                   ,{"reduce [ri'dju:s,-'du:s]","v.减少,缩小;简化,还原"}
                   ,{"reduction [ri'dʌkʃən]","n.减小,减少,缩小"}
                   ,{"redundant [ri'dʌndənt]","a.多余的,过剩的;(食物)丰富的;被解雇的"}
                   ,{"reed [ri:d]","n.芦苇,苇丛;芦笛,牧笛"}
                   ,{"reel [ri:l,riəl]","n.卷筒,线轴 v.卷,绕"}
                   ,{"refer [ri'fə:]","v.参考,查询;提到,引用,涉及;提交,上呈"}
                   ,{"reference ['refərəns]","n.提及,涉及;参考,参考书目;证明书(人)"}
                   ,{"refine [ri'fain]","v.精炼,精制,提纯;使文雅,使高尚"}
                   ,{"reflect [ri'flekt]","v.反射,反映,表现,反省,沉思"}
                   ,{"reflection [re'flekʃən]","n.(reflexion)映像,倒影;反省,沉思"}
                   ,{"reform [ri'fɔ:m]","v./n.改革,改造,改良"}
                   ,{"refrain [,ri:'frein]","v.节制,避免,制止 n.(诗的)叠句"}
                   ,{"refresh [ri'freʃ,ri:-]","v.(使)精神振作,(使)精力恢复"}
                   ,{"refreshment [ri'freʃmənt,ri:-]","n.(pl.)点心,饮料;精力恢复,爽快"}
                   ,{"refuge ['refju:dʒ]","n.避难处,藏身处"}
                   ,{"refugee [,refju'dʒi:,'refjudʒi:]","n.(政治上的)避难者,难民"}
                   ,{"refund [ri'fʌnd]","n.归还,偿还额,退款 v.退还,偿还,偿付"}
                   ,{"refusal [ri'fju:zəl,ri:-]","n.拒绝,回绝"}
                   ,{"refuse [ri'fju:z,ri:-]","v.拒绝,谢绝 n.废物,垃圾"}
                   ,{"refute [ri'fju:t,ri:-]","v.反驳,驳斥"}
                   ,{"regard [ri'ɡɑ:d,ri:-]","v.(as)把...看作为;考虑 n.(pl.)敬重,问候"}
                   ,{"regarding [ri'ɡɑ:diŋ,ri:-]","prep.关于,有关"}
                   ,{"regardless [ri'ɡɑ:dlis,ri:-]","a./ad.不管...的,不顾...的,不注意的"}
                   ,{"regime [rei'ʒi:m,ri-,ri'dʒi:m]","n.政体,制度"}
                   ,{"region ['ri:dʒən]","n.地区,地带,行政区,(科学等)领域"}
                   ,{"register ['redʒistə]","n./v.登记,注册 v.(仪表等)指示,(邮件)挂号"}
                   ,{"regret [ri'ɡret]","v./n.遗憾,懊悔,抱歉"}
                   ,{"regular ['reɡjulə]","a.有规律的;整齐的,匀称的,正规的,正式的"}
                   ,{"regulate ['reɡjuleit]","v.管制,控制;调节,校准;调整"}
                   ,{"regulation [,reɡju'leiʃən]","n.规则,规章;调节,校准;调整"}
                   ,{"rehearsal [ri'hə:səl]","n.排练,排演,演习,预演,试演"}
                   ,{"reign [rein]","n./v.统治,支配,盛行 n.统治时期 v.占优势"}
                   ,{"rein [rein]","n.缰绳,统治,支配 v.驾驭,控制,统治"}
                   ,{"reinforce [,ri:in'fɔ:s]","v.增援,加强"}
                   ,{"reject [ri'dʒekt]","v.拒绝,抵制,丢弃,排斥,退掉 n.落选者"}
                   ,{"rejoice [ri'dʒɔis]","v.(使)欣喜,(使)高兴"}
                   ,{"relate [ri'leit]","v.叙述,讲述;使互相关联"}
                   ,{"relation [ri'leiʃən]","n.关系,联系;亲属,亲戚"}
                   ,{"relationship [ri'leiʃənʃip]","n.关系,联系"}
                   ,{"relative ['relətiv]","a.相对的,比较的,有关系的 n.亲戚,关系词"}
                   ,{"relativity [,relə'tivəti]","n.相关(性);相对论"}
                   ,{"relax [ri'læks]","v.(使)松驰,放松"}
                   ,{"relay ['ri:lei,ri'lei]","v.中继,转播,接力 n.接替人员,替班"}
                   ,{"release [ri'li:s]","v.释放,解放;发表,发行 n.释放,豁免,放松"}
                   ,{"relevant ['reləvənt]","a.有关的,中肯的,相应的,实质性的"}
                   ,{"reliable [ri'laiəbl]","a.可靠的,可信赖的,确实的"}
                   ,{"reliance [ri'laiəns]","n.信任,信心,依靠,依靠的人或物"}
                   ,{"relief [ri'li:f]","n.(痛苦等)减轻,解除;援救,救济"}
                   ,{"relieve [ri'li:v]","v.减轻,解除,援救,救济,换班"}
                   ,{"religion [ri'lidʒən]","n.宗教,信仰"}
                   ,{"religious [ri'lidʒəs]","a.宗教的,信教的,虔诚的"}
                   ,{"relish ['reliʃ]","n.美味,味道,调味品,食欲,乐趣 v.喜欢,品味"}
                   ,{"reluctant [ri'lʌktənt]","a.不愿的,勉强的"}
                   ,{"rely [ri'lai]","v.(on)依赖,依靠;信赖,信任"}
                   ,{"remain [ri'mein]","v.剩下,余留;留待,尚须;仍然是,依旧是"}
                   ,{"remainder [ri'meində]","n.剩余物,剩下的;余数,余项"}
                   ,{"remains [ri'meinz]","n.(pl.)剩余,残余,遗迹"}
                   ,{"remark [ri'mɑ:k]","n.(about,on)评语,意见 v.(on)评论;注意到"}
                   ,{"remarkable [ri'mɑ:kəbl]","a.值得注意的;显著的,异常的,非凡的"}
                   ,{"remedy ['remidi]","n.药品;治疗措施 v.治疗,医治;纠正,补救"}
                   ,{"remember [ri'membə]","v.记住;(to)转达问候,代...致意,代...问好"}
                   ,{"remind [ri'maind]","v.(of)提醒,使想起"}
                   ,{"remnant ['remnənt]","n.剩余(物),零料,遗迹[风] a.剩余的,残留的"}
                   ,{"remote [ri'məut]","a.远的,遥远的,疏远的,偏僻的,细微的"}
                   ,{"removal [ri'mu:vəl]","n.移动,迁居;除去"}
                   ,{"remove [ri'mu:v]","v.移动,消除,脱掉,调动,免职"}
                   ,{"renaissance [rɪ'neɪsns]","n.[the R-]文艺复兴(时期);新生,复兴"}
                   ,{"render ['rendə]","v.使得,致使;提出,提供,呈报"}
                   ,{"renew [ri'nju:]","v.(使)更新,恢复,重新开始,继续"}
                   ,{"renovate ['renəuveit]","v.更新,修复"}
                   ,{"rent [rent]","v.租,租赁 n.租金"}
                   ,{"repair [ri'pεə]","n.修理,修补 v.补救,纠正;修理"}
                   ,{"repay [ri:'pei,ri-]","v.偿还,报答"}
                   ,{"repeat [ri'pi:t]","v.重复,重说,重做 n.重复"}
                   ,{"repeatedly [rɪ'piːtɪdli]","ad.重复地,再三地"}
                   ,{"repel [ri'pel]","v.击退,抵制,使厌恶,使不愉快"}
                   ,{"repertoire ['repətwɑ:]","n.节目,全部剧目,保留剧目,全部技能"}
                   ,{"repetition [,repi'tiʃən]","n.重复,反复"}
                   ,{"replace [ri'pleis]","vt.取代,替换,代替,把...放回原处"}
                   ,{"replacement [ri'pleismənt]","n.取代,替换,替换物,代替物"}
                   ,{"reply [ri'plai]","v./n.(to)回答,答复,以...作答"}
                   ,{"report [ri'pɔ:t]","n./v.报告,汇报;传说,传阅"}
                   ,{"reporter [ri'pɔ:tə]","n.报告人,通讯员;记者,报导者"}
                   ,{"represent [,repri'zent]","v.描述,表示;代表,代理;阐明,说明"}
                   ,{"representative [,repri'zentətiv]","n.代表,代理人 a.(of)典型的,有代表性的"}
                   ,{"repression [ri'preʃən]","n.压抑,压制,镇压"}
                   ,{"reproach [ri'prəutʃ]","v./n.责备,指责"}
                   ,{"reproduce [,ri:prə'dju:s]","v.生殖;翻版;繁殖;复制,仿造"}
                   ,{"reptile ['reptail,-til]","n.爬行动物"}
                   ,{"republic [ri'pʌblik]","n.共和国,共和政体"}
                   ,{"republican [ri'pʌblikən]","a.共和的"}
                   ,{"reputation [,repju'teiʃən]","n.名誉,名声,声望"}
                   ,{"request [ri'kwest]","v./n.请求,要求"}
                   ,{"require [ri'kwaiə]","v.需要;(of)要求,命令"}
                   ,{"requirement [ri'kwaiəmənt]","n.(for)需要,需要的东西,要求"}
                   ,{"rescue ['reskju:]","v./n.营救,援救"}
                   ,{"research [ri'sə:tʃ,'ri:s-]","v./n.(into,on)研究,调查"}
                   ,{"resemblance [ri'zembləns]","n.相似,相似性[点,物]"}
                   ,{"resemble [ri'zembl]","v.像,类似"}
                   ,{"resent [ri'zent]","v.对...表示忿恨,怨恨"}
                   ,{"reservation [,rezə'veiʃən]","n.保留,保留意见;预定,预订"}
                   ,{"reserve [ri'zə:v]","n.储备(物),储备金;缄默 v.保留,储备;预定"}
                   ,{"reservoir ['rezəvwɑ:]","n.水库,蓄水池"}
                   ,{"residence ['rezidəns]","n.住处,住宅"}
                   ,{"resident ['rezidənt]","n.居民,常住者 a.居住的"}
                   ,{"resign [ri'zain]","v.辞去,辞职,使听从(于),使顺从"}
                   ,{"resist [ri'zist]","v.抵抗,反抗;抗,忍得住,抵制"}
                   ,{"resistance [ri'zistəns]","n.(to)抵抗,反抗;抵抗力,阻力;电阻"}
                   ,{"resistant [ri'zistənt]","a.(to)抵抗的,有抵抗力的"}
                   ,{"resolute ['rezəlju:t,-lət]","a.坚决的,果断的"}
                   ,{"resolution [,rezə'lu:ʃən,-lju:-]","n.坚决,决心;决定,决议"}
                   ,{"resolve [ri'zɔlv]","v.决心;(使)分解,溶解;决议 n.解决;决心"}
                   ,{"resort [ri'zɔ:t]","v.凭借,求助,诉诸 n.度假胜地,常去之处,手段"}
                   ,{"resource [ri'sɔ:s,-'zɔ:s]","n.(pl.)资源,财力;办法,智谋;应变之才"}
                   ,{"respect [ri'spekt]","n./v.尊敬,尊重 n.敬意,问候,关系,方面"}
                   ,{"respective [ri'spektiv]","a.各自的,各个的"}
                   ,{"respond [ri'spɔnd]","v.回答,响应,作出反应"}
                   ,{"response [ri'spɔns]","n.回答,响应,反应"}
                   ,{"responsibility [ri,spɔnsə'biləti]","n.责任,责任心;职责,任务"}
                   ,{"responsible [ri'spɔnsəbl]","a.(for,to)应负责的;可靠的;责任重大的"}
                   ,{"rest [rest]","n.休息;剩余部分 v.休息;睡;放,靠,搁"}
                   ,{"restaurant ['restərɔŋ,-rɔnt]","n.餐馆,饭店"}
                   ,{"restless ['restlis]","a.得不到休息的;不平静的;坐立不安的"}
                   ,{"restore [ri'stɔ:]","v.恢复,使回复;归还,交还;修复,重建"}
                   ,{"restrain [ri'strein]","v.(from)抑制,制止"}
                   ,{"restraint [ri'streint]","n.抑制,制止"}
                   ,{"restrict [ri'strikt]","v.限制,约束"}
                   ,{"result [ri'zʌlt]","n.结果,成绩 v.结果,致使,导致,由...而造成"}
                   ,{"resultant [ri'zʌltənt]","a.作为结果而发生的;合成的"}
                   ,{"resume [ri'zju:m,-'zu:m]","n.个人简历 v.再继续,重新开始;再用;恢复"}
                   ,{"retail ['ri:teil]","n.零售"}
                   ,{"retain [ri'tein]","v.保持,保留"}
                   ,{"retention [ri'tenʃən]","n.保留,保持,保持力,记忆力"}
                   ,{"retire [ri'taiə]","v.退休,引退;退却,撤退;就寝"}
                   ,{"retort [ri'tɔ:t]","n./v.报复,反击,反驳"}
                   ,{"retreat [ri'tri:t]","v.撤退,退却"}
                   ,{"retrieve [ri'tri:v]","vt.重新得到,取回;挽回,补救;检索"}
                   ,{"retrospect ['retrəuspekt]","v./n.回顾,回想,追溯[反]foresee"}
                   ,{"return [ri'tə:n]","v./n.返回,回来;归还,送还;回答"}
                   ,{"reveal [ri'vi:l]","v.展现,显示,揭示,揭露,告诉,泄露"}
                   ,{"revelation [,revə'leiʃən]","n.揭示,揭露,显示,启示,新发现,被揭露的事"}
                   ,{"revenge [ri'vendʒ]","n.报复,复仇 v.替...报仇"}
                   ,{"revenue ['revənju:,-nu:]","n.财政收入,税收"}
                   ,{"reverse [ri'və:s]","n.相反;背面 a.相反的 v.颠倒,倒转"}
                   ,{"review [ri'vju:]","v.回顾,复习 n.回顾,复习;评论"}
                   ,{"revise [ri'vaiz,'ri:vaiz]","v.修订,校订;修正,修改"}
                   ,{"revive [ri'vaiv]","v.恢复;(使)复苏"}
                   ,{"revolt [ri'vəult,-'vɔ:lt]","v./n.反抗,起义"}
                   ,{"revolution [,revə'lu:ʃən]","n.革命;旋转,转数"}
                   ,{"revolutionary [,revə'lu:ʃənəri]","a.革命的,革新的 n.革命者"}
                   ,{"revolve [ri'vɔlv,-'vɔ:lv]","v.(使)旋转;考虑;【天】公转,循环"}
                   ,{"reward [ri'wɔ:d]","n.(for)报酬,赏金 v.(for)酬劳;酬谢"}
                   ,{"rhythm ['riðəm,'riθəm]","n.节奏,韵律"}
                   ,{"rib [rib]","n.肋骨,肋状物"}
                   ,{"ribbon ['ribən]","n.缎带,丝带,带,带状物"}
                   ,{"rice [rais]","n.稻,米"}
                   ,{"rich [ritʃ]","a.富的,有钱的;富饶的;(in)充足的,丰富的"}
                   ,{"rid [rid]","v.(of)摆脱,除去"}
                   ,{"riddle ['ridl]","n.谜,谜语"}
                   ,{"ride [raid]","v./n.骑,乘"}
                   ,{"ridge [ridʒ]","n.岭,山脉;屋脊;鼻梁"}
                   ,{"ridiculous [ri'dikjuləs]","a.荒谬的,可笑的"}
                   ,{"rifle ['raifl]","n.步枪"}
                   ,{"right [rait]","a.右的,正确的 n.右,权利 ad.在右边,正确地"}
                   ,{"rigid ['ridʒid]","a.刚性的;刻板的;严厉的"}
                   ,{"rigorous ['riɡərəs]","a.严格的,严厉的,严酷的,严密的,严谨的"}
                   ,{"rim [rim]","n.(圆物的)边,边缘;(眼镜)框"}
                   ,{"ring [riŋ]","n.戒指;环;铃声;(打)电话 v.按(铃),敲(钟)"}
                   ,{"riot ['raiət]","n.暴(骚)乱,蔓延,彩色缤纷 v.骚乱,暴动"}
                   ,{"rip [rip]","v.撕,剥,劈,锯,裂开,撕裂 n.裂口,裂缝"}
                   ,{"ripe [raip]","a.熟的,成熟的;(for)时机成熟的"}
                   ,{"rise [raiz,rais]","v.升起;起立;上涨;起义 n.上涨,增高;起源"}
                   ,{"risk [risk]","v.冒...的危险 n.冒险;风险"}
                   ,{"ritual ['ritjuəl,-tʃu-]","a.宗教仪式的,典礼的 n.(宗教)仪式,典礼"}
                   ,{"rival ['raivəl]","n.竞争者,对手 v.竞争,对抗 a.竞争的"}
                   ,{"river ['rivə]","n.河流"}
                   ,{"road [rəud]","n.路,道路,途径"}
                   ,{"roar [rɔ:]","n./v.吼叫,怒号;轰鸣,咆哮"}
                   ,{"roast [rəust]","v.烤,炙,烘"}
                   ,{"rob [rɔb]","v.(of)抢劫,盗取;非法剥夺"}
                   ,{"robe [rəub]","n.长袍,上衣"}
                   ,{"robot ['rəubɔt,-bət,'rɔbət]","n.机器人,自动机械"}
                   ,{"robust [rəu'bʌst,'rəubʌst]","a.强健的,雄壮的,精力充沛的,坚固的,浓的"}
                   ,{"rock [rɔk]","n.岩石,石块 v.摇,摇动"}
                   ,{"rocket ['rɔkit]","n.火箭"}
                   ,{"rod [rɔd]","n.杆,棒"}
                   ,{"role [rəul]","n.角色,作用,任务,职责"}
                   ,{"roll [rəul]","v.滚动;使摇摆;卷,卷起 n.卷,卷形物;名单"}
                   ,{"romance [rəu'mæns,'rəumæns]","n.传奇,爱情故事"}
                   ,{"romantic [rəu'mæntik]","a.浪漫的,传奇式的;不切实际的,好幻想的"}
                   ,{"roof [ru:f,ruf]","n.屋顶,顶"}
                   ,{"room [ru:m,rum]","n.房间,室,空间,地方;余地"}
                   ,{"root [ru:t,rut]","n.根,根部;根本,根源 v.(使)生根,(使)扎根"}
                   ,{"rope [rəup]","n.绳,索"}
                   ,{"rose [rəʊz]","n.玫瑰,蔷薇"}
                   ,{"rot [rɔt]","v.(使)腐烂,(使)腐败,腐朽"}
                   ,{"rotary ['rəutəri]","a.旋转的"}
                   ,{"rotate [rəu'teit,'rəuteit]","v.(使)旋转"}
                   ,{"rotten ['rɔtən]","a.腐烂的,腐朽的"}
                   ,{"rough [rʌf]","a.粗糙的;粗略的,大致的;粗野的,粗暴的"}
                   ,{"round [raund]","a.圆的 prep.围绕 ad.在周围 v.绕行 n.(一)回合"}
                   ,{"roundabout ['raundə,baut]","a.迂回的,转弯抹角的 n.环状交叉路口"}
                   ,{"rouse [rauz]","vt./vi.唤醒,唤起;激励;激起"}
                   ,{"route [ru:t,raut]","n.路线,路程"}
                   ,{"routine [ru:'ti:n]","n.例行公事,常规 a.常规的,例行的"}
                   ,{"row [rəu]","n.(一)排,(一)行;吵嚷 v.划(船等),荡桨"}
                   ,{"royal ['rɔiəl]","a.王室的,皇家的;第一流的,高贵的"}
                   ,{"royalty ['rɔiəlti]","n.皇家,皇族"}
                   ,{"rub [rʌb]","v.擦,摩擦"}
                   ,{"rubber ['rʌbə]","n.橡皮,橡胶;橡胶制品,胶鞋"}
                   ,{"rubbish ['rʌbiʃ]","n.垃圾,废物;废话"}
                   ,{"ruby ['ru:bi]","n.红宝石"}
                   ,{"rude [ru:d]","a.粗鲁的;猛烈的,残暴的;粗糙的,粗陋的"}
                   ,{"rug [rʌɡ]","n.(小)地毯;围毯"}
                   ,{"ruin ['ruin,'ru:-]","v.毁灭;(使)破产 n.毁灭,崩溃;(pl.)废墟"}
                   ,{"rule [ru:l]","v.统治;支配;裁定 n.规章,条例;习惯;统治"}
                   ,{"ruler ['ru:lə]","n.统治者,支配者;尺,直尺"}
                   ,{"rumor ['ru:mə]","n.(rumour)传闻,谣言"}
                   ,{"run [rʌn]","v.奔,跑;流,淌;蔓延,伸展;经营;运转"}
                   ,{"rural ['ruərəl]","a.乡下的,田园的,乡村风味的"}
                   ,{"rush [rʌʃ]","v.(使)冲;奔 n.冲,急速行进 a.(交通)繁忙的"}
                   ,{"rust [rʌst]","n.铁锈 v.(使)生锈"}
                   ,{"ruthless ['ru:θlis]","a.残酷的,无情的"}
                   ,{"sack [sæk]","n.袋,包,麻袋 v.解雇"}
                   ,{"sacred ['seikrid]","a.神圣的;宗教的;庄严的"}
                   ,{"sacrifice ['sækrifais]","n.牺牲,牺牲品;祭品 v.(for,to)牺牲,献出"}
                   ,{"sad [sæd]","a.悲哀的,忧愁的"}
                   ,{"saddle ['sædl]","n.鞍,马鞍,鞍状物"}
                   ,{"safe [seif]","a.安全的,牢靠的;谨慎的,可靠的 n.保险箱"}
                   ,{"safeguard ['seifɡɑ:d]","v.维护,保护,捍卫 n.安全装置,安全措施"}
                   ,{"safety ['seifti]","n.安全,保险;安全设备,保险装置"}
                   ,{"sail [seil]","n.帆,航行 v.航行"}
                   ,{"sailor ['seilə]","n.水手,海员"}
                   ,{"saint [seint]","n.圣人,基督教徒;(S-或 St.用于人,地名前)圣"}
                   ,{"sake [seik]","n.缘故,理由"}
                   ,{"salad ['sæləd]","n.色拉,凉拌菜"}
                   ,{"salary ['sæləri]","n.薪金,薪水"}
                   ,{"sale [seil]","n.出售,上市;贱卖,廉价出售;销售额"}
                   ,{"salesman ['seilzmən]","n.售货员,推销员"}
                   ,{"salt [sɔ:lt]","n.盐,盐,类 v.腌,盐渍"}
                   ,{"salute [sə'lju:t,sɑ:'lu:te]","v./n.敬礼,鸣礼炮;迎接,欢迎"}
                   ,{"salvation [sæl'veiʃən]","n.拯救,救助;救济(者,品),救助工具;救世主"}
                   ,{"same [seim]","a.相同的 pron.相同的人(或物) ad.同样地"}
                   ,{"sample ['sɑ:mpl,'sæ-]","n.样品,实例,标本,抽样检查 v.取样,采样"}
                   ,{"sanction ['sæŋ,kʃən]","n./v.批准,同意,支持,认可 n.处罚,制裁"}
                   ,{"sand [sænd]","n.沙;(pl.)沙滩,沙地"}
                   ,{"sandwich ['sænwidʒ]","n.三明治,夹肉面包 v.夹入,挤进"}
                   ,{"sane [sein]","a.心智健全的,神志清醒的,明智的,稳健的"}
                   ,{"sarcastic [sɑ:'kæztik]","a.讽刺的"}
                   ,{"satellite ['sætəlait]","n.卫星,人造卫星;附属物"}
                   ,{"satire ['sætaiə]","n.讽刺,讽刺文学,讽刺作品"}
                   ,{"satisfaction [,sætis'fækʃən]","n.满足,满意;乐事,愉快"}
                   ,{"satisfactory [,sætis'fæktəri]","a.令人满意的,圆满的,良好的,符合要求的"}
                   ,{"satisfy ['sætisfai]","v.满意,使满意,使相信,说服"}
                   ,{"saturate ['sætʃəreit,'sætʃərit]","vt.使湿透,浸透;使充满,使饱和"}
                   ,{"Saturday ['sætədeɪ]","n.星期六"}
                   ,{"sauce [sɔ:s]","n.酱汁,调味汁"}
                   ,{"saucer ['sɔ:sə]","n.茶托,碟子"}
                   ,{"sausage ['sɔsidʒ,'sɔ:-]","n.香肠,腊肠"}
                   ,{"savage ['sævidʒ]","a.野蛮的;凶恶的,残暴的 n.野人,未开化的人"}
                   ,{"save [seiv]","v.救,拯救;储蓄,贮存;节省"}
                   ,{"saving ['seɪvɪŋ]","n.挽救,救助,节约,储蓄;(pl.)储蓄金,存款"}
                   ,{"saw [sɔ:]","n.锯子,锯床 v.锯,锯开"}
                   ,{"say [sei]","vt.说,讲;说明;比如说 vi.说,发表意见"}
                   ,{"scale [skeil]","n.刻度;天平,磅秤;比例尺;规模;音阶;鱼鳞"}
                   ,{"scan [skæn]","v.细看,审视;浏览;扫描 n.扫描"}
                   ,{"scandal ['skændəl]","n.丑闻,诽谤,耻辱,流言蜚语,反感,公愤"}
                   ,{"scar [skɑ:]","n.疤,疤痕;创伤 v.使留下伤痕,创伤"}
                   ,{"scarce [skεəs]","a.缺乏的,不足的;稀少的,罕见的"}
                   ,{"scarcely ['skεəsli]","ad.几乎不,简直没有,勉强"}
                   ,{"scare [skεə]","n.惊恐,恐慌 v.惊吓,受惊"}
                   ,{"scarf [skɑ:f]","n.围巾,头巾,领巾,领带"}
                   ,{"scatter ['skætə]","v.散开,驱散;散布,散播"}
                   ,{"scene [si:n]","n.景色,景象,舞台;(戏)一场"}
                   ,{"scenery ['si:nəri]","n.风景,舞台布景"}
                   ,{"scent [sent]","n.气味,香味,香水,线索,嗅觉 v.嗅,发觉"}
                   ,{"schedule ['ʃədju:əl,'skedʒu:əl]","n.时间表,进度表 v.安排,预定"}
                   ,{"scheme [ski:m]","n.计划,方案;阴谋;配置 v.计划,策划;阴谋"}
                   ,{"scholar ['skɔlə]","n.学者"}
                   ,{"scholarship ['skɔləʃip]","n.奖学金;学问,学识"}
                   ,{"school [sku:l]","n.学校,(大学里的)学院;上学,学业;学派"}
                   ,{"science ['saiəns]","n.科学;学科"}
                   ,{"scientific [,saiən'tifik]","a.科学上的"}
                   ,{"scientist ['saiəntist]","n.科学家"}
                   ,{"scissors ['sizəz]","n.剪子"}
                   ,{"scold [skəuld]","v.责骂,训斥"}
                   ,{"scope [skəup]","n.(活动)范围;机会,余地"}
                   ,{"score [skɔ:]","n.得分,分数;二十 v.得(分),记(...的)分数"}
                   ,{"scorn [skɔ:n]","v./n.轻蔑,藐视"}
                   ,{"scout [skaut]","n.侦察员,侦察机(舰) v.搜索,侦察"}
                   ,{"scramble ['skræmbl]","vi.(快速地)爬,攀登;互相争夺,争先"}
                   ,{"scrap [skræp]","n.碎片;废料 v.废弃,报废"}
                   ,{"scrape [skreip]","v.刮(掉),擦过,勉强通过 n.刮,擦痕,刮擦声"}
                   ,{"scratch [skrætʃ]","v.抓,搔,扒 n.抓,搔,抓痕;起跑线"}
                   ,{"scream [skri:m]","v./n.尖声叫,喊叫着说出,(风)呼啸"}
                   ,{"screen [skri:n]","n.屏幕,屏风;帘 v.掩蔽,包庇;筛选"}
                   ,{"screw [skru:]","n.螺旋,螺丝(钉) v.拧,拧紧"}
                   ,{"script [skript]","n.剧本(原稿);手稿,原稿;笔迹,手迹"}
                   ,{"scrutiny ['skru:tini]","n.周密的调查;仔细看;监视;选票复查"}
                   ,{"sculpture ['skʌlptʃə]","n.雕刻(术),雕塑(术);雕刻作品"}
                   ,{"sea [si:]","n.海,海洋,大量"}
                   ,{"seal [si:l]","n.封铅,封条;印,图章;海豹 v.封,密封"}
                   ,{"seam [si:m]","n.缝,接缝;缝合,接合;vi.裂开,产生裂缝"}
                   ,{"search [sə:tʃ]","v./n.(for)搜索,寻找,探查"}
                   ,{"seaside ['si:said]","n.海滨,海边"}
                   ,{"season ['si:zən]","n.季,季节,时节"}
                   ,{"seat [si:t]","n.座位,底座;所在地,场所 v.使坐下"}
                   ,{"second ['sekənd]","a.第二;次等的,二等的 n.秒 v.赞成,附和"}
                   ,{"secondary ['sekəndəri]","a.次要的,二级的;中级的,第二的"}
                   ,{"secret ['si:krit]","a.秘密的,机密的 n.秘密"}
                   ,{"secretary ['sekrətəri]","n.秘书,书记;部长,大臣"}
                   ,{"section ['sekʃən]","n.章节,部分;地区,部门,科;截面,剖面"}
                   ,{"sector ['sektə]","n.部门,部分;防御地段,防区;扇形"}
                   ,{"secure [si'kjuə]","a.(from,against)安全的,放心的 v.得到;防护"}
                   ,{"security [sɪ'kjʊərəti]","n.安全(感),防御(物),保证(人),(pl.)证券"}
                   ,{"see [si:]","vt.看见;会面;探望;知道,获悉;送行"}
                   ,{"seed [si:d]","n.种子 v.播种;结实,结籽"}
                   ,{"seek [si:k]","v.(after,for)寻找,探索;试图,企图"}
                   ,{"seem [si:m]","v.好像,似乎"}
                   ,{"seemingly ['siːmɪŋli]","ad.表面上；似乎；看起来"}
                   ,{"segment ['seɡmənt,seɡ'ment]","n.段,片,节,部分"}
                   ,{"segregate ['seɡriɡit,-ɡeit]","vt.使...分开,隔离(病患等)"}
                   ,{"seize [si:z]","v.抓住,逮住;夺取,占领;没收,查封"}
                   ,{"seldom ['seldəm]","ad.很少,不常"}
                   ,{"select [si'lekt]","v.选择,挑选 a.精选的,选择的"}
                   ,{"selection [si'lekʃən]","n.选择,挑选;选集,精选物"}
                   ,{"self [self]","n.自我,自己(pl.selves)"}
                   ,{"selfish ['selfiʃ]","adj.自私的,利己的"}
                   ,{"sell [sel]","v.卖,出售"}
                   ,{"semester [si'mestə]","n.学期"}
                   ,{"semiconductor [,semikən'dɔktə]","n.半导体"}
                   ,{"seminar ['seminɑ:]","n.(大学的)研究班,研讨会"}
                   ,{"senate ['senit]","n.参议院,上院"}
                   ,{"senator ['senətə]","n.参议员"}
                   ,{"send [send]","v.(sent,sent)1.打发;派遣 2.送;寄出"}
                   ,{"senior ['si:njə]","a.年长的;地位较高的 n.(大学)四年级学生"}
                   ,{"sensation [sen'seiʃən]","n.感觉,知觉;激动,轰动,轰动一时的事情"}
                   ,{"sense [sens]","n.感官;感觉;判断力;意义 v.觉得,意识到"}
                   ,{"sensible ['sensəbl]","a.明智的,达理的;可觉察的,明显的"}
                   ,{"sensitive ['sensətɪv]","a.(to)敏感的,易受伤害的;灵敏的,善解人意的 n.敏感的人"}
                   ,{"sentence ['sentəns]","n.句子;判决,宣判 v.宣判,判决"}
                   ,{"sentiment ['sentimənt]","n.感情,柔情;看法;感觉"}
                   ,{"separate ['sepəreit,'sepərit]","a.(from)分离的,分开的"}
                   ,{"September [sep'tembə(r)]","n.九月"}
                   ,{"sequence ['si:kwəns]","n.顺序,先后,次序;连续,数列 vt.按顺序排好"}
                   ,{"serial ['siəriəl,'si:r-]","n.连载小说,连续剧;连载刊物 a.连续的"}
                   ,{"series ['siəri:z,-riz]","n.一系列,连续;丛书"}
                   ,{"serious ['siəriəs,'si:r-]","a.严肃的;主要的;严重的,危急的;认真的"}
                   ,{"servant ['sə:vənt]","n.仆人"}
                   ,{"serve [sə:v]","v.服务,尽责;招待,侍候;符合,适用"}
                   ,{"service ['sə:vis]","n.服务;公共设施;维修保养;行政部门 v.维修"}
                   ,{"session ['seʃən]","n.会议；会期；开庭期；学期；一段时间"}
                   ,{"set [set]","n.一套,一副,装置,接受机 v.提出,调整,日落"}
                   ,{"setback ['setbæk]","n.挫折;失效;复发;倒退"}
                   ,{"setting ['setiŋ]","n.背景；环境；镶嵌；安装；放置；（日月的）沉落；[音]乐曲"}
                   ,{"settle ['setl]","v.安定,安顿;停息;定居;解决,调停"}
                   ,{"settlement ['setlmənt]","n.解决,决定,调停;居留区,住宅区"}
                   ,{"seven ['sevən]","num.七,七个(人或物)"}
                   ,{"several ['sevərəl]","a.几个,若干,数个;各个的,各自的"}
                   ,{"severe [si'viə]","a.严厉的;剧烈的,严重的,严峻的,艰难的"}
                   ,{"sew [səu]","v.缝,缝纫"}
                   ,{"sex [seks]","n.性别,性"}
                   ,{"shabby ['ʃæbi]","a.简陋的,破旧的,卑鄙的,不公平的"}
                   ,{"shade [ʃeid]","n.荫,阴影;遮光物,罩 v.遮蔽,遮光"}
                   ,{"shadow ['ʃædəu]","n.阴影,影子,荫;暗处,阴暗"}
                   ,{"shady ['ʃeidi]","a.成荫的,多荫的;可疑的,靠不住的"}
                   ,{"shaft [ʃɑ:ft,ʃæft]","n.轴;杆状物"}
                   ,{"shake [ʃeik]","n./v.摇动,摇;颤抖,震动"}
                   ,{"shall [ʃæl,弱ʃəl,ʃl,ʃə,ʃ]","aux.v.(我,我们)将要,会;必须,应该"}
                   ,{"shallow ['ʃæləu]","a.浅的,浅薄的 n.浅滩,浅处"}
                   ,{"sham [ʃæm]","n./a.假冒(的),虚伪(的)"}
                   ,{"shame [ʃeim]","n.羞耻,耻辱;可耻的人(或事物) v.使羞愧"}
                   ,{"shampoo [ʃæm'pu:]","n.洗发膏,香波;洗发,洗头 v.洗发,洗头"}
                   ,{"shape [ʃeip]","n.形状,外形;情况,状态;种类 v.成型,塑造"}
                   ,{"share [ʃεə]","v.(with)分享,共享,分配,共用;分担 n.一份,份额;股份"}
                   ,{"shark [ʃɑ:k]","n.鲨鱼"}
                   ,{"sharp [ʃɑ:p]","a.锋利的;突然的;灵敏的;明显的;辛辣的 ad.准时地;突然地"}
                   ,{"shatter ['ʃætə]","n.碎片;粉碎 v.粉碎;使疲惫;使震骇"}
                   ,{"shave [ʃeiv]","v.剃,刮,刨,削 n.刮脸"}
                   ,{"she [ʃi:]","pron.(主格)她"}
                   ,{"shear [ʃiə]","v.剪,修剪"}
                   ,{"shed [ʃed]","v.流出;发散,散发,脱落,脱去 n.棚,小屋"}
                   ,{"sheep [ʃip]","n.(绵)羊;易受人摆布的人"}
                   ,{"sheer [ʃiə]","a.纯粹的,十足的,全然的;陡峭的,险峻的"}
                   ,{"sheet [ʃi:t]","n.被单;(一)张,(一)片,薄片;大片"}
                   ,{"shelf [ʃelf]","n.架子,搁板"}
                   ,{"shell [ʃel]","n.壳,贝壳;炮弹"}
                   ,{"shelter ['ʃeltə]","n.掩蔽处;掩蔽,保护 v.掩蔽,躲避,庇护"}
                   ,{"shepherd ['ʃepəd]","n.牧民,牧羊人"}
                   ,{"shield [ʃi:ld]","n.防护物,护罩;盾,盾状物 v.保护,防护"}
                   ,{"shift [ʃift]","v.替换,转移 n.转换,转变;(轮)班,(换)班"}
                   ,{"shilling ['ʃiliŋ]","n.先令"}
                   ,{"shine [ʃain]","v.照耀,发光;擦亮 n.光泽,光"}
                   ,{"ship [ʃip]","n.船舶,舰艇 v.装运,航运,运送;发货"}
                   ,{"shipment ['ʃipmənt]","n.装船,装运;装载的货物,装货量"}
                   ,{"shirt [ʃə:t]","n.衬衫"}
                   ,{"shiver ['ʃivə]","v./n.战栗,发抖"}
                   ,{"shock [ʃɔk]","n.震动;电击,触电;休克 v.(使)震动/震惊"}
                   ,{"shoe [ʃu:]","n.鞋"}
                   ,{"shoot [ʃu:t]","v.发射;掠过,疾驰而过 n.嫩枝,苗,射击"}
                   ,{"shop [ʃɔp]","n.商店,店铺;工厂,车间 v.买东西"}
                   ,{"shopkeeper ['ʃɔp,ki:pə]","n.店主,老板"}
                   ,{"shore [ʃɔ:]","n.海滨,湖滨"}
                   ,{"short [ʃɔ:t]","a.短的,矮的;(of)缺乏,不足 n.(pl.)短裤"}
                   ,{"shortage ['ʃɔ:tidʒ]","n.不足,缺少"}
                   ,{"shortcoming ['ʃɔ:t'cʌmiŋ]","n.短处,缺点"}
                   ,{"shorthand ['ʃɔ:thænd]","n.速记"}
                   ,{"shortly ['ʃɔ:tli]","ad.立刻,不久;不耐烦地,简慢地"}
                   ,{"shot [ʃɔt]","n.开枪,射击;投篮;弹丸,炮弹,子弹"}
                   ,{"should [ʃud,弱 ʃəd,ʃd]","aux.v.应该;万一;可能,该;就;竟然会"}
                   ,{"shoulder ['ʃəuldə]","n.肩,肩部 v.肩负,承担"}
                   ,{"shout [ʃaut]","v.大声叫,喊,呼出 n.呼喊,叫"}
                   ,{"shove [ʃʌv]","vt.乱推;乱塞 vi.用力推,挤 n.猛推"}
                   ,{"show [ʃəu]","n.节目,表演 v.上演(戏剧等),放映(电影)"}
                   ,{"shower ['ʃauə]","n.阵雨;沐浴;(一)阵/大批 v.下阵雨,倾注"}
                   ,{"shrewd [ʃru:d]","a.机灵的,敏锐的;精明的"}
                   ,{"shrink [ʃriŋk]","v.起皱,收缩;退缩,畏缩"}
                   ,{"shrug [ʃrʌɡ]","vt./n.耸肩(表示冷淡、怀疑、无奈、不满等)"}
                   ,{"shut [ʃʌt]","v.关,关闭"}
                   ,{"shutter ['ʃʌtə]","n.百叶窗;(照相机)快门;关闭装置"}
                   ,{"shuttle ['ʃʌtl]","n.梭子；穿梭；往返移动之物；航天飞机 v.往返运送；穿梭移动"}
                   ,{"shy [ʃai]","a.怕羞的,腼腆的;胆怯的 vi.惊退,畏缩"}
                   ,{"sick [sik]","a.有病的,患病的;恶心的,想吐的"}
                   ,{"side [said]","n.旁边,侧面;坡,岸;一边/侧/方 vi.支持"}
                   ,{"sideways ['saidweiz]","ad./a.向旁边(的),侧身,横着(的),斜着(的)"}
                   ,{"siege [si:dʒ]","n.包围,围攻,围困"}
                   ,{"sigh [sai]","n.叹息,叹息声 v.叹息,叹气"}
                   ,{"sight [sait]","n.视力;望见,瞥见;视域;眼界;情景,奇观"}
                   ,{"sightseeing ['saitsi:iŋ]","n.观光,游览"}
                   ,{"sign [sain]","n.标记,招牌;征兆,迹象 v.签名(于),署名(于)"}
                   ,{"signal ['siɡnəl]","n.信号,暗号 v.发信号,用信号通知"}
                   ,{"signature ['signətʃə]","n.签名,署名,签字"}
                   ,{"significance [siɡ'nifikəns]","n.意义,含义;重要性,重要的"}
                   ,{"significant [sig'nifikənt]","a.有意义的;重大的,重要的"}
                   ,{"signify ['signifai]","v.表示,意味;要紧,有重要性"}
                   ,{"silence ['sailəns]","n.寂静,沉默 v.使沉默,使安静"}
                   ,{"silent ['sailənt]","a.寂静,沉默的"}
                   ,{"silicon ['silikən,-kɔn]","n.硅"}
                   ,{"silk [silk]","n.丝,绸"}
                   ,{"silly ['sili]","a.傻的,糊涂的,愚蠢的"}
                   ,{"silver ['silvə]","n.银;银器;银币 v.镀银"}
                   ,{"similar ['similə]","a.(to)相似的,类似的"}
                   ,{"simple ['simpl]","a.简单的;单纯的,直率的;迟钝的,头脑简单的"}
                   ,{"simplicity [sim'plisiti]","n.简单,简易;朴素;直率,单纯"}
                   ,{"simplify ['simplifai]","v.简化,使单纯"}
                   ,{"simply ['simpli]","ad.简单地;完全,简直;仅仅,只不过;朴素地"}
                   ,{"simulate ['simjuleit]","v.模仿,模拟;假装,冒充"}
                   ,{"simultaneous [,siməl'teiniəs]","a.同时的,同时存在的"}
                   ,{"sin [sin]","n.罪,罪恶 v.犯罪"}
                   ,{"since [sins]","prep.自从 conj.自从;因为,既然 ad.后来"}
                   ,{"sincere [sin'siə]","a.诚挚的,真实的,诚恳的"}
                   ,{"sing [siŋ]","v.唱,演唱;鸡叫"}
                   ,{"single ['siŋɡl]","a.单人的;单一的,单个的;未婚的,独身的"}
                   ,{"singular ['siŋɡjulə]","a.非凡的,卓越的;单数的"}
                   ,{"sink [siŋk]","v.(使)下沉,下落 n.水槽,水池"}
                   ,{"sip [sip]","v.小口地喝,抿,呷 n.一小口的量"}
                   ,{"sir [sə:,弱 sə]","n.先生,长官;[S -用于姓名前]...爵士"}
                   ,{"siren ['saiərən]","n.警报声,警报器"}
                   ,{"sister ['sistə]","n.姐,妹;护士长;修女,女教士"}
                   ,{"sit [sit]","vi.坐,坐下;位于;栖息;孵卵 vt.使就坐"}
                   ,{"site [sait]","n.位置,场所,地点"}
                   ,{"situated ['sitjueitid,-tʃu-]","a.坐落在...的"}
                   ,{"situation [,sitju'eiʃən,-tʃu-]","n.形势,处境,状况;位置,场所;职位,职务"}
                   ,{"six [siks]","num.六 pron./a.六(个,只...)"}
                   ,{"size [saiz]","n.大小,尺寸,规模;尺码"}
                   ,{"skate [skeit]","v.溜冰,滑冰 n.冰鞋"}
                   ,{"skeleton ['skelitən]","n.骨骼;骨架,框架;梗概,提要"}
                   ,{"skeptical ['skeptikəl]","a.怀疑的 [英]sceptical"}
                   ,{"sketch [sketʃ]","n.素描;略图,草图;梗概 v.绘略图,速写,写生"}
                   ,{"ski [ski:,ʃi:]","n.雪橇 v.滑雪"}
                   ,{"skill [skil]","n.技能,技巧,手艺;熟练"}
                   ,{"skilled [skild]","a.(in)熟练的,有技能的;需要技能的"}
                   ,{"skillful ['skilful]","a.(skilful)(in,at)灵巧的,娴熟的"}
                   ,{"skim [skim]","vt.撇去(液体表面)之漂浮物 vi.轻轻掠过"}
                   ,{"skin [skin]","n.皮,皮肤;兽皮,皮毛;外皮,外壳 v.剥皮"}
                   ,{"skip [skip]","vi.略过,跳过 n.跳跃 vt.故意忽略;略过"}
                   ,{"skirt [skə:t]","n.裙子;边缘,郊区"}
                   ,{"skull [skʌl]","n.头盖骨,颅骨"}
                   ,{"sky [skai]","n.天空;[pl.]天色;气候"}
                   ,{"skyscraper ['skai,skreipə]","n.摩天大楼"}
                   ,{"slack [slæk]","a.懈怠的,松驰的;萧条的 n.淡季;(pl.)便裤"}
                   ,{"slam [slæm]","v.(门、窗等)砰地关上 n.猛然关闭的声音"}
                   ,{"slap [slæp]","n./v.拍,掌击"}
                   ,{"slaughter ['slɔ:tə]","n.屠杀,屠宰 vt.屠杀,宰杀"}
                   ,{"slave [sleiv]","n.奴隶,苦工 v.做苦工,拼命地干"}
                   ,{"sleep [sli:p]","v.(slept,slept)睡 n.睡眠"}
                   ,{"sleeve [sli:v]","n.袖子"}
                   ,{"slender ['slendə]","a.修长的,细长的,苗条的;微小的,微薄的"}
                   ,{"slice [slais]","n.薄片,切片;一份;部分切(片)"}
                   ,{"slide [slaid]","v.(使)滑动 n.滑坡,滑道;滑,滑动;幻灯片"}
                   ,{"slight [slait]","a.轻微的,微小的;纤细的,瘦弱的"}
                   ,{"slim [slim]","a.苗条的;(机会)少的 v.减轻体重,变苗条"}
                   ,{"slip [slip]","v.滑,滑倒;滑掉;溜走 n.疏忽,小错,口误,笔误"}
                   ,{"slipper ['slipə]","n.便鞋,拖鞋"}
                   ,{"slippery ['slipəri]","a.滑的,滑溜的"}
                   ,{"slit [slit]","v.切开,截开,纵割 n.细长裂缝,狭长切口"}
                   ,{"slogan ['sləuɡən]","n.标语,口号"}
                   ,{"slope [sləup]","n.斜坡,斜面;倾斜,斜度 v.(使)倾斜"}
                   ,{"slot [slɔt]","n.狭缝;空位 vt.放入狭缝中;把...纳入"}
                   ,{"slow [sləu]","a.慢的,不活跃的 v.(down)(使)放慢,减速"}
                   ,{"slum [slʌm]","n.贫民窟,贫民区,陋巷"}
                   ,{"sly [slai]","a.狡猾的,偷偷摸摸的"}
                   ,{"small [smɔ:l]","a.小的;年幼的;不重要的;小规模(经营)的"}
                   ,{"smart [smɑ:t]","a.漂亮的;聪明的;巧妙的 v.剧痛,刺疼"}
                   ,{"smash [smæʃ]","v./n.打碎,粉碎"}
                   ,{"smell [smel]","n.气味;嗅觉 v.嗅,闻到;散发(...的)气味"}
                   ,{"smile [smail]","n.微笑,笑容 vi.微笑,露出笑容"}
                   ,{"smog [smɔɡ,smɔ:ɡ]","n.烟雾"}
                   ,{"smoke [sməuk]","n.烟,烟尘;吸烟,抽烟 v.抽(烟);冒烟,冒气"}
                   ,{"smooth [smu:ð]","a.光滑的;顺利的;柔和的 v.(over)掩饰"}
                   ,{"smuggle ['smʌɡl]","v.走私;偷运"}
                   ,{"snack [snæk]","n.快餐,小吃,点心"}
                   ,{"snake [sneik]","n.蛇"}
                   ,{"snap [snæp]","v.啪地移动;(使)突然断开,断开(成两截)"}
                   ,{"snatch [snætʃ]","n./v.攫取,抢夺"}
                   ,{"sneak [sni:k]","vi.偷偷地走,溜 vt.偷偷地做(或拿、吃)"}
                   ,{"sneeze [sni:z]","vi.打喷嚏,发喷嚏声 n.喷嚏"}
                   ,{"sniff [snif]","vi.嗅...味道;抽鼻涕;对嗤之以鼻,蔑视"}
                   ,{"snow [snəu]","n.雪,下雪 vi.下雪;如雪一般地落下"}
                   ,{"snowstorm ['snəustɔ:m]","n.暴风雪"}
                   ,{"so ['səu,弱 sə]","ad.那么;非常;也;不错 conj.因此;以便"}
                   ,{"soak [səuk]","v.浸泡,浸湿,浸透"}
                   ,{"soap [səup]","n.肥皂"}
                   ,{"soar [sɔ:]","vi.(指鸟等)高飞,翱翔;飞涨;高耸"}
                   ,{"sob [sɒb]","v./n.哭泣,呜咽"}
                   ,{"sober ['səubə]","a.清醒的;认真的,冷静的,适度的"}
                   ,{"so-called ['səu'kɔ:ld]","a.(贬)所谓的,号称的"}
                   ,{"soccer ['sɔkə]","n.足球"}
                   ,{"sociable ['səuʃəbl]","a.好交际的,友好的,合群的"}
                   ,{"social ['səuʃəl]","a.社会的;交际的"}
                   ,{"socialism ['səuʃəlizəm]","n.社会主义"}
                   ,{"society [sə'saiəti]","n.社会;社团,协会,社;社交界,上流社会"}
                   ,{"sociology [,səusi'ɔlədʒi,-ʃi-]","n.社会学"}
                   ,{"sock [sɔk]","n.(pl.)短袜"}
                   ,{"soda ['səudə]","n.苏打,汽水"}
                   ,{"sofa ['səufə]","n.长沙发,沙发"}
                   ,{"soft [sɔft,sɔ:ft]","a.软的;温柔的;细嫩的,光滑的;不含酒精的"}
                   ,{"software ['sɔftwεə,'sɔ:-]","n.软件"}
                   ,{"soil [sɔil]","n.泥土,土地,土壤 v.弄脏,(使)变脏"}
                   ,{"solar ['səulə]","a.太阳的,日光的"}
                   ,{"soldier ['səuldʒə]","n.士兵,军人"}
                   ,{"sole [səul]","a.单独的,唯一的 n.脚垫,鞋底"}
                   ,{"solemn ['sɔləm]","a.庄严的,隆重的;严肃的"}
                   ,{"solid ['sɔlid]","a.固体的;结实的,稳固的,可靠的 n.固体"}
                   ,{"solidarity [,sɔli'dæriti]","n.团结;休戚相关"}
                   ,{"solitary ['sɔlitəri]","a.孤独的;偏僻的;单一的,唯一的"}
                   ,{"solo ['səuləu]","n.独奏 a.&ad.单独的(地);独唱的(地)"}
                   ,{"soluble ['sɒljəbl]","a.可溶的"}
                   ,{"solution [sə'lu:ʃən]","n.解答,解决办法;溶解,溶液"}
                   ,{"solve [sɔlv,sɔ:lv]","v.解决,解答"}
                   ,{"some [sʌm,弱 səm,sm]","a.几个;一些;有些;某(人或物) pron.一些"}
                   ,{"somebody ['sʌm,bɔdi,-bʌ-]","pron.某人,有人 n.重要人物"}
                   ,{"somehow ['sʌmhau]","ad.以某种方式,用某种方法;不知怎么地"}
                   ,{"someone ['sʌm,wʌn,-wən]","pron.某人(=somebody)"}
                   ,{"something ['sʌmθiŋ]","pron.某事,某物;被视为有意义的事物"}
                   ,{"sometime ['sʌmtaim]","ad.将来(或过去)某个时候 a.以前的"}
                   ,{"sometimes ['sʌmtaimz]","ad.不时,有时,间或"}
                   ,{"somewhat ['sʌmwɒt]","pron.&ad.一点儿,几分"}
                   ,{"somewhere ['sʌmweə(r)]","ad.某地,在某处;在附近,前后,大约"}
                   ,{"son [sʌn]","n.儿子;孩子(长者对年青或年幼男子的称呼)"}
                   ,{"song [sɔŋ,sɔ:ŋ]","n.歌唱,(虫、鸟等)鸣声;歌曲,歌词"}
                   ,{"soon [su:n]","ad.不久,即刻;快,早"}
                   ,{"sophisticated [sə'fistikeitid]","a.尖端的,复杂的,先进的;老练的,久经世故的"}
                   ,{"sophomore ['sɒfəmɔː(r)]","n.（北美）大学（或中学）二年级学生 a.第二年的"}
                   ,{"sore [sɔ:]","a.疼痛的;痛心的 n.痛处,疮口"}
                   ,{"sorrow ['sɔrəu,'sɔ:-]","n.悲衰,悲痛"}
                   ,{"sorry ['sɔ:ri,'sɔ-]","a.对不起,抱歉的;难过,悔恨的;使人伤心"}
                   ,{"sort [sɔ:t]","n.种类,类别 v.分类,整理"}
                   ,{"soul [səul]","n.灵魂,心灵;精神,精力;人"}
                   ,{"sound [saund]","n.声音 v.发声,响,听起来,感觉起来 a.健全的,完好的;正当的"}
                   ,{"soup [su:p]","n.汤"}
                   ,{"sour ['sauə]","a.酸的;发酸的;酸痛的;脾气坏的;刻薄的"}
                   ,{"source [sɔ:s]","n.源,源泉;来源,出处"}
                   ,{"south [sauθ,sauð]","n.南,南方,南部 a.南方的,南部的"}
                   ,{"southeast [,sauθ'i:st]","n./a.东南(的),东南部(的)"}
                   ,{"southern ['sʌðən]","a.南方的,南部的"}
                   ,{"southwest [,sauθ'west]","n./a.西南(的),西南部(的)"}
                   ,{"sovereign ['sɔvərin,'sʌv-]","a.独立的,有主权的 n.君主,国王,统治者"}
                   ,{"sow [səu]","v.播种"}
                   ,{"space [speis]","n.间隔;空地,余地;空间 v.留间隔,隔开"}
                   ,{"spacecraft ['speiskrɑ:ft,-kræft]","n.宇宙飞船"}
                   ,{"spaceship ['speisʃip]","n.宇宙飞船"}
                   ,{"spacious ['speiʃəs]","adj.广阔的,宽敞的"}
                   ,{"spade ['speid]","n.铁锹,铲子"}
                   ,{"span [spæn]","n.跨度,跨距"}
                   ,{"spare [spεə]","a.多余的,备用的 v.节约,节省;抽出(时间)"}
                   ,{"spark [spɑ:k]","n.火花,火星 v.发火花,发电花"}
                   ,{"sparkle ['spɑ:kl]","v.发火花,闪耀"}
                   ,{"speak [spi:k]","v.说话,讲话;演说,发言;(in)说某种语言"}
                   ,{"speaker ['spi:kə]","n.说话者,发言者;说某种语言者;扬声器"}
                   ,{"spear [spiə]","n.矛,枪"}
                   ,{"special ['speʃəl]","a.特殊的,专门的;附加的,额外的"}
                   ,{"specialist ['speʃəlist]","n.专家"}
                   ,{"speciality [,speʃi'æləti]","n.(specialty)特性,性质;专业/长;特产"}
                   ,{"specialize ['speʃəlaiz]","v.(specialise)(in)专攻,专门研究,专业化"}
                   ,{"species ['spi:ʃi:z,-si:z]","n.(物)种,种类"}
                   ,{"specific [spə'sɪfɪk]","a.明确的,具体的;特定的,特有的"}
                   ,{"specification [,spesifi'keiʃən]","n.详述;(常 pl.)规格,说明书,规范"}
                   ,{"specify ['spesəfai,-si-]","v.指定,详细说明"}
                   ,{"specimen ['spesimin,-əmən]","n.标本,样本"}
                   ,{"spectacle ['spektəkl]","n.(pl.)眼镜;场面,景象;奇观,壮观"}
                   ,{"spectacular [spek'tækjulə]","a.壮观的,引人注目的 n.壮观的演出"}
                   ,{"spectator [spek'teitə,'spekt-]","n.观众,旁观者"}
                   ,{"spectrum ['spektrəm]","n.谱,光谱,频谱;范围,幅度,系列"}
                   ,{"speculate ['spekjuleit]","vi.思索;推测 vt.投机;思索,推测"}
                   ,{"speech [spi:tʃ]","n.演说,讲话;言语,语言"}
                   ,{"speed [spi:d]","n.速度,快 v.迅速,前进,急行;加速,使加速"}
                   ,{"spell [spel]","v.拼写"}
                   ,{"spelling ['speliŋ]","n.拼法,拼写法"}
                   ,{"spend [spend]","v.花费;消耗,用尽;度过,消磨"}
                   ,{"sphere [sfiə]","n.球,球体;范围,领域"}
                   ,{"spicy ['spaisi]","a.加很多香料的;(口味)浓郁的"}
                   ,{"spider ['spaidə]","n.蜘蛛"}
                   ,{"spill [spil]","v.溢出,溅出 n.摔下,跌下"}
                   ,{"spin [spin]","v.旋转;纺纱;织网,吐丝 n.旋转;自转"}
                   ,{"spine [spain]","n.脊柱,脊椎;(动植物的)刺;书脊"}
                   ,{"spiral ['spaiərəl]","a.螺旋形的 n.螺旋,螺线 v.螺旋上升;盘旋"}
                   ,{"spirit ['spirit]","n.精神;志气;(pl.)情绪,心情;(pl.)酒精"}
                   ,{"spiritual ['spiritjuəl,-tʃuəl]","a.精神(上)的,心灵的"}
                   ,{"spit [spit]","v.吐(唾沫),吐痰 n.唾液"}
                   ,{"spite [spait]","n.恶意;怨恨"}
                   ,{"splash [splæʃ]","v.溅,泼 n.溅,飞溅声"}
                   ,{"splendid ['splendid]","a.壮丽的,辉煌的;极好的"}
                   ,{"split [split]","v.裂开,劈开;分裂,分离 n.分化,分裂,裂口"}
                   ,{"spoil [spɔil]","v.损坏,搞错;宠坏,溺爱"}
                   ,{"spokesman ['spəuksmən]","n.发言人"}
                   ,{"sponge [spʌndʒ]","n.海绵"}
                   ,{"sponsor ['spɔnsə]","n.发起人,主力者,保证人 v.发起,主办"}
                   ,{"spontaneous [spɔn'teiniəs]","a.自发的,自然产生的"}
                   ,{"spoon [spu:n]","n.匙,调羹"}
                   ,{"sport [spɔ:t]","n.(体育)运动 (pl.)运动会 vi.开玩笑;玩耍"}
                   ,{"sportsman ['spɔ:tsmən]","n.爱好运动的人;运动员"}
                   ,{"spot [spɔt]","n.斑点;地点 v.认出,认清,发现;玷污,弄脏"}
                   ,{"spouse [spaus]","n.配偶(指夫或妻)"}
                   ,{"spray [sprei]","n.喷雾,飞沫,浪花,水花 v.喷,喷射"}
                   ,{"spread [spred]","v./n.伸开,伸展;散布,传播"}
                   ,{"spring [spriŋ]","n.春;跳;泉,源泉;弹簧,发条 v.跳,跳跃"}
                   ,{"sprinkle ['spriŋkl]","n.洒,喷,淋"}
                   ,{"sprout [spraut]","vi.发芽,抽条 vt.使发芽 n.新芽,嫩苗"}
                   ,{"spur [spə:]","n.靴刺,马刺;刺激,刺激物 v.刺激,激励"}
                   ,{"spy [spai]","n.间谍 v.当间谍,刺探;察觉,发现"}
                   ,{"square [skwεə]","n.正方形;广场 a.正方形的 v.使成方形"}
                   ,{"squeeze [skwi:z]","v.压榨,挤 n.榨取,勒索"}
                   ,{"squirrel ['skwə:rəl]","n.松鼠"}
                   ,{"stab [stæb]","v./n.刺,戳"}
                   ,{"stability [stə'biliti]","n.稳定,安定"}
                   ,{"stable ['steibl]","a.稳定的,安定的 n.马厩,马棚"}
                   ,{"stack [stæk]","n.堆,一堆 v.堆积,堆起"}
                   ,{"stadium ['steidiəm]","n.体育场"}
                   ,{"staff [stɑ:f,stæf]","n.全体职工;杠,棒;参谋部 v.配备工作人员"}
                   ,{"stage [steidʒ]","n.舞台,戏剧;阶段,时期"}
                   ,{"stagger ['stæɡə]","vi.摇晃着移动;蹒跚 n.摇晃不稳的动作;蹒跚"}
                   ,{"stain [stein]","n.污点,瑕疵 v.沾污;染色"}
                   ,{"stair [stεə]","n.(pl.)楼梯"}
                   ,{"staircase ['stεəkeis]","n.(stairway)楼梯"}
                   ,{"stake [steik]","n.桩,标桩;赌注,利害关系"}
                   ,{"stale [steil]","n.变质的,不新鲜的;陈旧的,陈腐的"}
                   ,{"stalk [stɔ:k]","n.茎,梗 vt.悄悄地跟踪 vi.高视阔步地走"}
                   ,{"stall [stɔ:l]","n.货摊;畜栏,厩 v.(使)停转,(使)停止"}
                   ,{"stamp [stæmp]","n.邮票;印;跺脚;标志 v.跺脚,顿足;盖章"}
                   ,{"stand [stænd]","vi.站立;位于;经受 n.台,座;货摊;立场"}
                   ,{"standard ['stændəd]","n.标准,规则 a.标准的"}
                   ,{"standpoint ['stændpɔint]","n.立场,观点"}
                   ,{"staple ['steipl]","n.主要产品;名产;纤维;主要成分,主食"}
                   ,{"star [stɑ:]","n.星;恒星;明星 v.用星号标出;扮演主角"}
                   ,{"stare [stεə]","v.(at)盯,凝视"}
                   ,{"start [stɑ:t]","v.开始;动身;吃惊;开办,开动 n.开端;惊起"}
                   ,{"startle ['stɑ:tl]","v.惊吓,使吃惊"}
                   ,{"starve [stɑ:v]","v.(使)饿死,饿得慌,挨饿"}
                   ,{"state [steit]","n.状态,情况;国,州 v.陈述,说明"}
                   ,{"statement ['steitmənt]","n.声明,陈述"}
                   ,{"statesman ['steitsmən]","n.政治家,国务活动家"}
                   ,{"static ['stætik]","a.(statical)静态的,静力的"}
                   ,{"station ['steiʃən]","n.车站;所,站,局;身份,地位 v.安置,驻扎"}
                   ,{"stationary ['steiʃənəri]","a.静止的,固定的"}
                   ,{"stationery ['steiʃəneri]","n.文具"}
                   ,{"statistical [stə'tistikəl]","a.统计的,统计学的"}
                   ,{"statue ['stætju:,-tʃu]","n.塑像,雕像"}
                   ,{"status ['steitəs,'stæ-]","n.地位,身份;情形,状况"}
                   ,{"statute ['stætju:t,-tʃu:t]","n.成文法,法令,法规;章程,规则,条例"}
                   ,{"stay [stei]","vi.逗留;保持 vt.停止,延缓 n.逗留,停留"}
                   ,{"steady ['stedi]","a.稳定的,不变的;坚定的 v.(使)稳固/稳定"}
                   ,{"steak [steik]","n.牛排;大块肉(或鱼)片"}
                   ,{"steal [sti:l]","v.偷,窃取;偷偷地做,巧取"}
                   ,{"steam [sti:m]","n.水汽,蒸汽,水蒸气 v.蒸发;蒸;用蒸汽开动"}
                   ,{"steamer ['sti:mə]","n.汽船,轮船"}
                   ,{"steel [sti:l]","n.钢"}
                   ,{"steep [sti:p]","a.陡峭的;险峻的;急剧升降的 vt.浸泡,沉浸"}
                   ,{"steer [stiə]","vt.驾驶,为...操舵;引导 vi.驾驶"}
                   ,{"stem [stem]","n.茎,干 vt.堵(挡)住 vi.起源于,由...造成"}
                   ,{"step [step]","n.步;台阶,梯级;步骤,措施 v.踏,走,举步"}
                   ,{"stereo ['steriəu,'stiə-,'sti:-]","n.立体声音响;立体声装置 n./a.立体声(的)"}
                   ,{"stereotype ['steriəutaip,'stiə-]","n.陈规,老套,模式化 vt.使定型,使模式化"}
                   ,{"stern [stə:n]","a.严厉的;坚决的,坚定的 n.船尾,舟尾"}
                   ,{"steward ['stju:əd,'stjuəd]","n.乘务员,服务员;看管人;膳食管理员"}
                   ,{"stick [stik]","n.棍,棒,手杖 v.刺,戳,扎;粘贴"}
                   ,{"sticky ['stiki]","a.粘的,粘性的;棘手的;(道路)泥泞的"}
                   ,{"stiff [stif]","a.硬的,僵直的;拘谨的;呆板的;艰难的"}
                   ,{"still [stil]","a.静止的,寂静的 ad.还,仍然;更;安静地"}
                   ,{"stimulate ['stimjuleit]","v.刺激,使兴奋;激励,鼓舞"}
                   ,{"sting [stiŋ]","v./n.刺,刺痛,剧痛;刺,叮"}
                   ,{"stir [stə:]","v.搅拌,搅动;动,摇动;激动;轰动;煽动,鼓动"}
                   ,{"stitch [stitʃ]","n.一针;(因跑步引起的)肋部剧痛 v.缝(合)"}
                   ,{"stock [stɔk]","n.备料,库存,现货;股票,公债 v.储存"}
                   ,{"stocking ['stɔkiŋ]","n.长(筒)袜"}
                   ,{"stomach ['stʌmək]","n.胃,胃口;肚子,腹部 vt.承受,忍受"}
                   ,{"stone [stəun]","n.石,石头;岩石,矿石;(水果的)核、子"}
                   ,{"stool [stu:l]","n.凳子;(pl.)大便"}
                   ,{"stoop [stu:p]","v.弯腰,俯身 n.弯腰,曲背"}
                   ,{"stop [stɔp]","v.停止;塞住;阻止,阻挠;逗留 n.停车站;停止"}
                   ,{"storage ['stɔridʒ]","n.贮藏(量),保管;库房"}
                   ,{"store [stɔ:]","n.商店,店铺;贮藏,贮备品 v.贮藏,贮备"}
                   ,{"storey ['stɔ:ri]","n.(story)楼,层"}
                   ,{"storm [stɔ:m]","n.暴风雨,暴风雪;激动,爆发 v.猛攻,直捣"}
                   ,{"story ['stɔ:ri]","n.故事,传说,小说;(=storey)楼层"}
                   ,{"stove [stəuv]","n.炉子,火炉"}
                   ,{"straight [streit]","a.直的;整齐的,端正的 ad.直接;正直,直率"}
                   ,{"straightforward [,streit'fɔ:wəd]","a.正直的;简单的,易懂的 ad.坦率地"}
                   ,{"strain [strein]","v.拉紧;紧张;扭伤;竭尽全力 n.拉紧;负担"}
                   ,{"strange [streindʒ]","a.奇怪的,奇异的;陌生的,生疏的;外地的"}
                   ,{"stranger ['streidʒə]","n.陌生人,生客;外地人,外国人"}
                   ,{"strap [stræp]","n.皮带,带子 v.用带扣住,束牢;用绷带包扎"}
                   ,{"strategy ['strætidʒi]","n.战略,策略;对策,政策"}
                   ,{"straw [strɔ:]","n.稻草,麦秆;吸管;不值钱的东西"}
                   ,{"strawberry ['strɔ:bəri]","n.草莓"}
                   ,{"stream [stri:m]","n.小河,溪流;流,一股,一串 v.流出,涌"}
                   ,{"streamline ['stri:mlain]","a.流线型的 vt.使成流线型;使合理化"}
                   ,{"street [stri:t]","n.街,街道;行车道"}
                   ,{"strength [streŋθ,streŋkθ]","n.力,力量;实力;长处,优点;人力;兵力"}
                   ,{"strengthen ['streŋθən,'streŋkθən]","v.加强,巩固"}
                   ,{"strenuous ['strenjuəs]","a.费力的,艰辛的;奋发的,努力的"}
                   ,{"stress [stres]","n.压力;重要性;应力;重音 vt.强调,重读"}
                   ,{"stretch [stretʃ]","v.伸展,延伸 n.拉长;伸展;一段时间/路程"}
                   ,{"strict [strikt]","a.(with)严格的,严厉的;严谨的,精确的"}
                   ,{"stride [straid]","vi.大踏步走;跨越 n.一大步(pl.)长足进步"}
                   ,{"strife [straif]","n.争吵;冲突,斗争;竞争"}
                   ,{"strike [straik]","n./vi.罢工 vt.打,击;攻击;给„深刻印象"}
                   ,{"striking ['straikiŋ]","a.显著的;惹人注目的,容貌出众的"}
                   ,{"string [striŋ]","n.弦,线,细绳;(一串),(一行) v.缚,捆"}
                   ,{"strip [strip]","v.剥,剥去 n.窄条,条纹"}
                   ,{"stripe [straip]","n.长条,条纹;军服上表示军阶的臂章条纹"}
                   ,{"strive [straiv]","v.奋斗,努力"}
                   ,{"stroke [strəuk]","n.击;报时的钟声;一击/划/笔;中风 v.抚摸"}
                   ,{"stroll [strəul]","n.&v.漫步;散步;游荡"}
                   ,{"strong [strɔŋ,strɔ:ŋ]","a.强壮的,强大的;强烈的,浓的"}
                   ,{"structure ['strʌktʃə]","n.结构,构造;建筑物 v.构造,建造"}
                   ,{"struggle ['strʌɡl]","n./v.斗争,奋斗,努力"}
                   ,{"stubborn ['stʌbən]","a.顽固的,倔强的;难对付的,难以克服的"}
                   ,{"student ['stju:dənt,'stu:-]","n.(大中学校的)学生;研究者,学者"}
                   ,{"studio ['stju:diəu,'stu:-]","n.画室;播音室;工作室;(电影)制片厂"}
                   ,{"study ['stʌdi]","vt.学习;研究;细看 vi.读书 n.学习;研究"}
                   ,{"stuff [stʌf]","n.原料,材料,东西 v.填满,塞满"}
                   ,{"stumble ['stʌmbl]","n.跌倒,绊倒 vi.绊(摔)倒;结结巴巴说"}
                   ,{"stun [stʌn]","vt.使...失去知觉;使目瞪口呆,使吃惊"}
                   ,{"stupid ['stju:pid,'stu:-]","a.愚蠢的,迟钝的"}
                   ,{"sturdy ['stə:di]","a.坚定的,不屈不挠的;强健的,结实的"}
                   ,{"style [stail]","n.风格,文体;式样,时式,类型"}
                   ,{"subject ['sʌbdʒikt,səb'dʒekt]","n.主题;学科 a.隶属的;易遭...的 v.使隶属"}
                   ,{"subjective [səb'dʒektiv]","a.主观(上)的,个人的"}
                   ,{"submarine ['sʌbməri:n]","n.潜水艇 a.水底的,海底的"}
                   ,{"submerge [səb'mə:dʒ]","v.沉没,淹没;潜入"}
                   ,{"submit [səb'mit]","v.(to)使服从,屈服;(to)呈送,提交"}
                   ,{"subordinate [sə'bɔ:dinət,-neit]","a.(to)次要的,从属的;下级的"}
                   ,{"subscribe [səb'skraib]","vi.(to)订阅,订购;同意 vt.捐助,赞助"}
                   ,{"subsequent ['sʌbsikwənt]","a.随后的,后来的"}
                   ,{"subsidy ['sʌbsidi]","n.补助金;津贴费"}
                   ,{"substance ['sʌbstəns]","n.物质;实质,本质;主旨;财产,资产"}
                   ,{"substantial [səb'stænʃəl]","a.实质的;相当的;显著的;坚固的;富裕的"}
                   ,{"substitute ['sʌbstitju:t,-tu:t]","n.代替者;替身;代用品 v.(for)代替,替换"}
                   ,{"subtle ['sʌtl]","a.精巧的,巧妙的;细微的,微妙的"}
                   ,{"subtract [səb'trækt]","v. (from)减(去),扣掉"}
                   ,{"suburb ['sʌbə:b]","n.市郊,郊区"}
                   ,{"subway ['sʌbwei]","n.地铁;地下行人隧道"}
                   ,{"succeed [sək'si:d]","vi.成功;继承,接替 vt.接替;继...之后"}
                   ,{"success [sək'ses]","n.成就,成功;成功的事物,有成就的人"}
                   ,{"successful [sək'sesful]","a.圆满的;顺利的;成功的"}
                   ,{"succession [sək'seʃən]","n.连续,系列;继任,继承"}
                   ,{"successive [sək'sesiv]","a.接连的,连续的"}
                   ,{"successor [sək'sesə]","n.接替的人或事物,继任者"}
                   ,{"such [sʌtʃ,sətʃ]","a.这样的;上述的 ad.那么 pron.这样的人/事物"}
                   ,{"suck [sʌk]","v.&n.吸,舐;吸收(取)"}
                   ,{"sudden ['sʌdən]","a.出乎意料的,突然的"}
                   ,{"sue [sju:,su:]","v.控告,对...提出诉讼,起诉"}
                   ,{"suffer ['sʌfə]","v.(from)受痛苦,患病;受损失;遭受;忍受"}
                   ,{"suffice [sə'fais]","v.充足,足够;vt.(食物等)使(某人)满足"}
                   ,{"sufficient [sə'fiʃənt]","a.(for)足够的,充分的(比 enough 拘谨、正式)"}
                   ,{"sugar ['ʃuɡə]","n.糖,食糖 vt.加糖于"}
                   ,{"suggest [sə'dʒest,səɡ-]","v.建议,提出;使联想,使想起...;暗示"}
                   ,{"suggestion [səɡ'dʒestʃən]","n.建议,意见;细微的迹象;暗示,联想"}
                   ,{"suicide ['sjuisaid]","n.自杀;给自己带来恶劣后果的行为"}
                   ,{"suit [sju:t,su:t]","v.合适,适合;相配,适应 n.一套西服;诉讼"}
                   ,{"suitable ['sju:təbl]","a.(for)合适的,适宜的"}
                   ,{"suite [swi:t]","n.套间;一套家具;套,组,系列"}
                   ,{"sulfur ['sʌlfə]","n.(sulphur)硫"}
                   ,{"sum [sʌm]","n.总数,和;金额;算术题;要旨 v.合计,总计"}
                   ,{"summarize ['sʌməraiz]","v.(summarise)概括,总结"}
                   ,{"summary ['sʌməri]","n.摘要,概要 a.概括的,简略的"}
                   ,{"summer ['sʌmə]","n.夏天,夏季 a.夏季的"}
                   ,{"summit ['sʌmit]","n.顶,最高点;颠峰,高峰;最高级会议"}
                   ,{"summon ['sʌmən]","v.召唤;传讯,传唤;鼓起(勇气),振作(精神)"}
                   ,{"sun [sʌn]","n.太阳;恒星;美国 Sun 公司"}
                   ,{"Sunday ['sʌndeɪ]","n.星期日"}
                   ,{"sunrise ['sʌnraiz]","n.日出,拂晓;朝霞"}
                   ,{"sunset ['sʌnset]","n.日落,傍晚;晚霞"}
                   ,{"sunshine ['sʌnʃain]","n.日光,日照;晴天"}
                   ,{"super ['sju:pə]","a.极好的,超级的"}
                   ,{"superb [sju'pə:b,sə-]","a.极好的,杰出的;华丽的"}
                   ,{"superficial [,sju:pə'fiʃəl]","a.表面的;肤浅的,浅薄的"}
                   ,{"superfluous [sju'pə:fluəs]","a.多余的,过剩的"}
                   ,{"superior [sju:'piriə,sju:pə-]","a.优良的,卓越的;上级的 n.上级;长者;高手"}
                   ,{"superiority [sju:,piəri'ɔriti,sə-]","n.优越(性),优势,优等;高傲,傲慢"}
                   ,{"supermarket ['sju:pə,mɑ:kit]","n.超级市场"}
                   ,{"supersonic [,sju:pə'sɔnik]","a.超音速的,超声波的 n.超声波,超声频"}
                   ,{"superstition [,sju:pə'stiʃən]","n.迷信,迷信的观念习俗"}
                   ,{"supervise ['sju:pəvaiz]","v.管理,监督"}
                   ,{"supper ['sʌpə]","n.晚餐"}
                   ,{"supplement ['sʌplimənt]","n.补遗;增刊;附录 v.增刊,补充"}
                   ,{"supply [sə'plai]","v.(with,to)供给,供应,补足 n.供应,供应量"}
                   ,{"support [sə'pɔ:t]","n./vt.支撑;支持;赡养;维持 n.支持者;支柱"}
                   ,{"suppose [sə'pəuz]","v.料想,猜想;假定;conj.假使...结果会怎样"}
                   ,{"suppress [sə'pres]","v.镇压,压制;抑制,忍住;查禁"}
                   ,{"supreme [sju'pri:m,sə-]","a.极度的,最重要的;至高的,最高的"}
                   ,{"sure [ʃuə,ʃɔ:]","a.肯定的;一定会...的;有信心的,有把握的"}
                   ,{"surface ['sə:fis]","n.表面;外表 a.表面的,肤浅的"}
                   ,{"surge [sə:dʒ]","vi.汹涌;彭湃;蜂拥而至 n.巨浪;汹涌;彭湃"}
                   ,{"surgeon ['sə:dʒən]","n.外科医生"}
                   ,{"surgery ['sə:dʒəri]","n.外科,外科学;手术室,诊疗室"}
                   ,{"surname ['sə:neim]","n.姓"}
                   ,{"surpass [sə'pɑ:s,-'pæs]","vt.超过,胜过"}
                   ,{"surplus ['sə:plʌs,-pləs]","n.过剩,剩余;余款,余额 a.过剩的,剩余的"}
                   ,{"surprise [sə'praiz]","v.使诧异,使惊异;奇袭 n.诧异,惊异;奇袭"}
                   ,{"surrender [sə'rendə]","vi.投降,屈服 vt.放弃,交出 n.投降,认输"}
                   ,{"surround [sə'raund]","vt.包围,环绕 n.环绕物"}
                   ,{"surroundings [sə'raʊndɪŋz]","n.周围的事物,环境"}
                   ,{"survey [sə:'vei,'sə:vei,sə-]","v./n.俯瞰,眺望;全面审视,调查;测量图,勘定"}
                   ,{"survival [sə'vaivəl]","n.幸存,生存;幸存者,残存物"}
                   ,{"survive [sə'vaiv]","v.幸免于,幸存;比...长命"}
                   ,{"susceptible [sə'septəbl]","a.易受影响的;易受感动的;易受感染的"}
                   ,{"suspect [sə'spekt,'sʌspekt]","v.猜想;怀疑;察觉 a.可疑的 n.嫌疑犯"}
                   ,{"suspend [sə'spend]","v.悬(浮),挂;暂停,取消;推迟"}
                   ,{"suspicion [sə'spiʃən]","n.怀疑,猜疑;一点儿,少量"}
                   ,{"suspicious [sə'spiʃəs]","a.(of)可疑的,多疑的,疑心的"}
                   ,{"sustain [sə'stein]","vt.支撑,撑住;维持,持续,经受,忍耐"}
                   ,{"swallow ['swɔləu]","n.燕子;吞咽 vt.吞,咽;轻信;忍受;vi.咽口水"}
                   ,{"swamp [swɔmp,swɔ:mp]","n.沼泽;湿地 vt.浸没;使...应接不暇"}
                   ,{"swan [swɔn,swɔ:n]","n.天鹅 vi.闲荡,游荡"}
                   ,{"swarm [swɔ:m]","n.蜂群;一大群 vi.涌往;挤满;云集;成群移动"}
                   ,{"sway [swei]","vi.摇动;倾斜 vt.使摇动 n.摇动;影响力"}
                   ,{"swear [sweə]","v.(at)诅咒,骂人;宣誓,发誓"}
                   ,{"sweat [swet]","n.汗 v.(使)出汗"}
                   ,{"sweater ['swetə]","n.毛衣,绒衣,厚运动衫"}
                   ,{"sweep [swi:p]","v.扫,打扫;席卷,冲光;扫过,掠过"}
                   ,{"sweet [swi:t]","a.甜的;可爱的,美好的 n.(常 pl.)糖果;甜食"}
                   ,{"swell [swel]","n./v.肿胀;膨胀;增大;增加"}
                   ,{"swift [swift]","a./ad.快的(地);敏捷的(地)a.立刻的 n.雨燕"}
                   ,{"swim [swim]","vi.游泳;游;漂浮;眩晕;充溢 vt.游过 n.游泳"}
                   ,{"swing [swiŋ]","v.摇摆,摇荡,回转,旋转 n.秋千;摇摆,摆动"}
                   ,{"switch [switʃ]","n.开关;转换;鞭子 v.转变,转换;抽打"}
                   ,{"sword [sɔ:d]","n.剑,刀;武力"}
                   ,{"symbol ['simbəl]","n.符号,标志;象征"}
                   ,{"symmetry ['simitri]","n.对称(性);匀称,整齐"}
                   ,{"sympathetic [,simpə'θetik]","a.有同情心的;赞同的; n.交感神经"}
                   ,{"sympathize ['simpəθaiz]","v.(sympathise)(with) 同情;共鸣,同感;赞成"}
                   ,{"sympathy ['simpəθi]","n.同情,同情心;赞同,同感;慰问"}
                   ,{"symphony ['simfəni]","n.交响乐,交响曲"}
                   ,{"symposium [sim'pəuziəm]","n.讨论会,专题报告会;专题论文集"}
                   ,{"symptom ['simptəm]","n.(疾病的)症状;(不好事情的)征兆,表征"}
                   ,{"syndrome ['sindrəum,-drəm-]","n.综合病征;并存特性"}
                   ,{"synthesis ['sinθisis]","n.(pl.syntheses)综合,合成"}
                   ,{"synthetic [sin'θetik]","a.合成的,人造的;综合的"}
                   ,{"system ['sistəm]","n.系统,体系;制度;方法,方式,步聚"}
                   ,{"systematic [,sisti'mætik]","a.(systematical)系统的,有组织的"}
                   ,{"table ['teibl]","n.桌子;餐桌;工作台;表格 vt.搁置;提交讨论"}
                   ,{"tablet ['tæblit]","n.药片;碑,匾"}
                   ,{"tackle ['tækl]","n.滑车;用具,器械 v.处理,解决;抱住,抓住"}
                   ,{"tactic ['tæktik]","n.(tactics)策略,战术"}
                   ,{"tag [tæɡ]","n.标签;鞋带;垂饰;vt.加标签于;附加 vi.紧随"}
                   ,{"tail [teil]","n.尾巴;尾部;跟踪者 vt.尾随,跟踪"}
                   ,{"tailor ['teilə]","n.裁缝 v.缝制,剪裁"}
                   ,{"take [teik]","v.拿取;吃;记录;取得;花费;捕获;认为"}
                   ,{"tale [teil]","n.故事,传说"}
                   ,{"talent ['tælənt]","n.才能,天资;人才"}
                   ,{"talk [tɔ:k]","n.谈话;聊天;讲话;演讲 v.说话;交谈"}
                   ,{"tall [tɔ:l]","a.(身材)高的,高大的;夸大的,离谱的"}
                   ,{"tame [teim]","a.驯服的,温顺的;沉闷的,乏味的 vt.驯服"}
                   ,{"tan [tæn]","n./a.(皮肤因日晒而成)棕褐色(的) vt.晒黑"}
                   ,{"tangle ['tæŋɡl]","n.纠缠;缠结;混乱 v.(使)缠绕;变乱"}
                   ,{"tank [tæŋk]","n.罐,槽,箱;坦克 vt.储于槽中"}
                   ,{"tanker ['tæŋkə]","n.油船"}
                   ,{"tap [tæp]","n.塞子;水龙头; n./v.轻打,轻敲; vt.开发"}
                   ,{"tape [teip]","n.带(子);录音带,磁带 v.录音;系,捆"}
                   ,{"tar [tɑ:]","n.柏油,焦油 vt.涂或浇柏油/焦油于"}
                   ,{"target ['tɑ:ɡit]","n.目标,对象,靶子"}
                   ,{"tariff ['tærif]","n.关税,税率;(旅馆,饭店等)价目表,收费表"}
                   ,{"task [tɑ:sk,tæsk]","n.任务,作业,工作"}
                   ,{"taste [teist]","v.品尝;(of)有„味道;体验 n.滋味;味觉"}
                   ,{"tax [tæks]","n.税(款),负担 v.对...征税,使负重担"}
                   ,{"taxi ['tæksi]","n.出租汽车 v.[指飞机](使)滑行"}
                   ,{"tea [ti:]","n.茶(叶);午后茶点"}
                   ,{"teach [ti:tʃ]","vt.教,讲授;教导(训)vi.讲课,当教师"}
                   ,{"teacher ['ti:tʃə]","n.教师(员),老(导)师"}
                   ,{"team [ti:m]","n.小队,小组 v.协同工作"}
                   ,{"tear [tiə]","n.(pl.)眼泪 vt.撕裂;使„分裂 vi.破裂"}
                   ,{"tease [ti:z]","v.戏弄,取笑;挑逗 n.(爱)戏弄他人者;戏弄"}
                   ,{"technical ['teknikəl]","a.技术(性)的,工艺的;专门性的,专业性的"}
                   ,{"technician [tek'niʃən]","n.技术员,技师,技工"}
                   ,{"technique [tek'ni:k]","n.技巧,手艺,技能;技术,工艺"}
                   ,{"technology [tek'nɔlədʒi]","n.科学技术;工业技术;应用科学"}
                   ,{"tedious ['ti:diəs,'ti:dʒəs]","a.乏味的,单调的,冗长的"}
                   ,{"teenager ['ti:n,eidʒə]","n.十几岁的青少年"}
                   ,{"telegram ['teliɡræm]","n.电报"}
                   ,{"telegraph ['teliɡrɑ:f,-ɡræf]","n.电报机,电报 v.打电报,发电报"}
                   ,{"telephone ['telifəun]","n.电话,电话机 v.打电话"}
                   ,{"telescope ['teliskəup]","n.望远镜 v.缩短,压缩"}
                   ,{"tell [tel]","vt.告诉,讲述;告诫;吩咐,命令;辨/区别"}
                   ,{"temper ['tempə]","n.脾气;韧度 vt.调和,使缓和;使回火"}
                   ,{"temperament ['temprəmənt]","n.气质,性格,性情;资质"}
                   ,{"temperature ['tempəritʃə]","n.温度,体温;热度,发烧"}
                   ,{"temple ['templ]","n.庙宇,神殿,寺;太阳穴"}
                   ,{"tempo ['tempəu]","n.节奏,行进速度;(音乐的)速度"}
                   ,{"temporary ['tempərəri]","a.暂时的,临时的"}
                   ,{"tempt [tempt]","v.诱惑,引诱;吸引,使感兴趣"}
                   ,{"temptation [temp'teiʃən]","n.引诱,诱惑;诱惑物"}
                   ,{"ten [ten]","num.十 pron./a.十(个,只...)"}
                   ,{"tenant ['tenənt]","n.承租人;房客;佃户 vt.租借,承租"}
                   ,{"tend [tend]","v.趋向,往往是;照料,看护"}
                   ,{"tendency ['tendənsi]","n.趋势,趋向;倾向"}
                   ,{"tender ['tendə]","a.嫩的;敏感的;温柔的 v.提出,提供;投标"}
                   ,{"tennis ['tenis]","n.网球"}
                   ,{"tense [tens]","n.时态 v.拉紧,(使)紧张 a.绷紧的,紧张的"}
                   ,{"tension ['tenʃən]","n.(紧张)状态;拉(绷)紧;张力,拉力"}
                   ,{"tent [tent]","n.帐篷"}
                   ,{"tentative ['tentətiv]","a.试探性的,暂时的;犹豫不决的"}
                   ,{"term [tə:m]","n.学期;期限,期间;(pl.)条件,条款;术语"}
                   ,{"terminal ['tə:minəl]","a.晚期的;终点的;期末的 n.终点(站);终端"}
                   ,{"terminate ['tə:mineit]","vi.(使)结束,(使)停止"}
                   ,{"terrible ['terəbl]","a.很糟的;可怕的,骇人的;极度的,厉害的"}
                   ,{"terrific [tə'rifik]","a.极好的,非常的,极度的"}
                   ,{"terrify ['terifai]","v.使害怕,使惊恐"}
                   ,{"territory ['teritəri]","n.领土;版图;领域,范围"}
                   ,{"terror ['terə]","n.恐怖;可怕的人(事)"}
                   ,{"test [test]","n./vt.试验;检验;测验"}
                   ,{"testify ['testifai]","v.作证,证明;(to)表明,说明"}
                   ,{"testimony ['testiməni]","n.证据,证词;表明,说明"}
                   ,{"text [tekst]","n.正文,文本;原文;教科书"}
                   ,{"textbook ['tekstbuk]","n.课本,教科书"}
                   ,{"textile ['tekstail,-til]","n.纺织品 a.纺织的"}
                   ,{"texture ['tekstʃə]","n.(织物)质地;(材料)构造;结构;肌理"}
                   ,{"than [ðæn,弱 ðən,ðn]","conj.(用于形容词,副词的比较级之后)比"}
                   ,{"thank [θæŋk]","vt.感谢 int.[-s]谢谢 n.[pl.]感谢(意)"}
                   ,{"Thanksgiving [ˌθæŋks'ɡɪvɪŋ]","n.感恩节"}
                   ,{"that [ðæt,弱 ðət,ðt]","a./pron.那,那个 ad.那么 conj.[引导从句]"}
                   ,{"the [ðə]","art.这(那)个;这(那)些(指特定的人或物)"}
                   ,{"theater ['θiətə,'θi:ə-]","n.(theatre)戏院;戏剧;阶梯教室"}
                   ,{"theft [θeft]","n.偷窃(行为),偷窃罪"}
                   ,{"their [ðεə,弱 ðər]","pron.[they 的所有格]他(她、它)们的"}
                   ,{"theirs [ðεəz]","pron.[they 的物主代词]他(她、它)们的"}
                   ,{"them [ðem,弱 ðəm,ðm]","pron.他们/她们/它们(they 的宾格形式)"}
                   ,{"theme [θi:m]","n.题目,主题;主旋律,基调"}
                   ,{"themselves [ðəm'selvz,ðem-]","pron.他(她、它)们自己;他(她、它)们亲自"}
                   ,{"then [ðen]","ad.当时,在那时;然后,于是;那么,因而"}
                   ,{"theoretical [,θiə'retikəl,θi:ə-]","a.理论(上)的"}
                   ,{"theory ['θiəri,'θi:ə-]","n.理论,原理;学说,见解,看法"}
                   ,{"therapy ['θerəpi]","n.治疗,(不需要药物或手术的)物理疗法"}
                   ,{"there [ðεə,弱 ðə,ðr]","ad.在那儿;往那儿 pron.表示存在（与be连用） n.那个地方；那一点"}
                   ,{"thereafter [,ðεər'ɑ:ftə,-'æf-]","ad.此后,以后"}
                   ,{"thereby [,ðεə'bai,'ðεəbai]","ad.因此,从而"}
                   ,{"therefore ['ðεəfɔ:]","ad.因此,所以 conj.因此"}
                   ,{"thermal ['θə:məl]","a.热的,热力的;(小规模的)上升气流"}
                   ,{"thermometer [θə'mɔmitə]","n.温度计"}
                   ,{"these [ði:z]","pron.&a.[this 的复数]这些;这些人(东西)"}
                   ,{"thesis ['θi:sis]","n.(pl.theses) 论文;论题;论点"}
                   ,{"they [ðei,弱 ðe]","pron.他们"}
                   ,{"thick [θik]","a.厚的,粗的,稠的,浓的 ad.厚,浓,密"}
                   ,{"thief [θi:f]","n.(thieves)贼;小偷"}
                   ,{"thigh [θai]","n.大腿;股骨"}
                   ,{"thin [θin]","a.薄的,细的;稀薄的,淡的;瘦的 v.变薄;变稀"}
                   ,{"thing [θiŋ]","n.物,东西;事,事情;所有物;局面,情况"}
                   ,{"think [θiŋk]","v.想,思索;认为,以为;想要;料想,预料"}
                   ,{"third [θə:d]","num.第三(个),三分之一(的)"}
                   ,{"thirst [θə:st]","n.渴,口渴;(for)渴望,热望"}
                   ,{"thirsty ['θə:sti]","a.口渴的;(for)渴望的,热望的"}
                   ,{"thirteen ['θə:'ti:n]","num./a.十三 pron.十三(个,只...)"}
                   ,{"thirty ['θə:ti]","num.三十,三十个(人或物)"}
                   ,{"this [ðis,弱 ðəs]","	pron.这；这个 a.这个 ad.这样；这么"}
                   ,{"thorn [θɔ:n]","n.刺,荆棘"}
                   ,{"thorough ['θʌrə,'θə:rəu]","a.彻底的,完全的;精心的"}
                   ,{"those [ðəuz]","pron./a.[that 的复数]那些;那些人(东西)"}
                   ,{"though [ðəu]","ad.可是,然而,不过 conj.尽管,虽然"}
                   ,{"thought [θɔ:t]","n.思想,思考,思维;意图,打算;想法"}
                   ,{"thoughtful ['θɔ:tful]","a.认真思考的,沉思的;体贴的,关心的"}
                   ,{"thousand ['θauzənd]","num./n./a.一千;[pl.]许许多多,成千上万"}
                   ,{"thread [θred]","n.线,细丝;线索,思路;螺纹 v.穿线,穿过"}
                   ,{"threat [θret]","n.恐吓,威胁;坏兆头,危险迹象"}
                   ,{"threaten ['θretən]","v.恐吓,威胁;有...危险,快要来临"}
                   ,{"three [θri:]","num.三 pron./a.三(个,只...)"}
                   ,{"threshold ['θreʃhəuld]","n.门槛;入门,开端"}
                   ,{"thrift [θrift]","a.节约,节俭"}
                   ,{"thrill [θril]","n.一阵激动(恐惧) v.激动;(使)毛骨悚然"}
                   ,{"thrive [θraiv]","v.兴旺,繁荣"}
                   ,{"throat [θrəut]","n.咽喉,嗓子"}
                   ,{"throne [θrəun]","n.御座,宝座;王位,王权"}
                   ,{"through [θru:]","prep./ad.穿过;自始至终;由,以 a.直达的"}
                   ,{"throughout [θru:'aut]","prep.遍及,贯穿 ad.到处,自始至终,彻底"}
                   ,{"throw [θrəu]","vt.扔;使突然陷入;使困惑 n.投掷(距离)"}
                   ,{"thrust [θrʌst]","vt.插入;猛推 n.插,推力 vi.刺,戳,冲"}
                   ,{"thumb [θʌm]","n.拇指 v.示意要求搭车;迅速翻阅"}
                   ,{"thunder ['θʌndə]","n.雷(声);轰隆声 v.打雷;大声说,吼叫"}
                   ,{"Thursday ['θɜːzdeɪ]","n.星期四"}
                   ,{"thus [ðʌs]","ad.如此;像这样;于是;因此"}
                   ,{"tick [tik]","n.滴答声;勾号 v.滴答响;打勾号于"}
                   ,{"ticket ['tikit]","n.票,入场券;票签;(交通违章)罚款传票"}
                   ,{"tide [taid]","n.潮,潮汐;潮流,趋势"}
                   ,{"tidy ['taidi]","a.整洁的,整齐的 v.整理,收拾"}
                   ,{"tie [tai]","n.领带;联系,关系,纽带;束缚 v.扎,系,捆"}
                   ,{"tiger ['taiɡə]","n.虎;老虎"}
                   ,{"tight [tait]","a.紧的;紧身的,装紧的;密封的 ad.紧紧地"}
                   ,{"tile [tail]","n.瓦片,瓷砖 vt.铺瓦于,贴砖于"}
                   ,{"till [til]","prep.直到,直到...为止,与 until 意思相同"}
                   ,{"tilt [tilt]","v.(使)倾侧;(使)倾斜 n.倾侧;倾斜"}
                   ,{"timber ['timbə]","n.木材,木料"}
                   ,{"time [taim]","n.时间,时刻;次,回;时代,时期;倍,乘"}
                   ,{"timely ['taimli]","a.及时的,适时的"}
                   ,{"timid ['timid]","a.胆怯的,怯懦的"}
                   ,{"tin [tin]","n.罐头;锡 a.锡制的 vt.镀锡于"}
                   ,{"tiny ['taini]","a.极小的,微小的"}
                   ,{"tip [tip]","n.尖端;末端;小费 n./v.轻击;倾斜;给小费"}
                   ,{"tire ['taiə]","v.(使)疲倦,(使)厌倦 n.(=tyre)轮胎,车胎"}
                   ,{"tired ['taɪəd]","a.疲劳的;厌倦的"}
                   ,{"tiresome ['taiəsəm]","a.使人厌倦的,讨厌的"}
                   ,{"tissue ['tiʃju:,-sju:]","n.织物,薄绢,纸巾;(动,植物的)组织"}
                   ,{"title ['taitl]","n.书名,标题;头衔,称号"}
                   ,{"to [tu:,弱 tu]","prep.(表示方向)到;向;(表示间接关系)给"}
                   ,{"toast ['təust]","n.烤面包,吐司;祝酒(词)v.烘,烤;(向...)祝酒"}
                   ,{"tobacco [tə'bækəu]","n.烟草,烟叶"}
                   ,{"today [tə'dei]","ad.在今天;现今,在当代 n.今天;现在"}
                   ,{"toe [təu]","n.脚趾,足尖"}
                   ,{"together [tə'ɡeðə]","ad.共同,一起;合起来,集拢地"}
                   ,{"toilet ['tɔilit]","n.厕所,盥洗室"}
                   ,{"token ['təukən]","n.表示;标志;记号;代用硬币 a.象征性的"}
                   ,{"tolerance ['tɔlərəns]","n.宽容;容忍,忍受;耐药力;公差"}
                   ,{"tolerant ['tɔlərənt]","a.容忍的,宽容的;有耐药力的"}
                   ,{"tolerate ['tɔləreit]","vt.容忍,默许;对(药物、毒品等)有耐力"}
                   ,{"toll [təul,tɔl]","n.(道路、桥等的)通行费;牺牲;死伤人数"}
                   ,{"tomato [tə'mɑ:təu,-'mei-]","n.西红柿"}
                   ,{"tomb [tu:m]","n.坟,冢"}
                   ,{"tomorrow [tə'mɔrəu,-'mɔ:-]","n.明天;来日,未来 ad.在明天,在明日"}
                   ,{"ton [tʌn,tuŋ]","n.吨;(pl.)大量,许多"}
                   ,{"tone [təun]","n.音调,音色;风气,气氛;腔调,语气;色调"}
                   ,{"tongue [tʌŋ]","n.舌;语言"}
                   ,{"tonight [tə'nait]","ad.在今晚;在今夜 n.今晚,今夜"}
                   ,{"too [tu:]","ad.也,还;太,过于;很,非常"}
                   ,{"tool [tu:l]","n.工具,用具;方法,手段"}
                   ,{"tooth [tu:θ]","n.(pl.teeth)牙齿;齿状物"}
                   ,{"top [tɔp]","n.顶,顶端;首位;顶点 a.最高的;顶上的"}
                   ,{"topic ['tɔpik]","n.话题,主题,题目"}
                   ,{"torch [tɔ:tʃ]","n.手电筒;火炬,火把"}
                   ,{"torment [tɔ:'ment,'tɔ:m-]","n.折磨;令人痛苦的东西(人)vt.折磨;纠缠"}
                   ,{"torrent ['tɔrənt,'tɔ:-]","n.激流,洪流;爆发,(话语等的)连发"}
                   ,{"torture ['tɔ:tʃə]","v.拷问,拷打;折磨,磨难 n.拷问;折磨,痛苦"}
                   ,{"toss [tɔs,tɔ:s]","vt.向上掷/扔;摇摆,颠簸 n.投,扔;摇动"}
                   ,{"total ['təutəl]","n.总数,合计 a.总的,全部的 v.合计,总数达"}
                   ,{"touch [tʌtʃ]","v.触,碰,摸;感动;涉及 n.触动,碰到;少许"}
                   ,{"tough [tʌf]","a.坚韧的,棘手的;强健的,吃苦耐劳的;粗暴的"}
                   ,{"tour [tuə]","n.旅游,旅行;巡回演出/比赛 v.旅游"}
                   ,{"tourist ['tuərist]","n.旅游者,观光客;巡回比赛的运动员"}
                   ,{"tow [təu]","vt.(用绳、链等)拖(车、船等) n.拖,牵引"}
                   ,{"toward [tə'wɔ:d]","prep.(towards)朝,向;将近;对于;为了"}
                   ,{"towel ['tauəl]","n.毛巾 vt.用毛巾擦或擦干"}
                   ,{"tower ['tauə]","n.塔 v.高耸"}
                   ,{"town [taun]","n.市镇;市民;城市商业区,闹市区"}
                   ,{"toxic ['tɔksik]","a.有毒的;中毒的"}
                   ,{"toy [tɔi]","n.玩具 vi.(with)漫不经心地考虑;摆弄"}
                   ,{"trace [treis]","n.痕迹,踪迹;极少量 v.描绘;跟踪,追踪"}
                   ,{"track [træk]","n.跑道,小路;轨迹,轮迹 v.跟踪,追踪"}
                   ,{"tractor ['træktə]","n.拖拉机,牵引车"}
                   ,{"trade [treid]","n.贸易,商业;职业,行业 v.经商,交易"}
                   ,{"trademark ['treidmɑ:k]","n.商标;特征 vt.注册的...商标"}
                   ,{"tradition [trə'diʃən]","n.传统; 惯例; 传说"}
                   ,{"traffic ['træfik]","n.交通,交通量"}
                   ,{"tragedy ['trædʒidi]","n.悲剧;惨事,灾难"}
                   ,{"tragic ['trædʒik]","a.悲剧的,悲惨的"}
                   ,{"trail [treil]","n.踪迹,痕迹;小路 v.追踪,跟踪;拖,拖曳"}
                   ,{"train [trein]","n.列车;行列,系列,一串 v.训练,培养"}
                   ,{"training ['treiniŋ]","n.训练,培养"}
                   ,{"trait [trei,treit]","n.特征,特点,特性"}
                   ,{"traitor ['treitə]","n.叛徒,卖国贼"}
                   ,{"tram [træm]","n.有轨电车"}
                   ,{"tramp [træmp]","n./v 步行;沉重的脚步声(走)v.践踏 n.流浪者"}
                   ,{"transaction [træn'zækʃən]","n.办理,处理;交易,事务;(pl.)会报,学报"}
                   ,{"transcend [træn'send,trɑ:n-]","vt.超出,超越(经验、知识、能力的范围等)"}
                   ,{"transfer [træns'fɜː(r)]","vt./n.转移;转换;转让;过户;迁移;改乘"}
                   ,{"transform [træns'fɔ:m,trænz-]","vt.改变,变换;变压;转化;改造,改造"}
                   ,{"transient ['trænziənt,-si-]","a.短暂的,转瞬即逝的;临时的,暂住的"}
                   ,{"transistor [træn'sistə]","n.晶体管;晶体管收音机"}
                   ,{"transition [træn'siʒən,-'ziʃən]","n.转变,变迁,过渡(时期)"}
                   ,{"translate [træns'leɪt]","v.翻译,解释;转化"}
                   ,{"translation [træns'leiʃən,trænz-]","n.翻译;译文,译本"}
                   ,{"transmission [trænz'miʃən,træns-]","n.播送,发射;传动,传送"}
                   ,{"transmit [trænz'mit,træns-]","vt.传输/导;转送;发射 vi.发射信号;发报"}
                   ,{"transparent [træns'pærənt,-'pεə-]","a.透明的,透光的;易理解的;明显的"}
                   ,{"transplant [træns'plɑ:nt]","n./v.移植(植物;组织,器官等);迁移"}
                   ,{"transport ['trænspɔːt]","v.运输,运送,搬运 n.运输;运输系统,运载工具"}
                   ,{"trap [træp]","n.陷阱,圈套 vt.诱捕;使中圈套 vi.设圈套"}
                   ,{"trash [træʃ]","n.垃圾;拙劣的作品;渣滓,败类"}
                   ,{"travel ['trævəl]","n.旅行 v.旅行;行进,传播"}
                   ,{"tray [trei]","n.盘,碟,托盘"}
                   ,{"treason ['tri:zən]","n.谋反,通敌,叛国"}
                   ,{"treasure ['treʒə,'trei-]","n.财宝,财富;珍品 v.珍爱,珍惜"}
                   ,{"treat [tri:t]","v.对待;治疗;论述;款待,请客 n.款待,请客"}
                   ,{"treaty ['tri:ti]","n.条约,协议,协商"}
                   ,{"tree [tri:]","n.树,树状物 vi.爬上树"}
                   ,{"tremble ['trembl]","n.战栗,颤抖 v.发抖,颤抖;摇动;焦虑"}
                   ,{"tremendous [tri'mendəs]","a.巨大的,极大的"}
                   ,{"trench [trentʃ]","n.&v.(挖)沟,(挖)战壕"}
                   ,{"trend [trend]","n.倾向,趋势 vi.伸向,倾向"}
                   ,{"trial ['traiəl]","n.讯问,审讯;试验;试用;尝试"}
                   ,{"triangle ['traiæŋɡl]","n.三角(形)"}
                   ,{"tribe [traib]","n.种族,部落;(植物,动物)族,类"}
                   ,{"tribute ['tribju:t]","n.贡品;颂词,称赞,(表示敬意的)礼物"}
                   ,{"trick [trik]","n.诡计,骗局;恶作剧;窍门 vt.欺骗,哄骗"}
                   ,{"trifle ['traifl]","n.少量;小事,琐事 v.玩弄;嬉耍;忽视"}
                   ,{"trigger ['triɡə]","n.扳机 vt.触发,引起"}
                   ,{"trim [trim]","a.整齐的,整洁的 v./n.整理,修整,装饰"}
                   ,{"trip [trip]","n.旅行,远足 v.绊倒;失足;犯错"}
                   ,{"triple ['tripl]","n.三倍数 a.三倍的;三部分构成的 v.使成三倍"}
                   ,{"triumph ['traiəmf,-ʌmf]","n.胜利,成功 v.得胜,战胜"}
                   ,{"trivial ['triviəl]","a.琐碎的;无足轻重的"}
                   ,{"trolley ['trɔli]","n.手推车;(英)无轨电车,(美)有轨电车"}
                   ,{"troop [tru:p]","n.(pl.)部队,军队;(一)群/队 v.群集,集合"}
                   ,{"tropic ['trɔpik]","n.回归线;[the T-s]热带地区"}
                   ,{"tropical ['trɔpikəl]","a.热带的"}
                   ,{"trouble ['trʌbl]","n.烦恼;动乱;疾病;故障;辛苦 v.(使)烦恼"}
                   ,{"troublesome ['trʌblsəm]","a.令人烦恼的,讨厌的"}
                   ,{"trousers ['trauzəz]","n.裤子"}
                   ,{"truck [trʌk]","n.卡车,载重汽车"}
                   ,{"true [truː]","a.真实,不假的;忠实,可靠的;正确无误的"}
                   ,{"trumpet ['trʌmpit]","n.喇叭,小号"}
                   ,{"trunk [trʌŋk]","n.大衣箱,皮箱;(汽车后部)行李箱;树干,躯干"}
                   ,{"trust ['trʌst]","vt.信任;盼望;委托 n.(in)信任,依赖;委托"}
                   ,{"truth [tru:θ]","n.真实,真相;真实性;真理"}
                   ,{"try [trai]","v.尝试,试图;试验,试用;审讯 n.尝试"}
                   ,{"tub [tʌb]","n.木盆,澡盆"}
                   ,{"tube [tju:b,tu:b]","n.管,软管;电子管,显像管;地铁"}
                   ,{"tuck [tʌk]","v.卷起;塞进"}
                   ,{"Tuesday ['tjuːzdeɪ]","n.星期二"}
                   ,{"tug [tʌɡ]","v.用力拖(或拉);苦干 n.拖;苦干;拖船"}
                   ,{"tuition [tju:'iʃən]","n.学费;(某一学科的)教学,讲授,指导"}
                   ,{"tumble ['tʌmbl]","v.(使)摔倒;打滚,翻腾 n.摔跤,跌倒"}
                   ,{"tumour ['tju:mə]","n.(tumor)(肿)瘤,肿块"}
                   ,{"tune [tju:n,tu:n]","n.调子,曲调;和谐,协调 vt.调音,调节,调整"}
                   ,{"tunnel ['tʌnəl]","n.隧道,山洞"}
                   ,{"turbine ['tə:bain,-bin]","n.汽轮机,涡轮机"}
                   ,{"turbulent ['tə:bjulənt]","a.狂暴的,无秩序的"}
                   ,{"turkey ['tə:ki]","n.火鸡(肉)"}
                   ,{"turn [tə:n]","v./n.(使)转动;(使)旋转;(使)转变 n.机会"}
                   ,{"turnover ['tə:n,əuvə]","n.翻倒(物);人员调整;(资金等)周转;营业额"}
                   ,{"tutor ['tju:tə]","n.导师;家庭教师 v.辅导;当导师;当家庭教师"}
                   ,{"TV [ˌtiː'viː]","n.(television)电视;电视机"}
                   ,{"twelve [twelv]","num.十二 pron./a.十二(个,只...)"}
                   ,{"twenty ['twenti]","num.二十 pron./a.二十(个,只...)"}
                   ,{"twice [twais]","ad.两次,两倍"}
                   ,{"twin [twin]","a.双的,成对的,孪生的 n.孪生子,双生子"}
                   ,{"twinkle ['twiŋkl]","vi.(星等)闪烁,(眼情)发亮 n.闪烁,闪光"}
                   ,{"twist [twist]","v.捻;拧;扭曲;蜿蜒曲折而行 n.拧;歪曲;曲折"}
                   ,{"two [tu:]","num.二,两个 n.两个(人或物)"}
                   ,{"type [taip]","n.型式,类型;印刷字体;活/铅字 v.打字"}
                   ,{"typewriter ['taip,raitə]","n.打字机"}
                   ,{"typhoon [tai'fu:n]","n.台风"}
                   ,{"typical ['tipikəl]","a.(of)典型的,有代表性的"}
                   ,{"typist ['taipist]","n.打字员"}
                   ,{"ugly ['ʌɡli]","a.丑陋的,难看的;丑恶的,讨厌的"}
                   ,{"ultimate ['ʌltimət]","a.最后的,最终的;根本的"}
                   ,{"ultraviolet [,ʌltrə'vaiələt]","a./n.紫外线(的)"}
                   ,{"umbrella [ʌm'brelə]","n.伞"}
                   ,{"unanimous [ju:'næniməs]","a.全体一致的,一致同意的"}
                   ,{"uncle ['ʌŋkl]","n.伯父,叔父,舅父,姑父,姨父"}
                   ,{"uncover [,ʌn'kʌvə]","v.揭开,揭露"}
                   ,{"under ['ʌndə]","prep.在...下面; 在...以下 ad.在下面;少于"}
                   ,{"underestimate [,ʌndə'estimeit]","vt.低估,看轻"}
                   ,{"undergo [,ʌndə'ɡəu]","vt.遭受,经历,承受"}
                   ,{"undergraduate [,ʌndə'ɡrædjuət]","n.大学生 a.大学生的；大学的"}
                   ,{"underground ['ʌndəɡraund]","a.地下的;秘密的 n.地铁 ad.在地下"}
                   ,{"underlie [,ʌndə'lai]","vt.位于...之下, 成为...的基础"}
                   ,{"underline [,ʌndə'lain,'ʌndəlain]","vt.在...下划线;强调"}
                   ,{"underlying [,ʌndə'laiiŋ]","a.含蓄的,潜在的;在下面的"}
                   ,{"undermine [,ʌndə'main]","v.暗中破坏,逐渐削弱;侵蚀...的基础"}
                   ,{"underneath [,ʌndə'ni:θ]","prep.在...下面 ad.在下面,在底下"}
                   ,{"understand [,ʌndə'stænd]","v.懂,理解;获悉,听说;揣测,认为"}
                   ,{"understanding [,ʌndə'stændiŋ]","n.理解,理解力;谅解 a.了解的,通情达理的"}
                   ,{"undertake [,ʌndə'teik]","v.承担,担任;许诺,保证;着手,从事"}
                   ,{"undo [,ʌn'du:]","v.松开,解开,取消"}
                   ,{"undoubtedly [ʌn'daʊtɪdli]","ad.无疑,必定"}
                   ,{"uneasy [,ʌn'i:zi]","a.不安的,焦虑的"}
                   ,{"unemployment [,ʌnim'plɔimənt]","n.失业,失业人数"}
                   ,{"unexpected [,ʌnik'spektid]","a.想不到的, 意外的, 未预料到"}
                   ,{"unfold [,ʌn'fəuld]","vt.打开;显露;展示 vi.呈现;显示;展示"}
                   ,{"unfortunately [ʌn'fɔːtʃənətli]","ad.不幸地"}
                   ,{"uniform ['ju:nifɔ:m]","n.制服,军服 a.相同的,一律的"}
                   ,{"unify ['ju:nifai]","v.使联合,统一;使相同,使一致"}
                   ,{"union ['ju:niən]","n.联合,团结;联盟,联邦;协会,社团;和谐"}
                   ,{"unique [ju:'ni:k]","a.唯一的,独一无二的"}
                   ,{"unit ['ju:nit]","n.单位,单元;部件,元件;机组,装置"}
                   ,{"unite [ju:'nait]","vi.联合,团结;统一,合并 vt.使联合"}
                   ,{"unity ['ju:niti]","n.团结;统一,一致,整体"}
                   ,{"universal [,ju:ni'və:səl]","a.普遍的,全体的,通用的;宇宙的,世界的"}
                   ,{"universe ['ju:nivə:s]","n.宇宙,万物"}
                   ,{"university [,ju:ni'və:səti]","n.(综合)大学"}
                   ,{"unless [ən'les]","conj.除非 prep.除...外"}
                   ,{"unlike [,ʌn'laik]","a.不同的,不相似的 prep.不象,和...不同"}
                   ,{"unlikely [,ʌn'laikli]","a.未必的,靠不住的"}
                   ,{"unload [,ʌn'ləud]","vi.卸货;退子弹 vt.摆脱...之负担;倾销"}
                   ,{"until [,ʌn'til]","conj.&prep.直到...为止,在...以前;直到..."}
                   ,{"unusual [,ʌn'ju:ʒuəl]","a.不平常的,与众不同的"}
                   ,{"up [ʌp]","ad.向上;...起来;...完;起床 prep.向上"}
                   ,{"update [ʌp'deit,'ʌpdeit]","v.更新,使现代化"}
                   ,{"upgrade ['ʌpɡreid,ʌp'ɡreid]","v.提升,使升级"}
                   ,{"uphold [ʌp'həuld]","vt.支持,赞成;举起;坚持"}
                   ,{"upon [ə'pɔn]","prep.在...上;在...旁 [=on]"}
                   ,{"upper ['ʌpə]","a.上面的;上部的,较高的"}
                   ,{"upright ['ʌprait,ʌp'r-]","a.垂直的,直立的;正直的,诚实的 ad.竖立着"}
                   ,{"uproar ['ʌprɔ:]","n.骚动,喧嚣,鼎沸"}
                   ,{"upset [ʌp'set,'ʌpset]","v.使...心烦意乱;打翻,推翻 a.难过的;不安的"}
                   ,{"upstairs ['ʌp'stεəz]","ad.向楼上;在楼上;上楼 ad.楼上的"}
                   ,{"up-to-date ['ʌptə'deit]","a.现代化的,最新的;跟上时代的"}
                   ,{"upward ['ʌpwəd]","a.向上的,上升的 ad.向上"}
                   ,{"urban ['ə:bən]","a.城市的, 市内的"}
                   ,{"urge [ə:dʒ]","vt.驱策；鼓励；催促；力陈 vi.极力主张 n.强烈欲望,迫切要求"}
                   ,{"urgent ['ə:dʒənt]","a.急迫的,紧要的,紧急的"}
                   ,{"us [ʌs]","pron.我们(we 的宾格形式)"}
                   ,{"usage ['ju:zidʒ]","n.使用,用法;习惯,习俗;惯用法"}
                   ,{"use [ju:z]","n.使/应用;用法/途;益/用处 vt.用;消耗"}
                   ,{"used [ju:zd]","a.用旧了的,旧的;习惯于...;过去惯/经常"}
                   ,{"useful ['ju:sful]","a.有用的,实用的;有益的,有帮助的"}
                   ,{"usual ['ju:ʒuəl]","a.通常的,平常的"}
                   ,{"usually ['juːʒuəli]","ad.通常,平常"}
                   ,{"utilize ['ju:tilaiz]","vt.利用"}
                   ,{"utmost ['ʌtməust]","a.最远的;极度的 n.极限,极度,最大可能"}
                   ,{"utter ['ʌtə]","v.说,发出(声音) a.彻底的,完全的"}
                   ,{"vacant ['veikənt]","a.空的,未占用的;空缺的;神情茫然的"}
                   ,{"vacation [və'keiʃən]","n.休假,假期"}
                   ,{"vacuum ['vækjuəm]","n.真空,真空吸尘器"}
                   ,{"vague [veiɡ]","a.不明确的,含糊的,暧昧的"}
                   ,{"vain [vein]","a.徒劳的,徒然的;自负的,爱虚荣的"}
                   ,{"valid ['vælid]","a.有效的;有根据的;正当的"}
                   ,{"valley ['væli]","n.(山)谷;流域"}
                   ,{"valuable ['væljuəbl]","a.贵重的,有价值的 n.(pl.)贵重物品,财宝"}
                   ,{"value ['vælju:]","n.价格;价值;实用性 v.评价,估价;尊重"}
                   ,{"valve [vælv]","n.阀;(英)电子管,真空管;(心脏的)瓣膜"}
                   ,{"van [væn]","n.有篷汽车;有篷货运车厢"}
                   ,{"vanish ['væniʃ]","vi.突然不见;消失"}
                   ,{"vanity ['vænəti]","n.虚荣心,浮华"}
                   ,{"vapour ['veipə]","n.(vapor)汽,(水)蒸气"}
                   ,{"variable ['vεəriəbl]","a.易变的;可变的;变量的 n.变量"}
                   ,{"variation [,vεəri'eiʃən]","n.变化,变动;变种,变异"}
                   ,{"variety [və'raiəti]","n.多样；种类；多样化"}
                   ,{"various ['vεəriəs]","a.各种各样的;不同的"}
                   ,{"vary ['vεəri]","vt.改变,变化;使多样化"}
                   ,{"vase [vɑ:z,veis,veiz]","n.花瓶,瓶"}
                   ,{"vast [vɑ:st,væst]","a.巨大的,辽阔的,大量的;巨额的"}
                   ,{"vegetable ['vedʒitəbl]","n.蔬菜,植物 a.植物的,蔬菜的"}
                   ,{"vegetarian [,vedʒi'tεəriən]","n.素食主义者"}
                   ,{"vegetation [,vedʒi'teiʃən]","n.植物,草木"}
                   ,{"vehicle ['vi:ikl,'vi:hi-]","n.车辆,交通工具;媒介,载体"}
                   ,{"veil [veil]","n.面纱,遮蔽物 v.用面纱掩盖,掩饰"}
                   ,{"vein [vein]","n.血管;静脉;叶脉;纹理;情绪 vt.使成脉络"}
                   ,{"velocity [vi'lɔsəti]","n.速度,速率"}
                   ,{"velvet ['velvit]","n.丝绒,天鹅绒 a.丝绒制的,柔软的"}
                   ,{"ventilate ['ventileit]","vt.使通风;给...装通风设备"}
                   ,{"venture ['ventʃə]","v.冒险,拼;大胆表示 n.冒险事业,拼,闯"}
                   ,{"verb [və:b]","n.动词"}
                   ,{"verbal ['və:bəl]","a.用言辞的,用文字的;口头的;动词的"}
                   ,{"verdict ['və:dikt]","n.(陪审团的)裁决,判决;判断;定论"}
                   ,{"verge [və:dʒ]","n.边,边缘 v.濒临"}
                   ,{"verify ['verifai]","vt.证实,查证;证明"}
                   ,{"versatile ['və:sətail]","a.通用的;多才多艺的,多方面的"}
                   ,{"verse [və:s]","n.韵文,诗;诗节,诗句"}
                   ,{"version ['və:ʃən]","n.版本;译本,译文;说法"}
                   ,{"versus ['və:səs]","prep.(vs.)...对...(在诉讼,比赛等);与...相对"}
                   ,{"vertical ['və:tikəl]","a.垂直的,竖的 n.垂线"}
                   ,{"very ['veri]","ad.很,非常;完全 a.很，非常;恰好是，正是;十足的;特有的"}
                   ,{"vessel ['vesəl]","n.容器,器皿;船,舰;管,血管"}
                   ,{"vest [vest]","n.背心,马甲;汗衫,内衣"}
                   ,{"veteran ['vetərən]","n.老手,老兵"}
                   ,{"veto ['vi:təu]","n./v.否决"}
                   ,{"via ['vaiə]","prep.经;通过;凭借"}
                   ,{"vibrate [vai'breit]","v.(使)振动,(使)摇摆;受...而感动"}
                   ,{"vice [vais]","n.邪恶;恶习;(pl.)台钳,老虎钳"}
                   ,{"vicinity [vi'sinəti]","n.邻近,附近"}
                   ,{"vicious ['viʃəs]","a.恶毒的,凶残的,邪恶的"}
                   ,{"victim ['viktim]","n.牺牲品,受害者"}
                   ,{"victory ['viktəri]","n.胜利"}
                   ,{"video ['vidiəu]","n.电视,视频;录像 a.电视的,视频的;录像的"}
                   ,{"view [vju:]","n.视野;风景;观察;见解;照片 vt.观察;认为"}
                   ,{"viewpoint ['vju:pɔint]","n.观点"}
                   ,{"vigorous ['viɡərəs]","a.朝气蓬勃的,精力旺盛的"}
                   ,{"village ['vilidʒ]","n.村,村庄"}
                   ,{"vinegar ['viniɡə]","n.醋"}
                   ,{"violate ['vaiəleit]","vt.违背;冒犯;妨碍;侵犯;亵渎(圣物)"}
                   ,{"violence ['vaiələns]","n.猛烈,强烈;暴力,暴行;强暴"}
                   ,{"violent ['vaiələnt]","a.猛烈的,激烈的;暴力引起的,强暴的"}
                   ,{"violet ['vaiələt]","n.紫罗兰,紫色 a.紫色的"}
                   ,{"violin [,vaiə'lin]","n.小提琴"}
                   ,{"virgin ['və:dʒin]","n.处女 a.处女的;纯洁的;原始的;未使用的"}
                   ,{"virtual ['və:tʃuəl]","a.实质上的，事实上的;（计算机）虚拟的"}
                   ,{"virtue ['və:tju:]","n.德行,美德;贞操;优点;功效,效力"}
                   ,{"virus ['vaiərəs]","n.病毒;(精神,道德方面的)有害影响"}
                   ,{"visa ['vi:zə]","n.(护照等的)签证;维萨信用卡 vt.签证"}
                   ,{"visible ['vizəbl]","a.看得见的, 明显的, 显著的"}
                   ,{"vision ['viʒən]","n.视力,视觉;远见;洞察力;幻想,幻影;想象力"}
                   ,{"visit ['vizit]","n.访问,参观 v.访问,参观;视察;降临;闲谈"}
                   ,{"visitor ['vizitə]","n.访问者,客人,来宾,参观者"}
                   ,{"visual ['vizjuəl]","a.看的,看得见的;视觉的"}
                   ,{"vital ['vaitəl]","a.生死攸关的,重大的;生命的,生机的"}
                   ,{"vitamin ['vitəmin]","n.维生素"}
                   ,{"vivid ['vivid]","a.鲜艳的;生动的,栩栩如生的"}
                   ,{"vocabulary [vəu'kæbjuləri]","n.词汇,词汇量;词汇表"}
                   ,{"vocal ['vəukəl]","a.声音的;有声的;歌唱的 n.元音;声乐作品"}
                   ,{"vocation [vəu'keiʃən]","n.职业;召唤;天命;天职;才能"}
                   ,{"voice [vɔis]","n.声音;嗓音;发音能力;意见,发言权;语态"}
                   ,{"void [vɔid]","a.空虚的;没有的;无效的"}
                   ,{"volcano [vɔl'keinəu]","n.火山"}
                   ,{"volleyball ['vɔlibɔ:l]","n.排球"}
                   ,{"volt [vɔlt]","n.伏特"}
                   ,{"voltage ['vəultidʒ]","n.电压"}
                   ,{"volume ['vɔlju:m]","n.容积,体积;卷,册;音量"}
                   ,{"voluntary ['vɔləntəri]","a.自愿的,志愿的"}
                   ,{"volunteer [,vɔlən'tiə]","n./v.自愿(者,兵);自愿(提供)"}
                   ,{"vote [vəut]","n.投票,表决;选票,选票数 v.投票,表决"}
                   ,{"vowel ['vauəl]","n.元音,元音字母"}
                   ,{"voyage ['vɔiidʒ]","n.航海;航行;旅行"}
                   ,{"vulgar ['vʌlɡə]","a.粗俗的,庸俗的,本土的,通俗的,普通的"}
                   ,{"vulnerable ['vʌlnərəbl]","a.易受攻击的"}
                   ,{"wage [weidʒ]","n.(常 pl.)工资,报酬 vt.进行,开展"}
                   ,{"wagon ['wæɡən]","n.运货马车,运货车;敞蓬车厢"}
                   ,{"waist [weist]","n.腰,腰部"}
                   ,{"wait [weit]","v.(for)等待;(on)侍候 n.等候,等待时间"}
                   ,{"waiter [weitə]","n.侍者,服务员"}
                   ,{"waitress ['weitris]","n.女侍者,女服务员"}
                   ,{"wake [weik]","v.醒来,唤醒;使觉醒,激发,引起"}
                   ,{"waken ['weikən]","v.醒,弄醒,唤醒"}
                   ,{"walk [wɔ:k]","v.走,步行,散步;走遍 n.走,步行,散步"}
                   ,{"wall [wɔ:l]","n.墙,壁,围墙 vt.筑墙围住,用墙隔开"}
                   ,{"wallet ['wɔlit]","n.皮夹,钱包"}
                   ,{"wander ['wɔndə]","v.漫步,徘徊;迷路,迷失方向;离题"}
                   ,{"want [wɔnt,wɔ:nt]","vt.想要;希望;需要;缺,缺少 n.需要;短缺"}
                   ,{"war [wɔ:]","n.战争(状态);冲突 vi.作战"}
                   ,{"ward [wɔ:d]","n.病房;行政区;监护;被监护人 vt.挡住"}
                   ,{"wardrobe ['wɔ:drəub]","n.衣柜,衣厨;衣服;行头;剧装"}
                   ,{"warehouse ['wεəhaus,'wεəhauz]","n.仓库,货栈"}
                   ,{"warfare ['wɔ:fεə]","n.战争(状态);斗争;冲突"}
                   ,{"warm [wɔ:m]","a.温暖的,热心的,热情的 v.(使)变暖"}
                   ,{"warmth [wɔ:mθ]","n.暖和,温暖;热心,热情"}
                   ,{"warn [wɔ:n]","vt.警告 vi.发出警告"}
                   ,{"warrant ['wɔrənt,'wɔ:-]","n.正当理由;许可证,委任状 v.保证,担保"}
                   ,{"wash [wɔʃ,wɔ:ʃ]","n.洗;洗的衣物 vt.冲刷,洗;冲出 vi.洗澡"}
                   ,{"waste [weist]","v.浪费 a.无用的;荒芜的 n.浪费;废物"}
                   ,{"watch [wɔtʃ,wɔ:tʃ]","v.观看;看守; (for)窥伺,等待 n.看管;表"}
                   ,{"water ['wɔ:tə,'wɔ-]","n.水 vt.浇灌;给...饮水 vi.流泪,加水"}
                   ,{"waterfall ['wɔ:təfɔ:l,'wɔ-]","n.瀑布"}
                   ,{"waterproof ['wɔ:təpru:f,'wɔ-]","a.防水的,耐水的"}
                   ,{"watt [wɔt]","n.瓦,瓦特"}
                   ,{"wave [weiv]","n.波浪;(挥手)示意;飘扬 v.(挥手)示意,致意"}
                   ,{"wax [wæks]","n.蜡,蜂蜡 v.打蜡"}
                   ,{"way [wei]","n.道路,路程;方法/式,手段;习惯;状态"}
                   ,{"we [wi:,弱 wi]","pron.我们<主格>"}
                   ,{"weak [wi:k]","a.虚弱的,软弱的;不够标准的;淡薄的,稀的"}
                   ,{"wealth [welθ]","n.财富,财产;大量"}
                   ,{"wealthy ['welθi]","a.富有的,丰裕的,充分的 n.富人,有钱人"}
                   ,{"weapon ['wepən]","n.武器,兵器"}
                   ,{"wear ['wεə]","v.穿着,戴着;磨损,用旧 n.穿,戴;磨损"}
                   ,{"weary ['wiəri]","a.疲倦的;令人厌烦的 v.使疲倦,使厌倦"}
                   ,{"weather ['weðə]","n.天气,气象"}
                   ,{"weave [wi:v]","v.编(织) n.编织法,编织式样"}
                   ,{"web [web]","n.网,蜘蛛网,网络,网状物 vi.结网 vt.结网于；使陷入罗网"}
                   ,{"wedding ['wediŋ]","n.婚礼"}
                   ,{"wedge [wedʒ]","n.楔,楔形 vt.楔牢,楔入,挤进"}
                   ,{"Wednesday ['wenzdeɪ]","n.星期三"}
                   ,{"weed [wi:d]","n.杂草,野草 v.除草,锄草"}
                   ,{"week [wi:k]","n.星期,周"}
                   ,{"weekday ['wi:kdei]","n.平常日,工作日"}
                   ,{"weekend [,wi:k'end,'wi:kend]","n.周末"}
                   ,{"weekly ['wi:kli]","a.每星期的,一周的 ad.每周一次 n.周刊,周报"}
                   ,{"weep [wi:p]","v.哭泣,流泪;滴下 n.哭泣"}
                   ,{"weigh [wei]","v.称...重量,称;重达;考虑,权衡"}
                   ,{"weight [weit]","n.重量;负荷,重担;重要性,分量;砝码,秤砣"}
                   ,{"weird [wiəd]","a.古怪的,离奇的;怪诞的,神秘而可怕的"}
                   ,{"welcome ['welkəm]","int.欢迎 a.受欢迎的 vt./n.欢迎;迎接"}
                   ,{"weld [weld]","v.焊接 n.焊接,焊缝"}
                   ,{"welfare ['welfεə]","n.福利;幸福;福利事业"}
                   ,{"well [wel]","ad.好,令人满意地;很 int.哎呀,好啦,嗯"}
                   ,{"well-known ['wel'nəun]","a.有名的,著名的"}
                   ,{"west [west]","n./a.西,西方(的),西部(的) ad.向西"}
                   ,{"western ['westən]","a.西方的,西部的"}
                   ,{"wet [wet]","a.湿的,潮湿的;有雨的,多雨的 v.弄湿,沾湿"}
                   ,{"whale [weɪl]","n.鲸;庞然大物"}
                   ,{"what [wɔt,wʌt,弱 wət]","pron.什么 a.什么；哪个 ad.用于感叹句中 int.什么"}
                   ,{"whatever [wɒt'evə(r)]","pron.无论什么；任何事物 a.不管怎样的；所有的；丝毫的"}
                   ,{"whatsoever [ˌwɒtsəʊ'evə]","ad.任何(用于否定句中以加强语气) pron.无论什么 a.无论什么的"}
                   ,{"wheat [wiːt]","n.小麦；小麦色"}
                   ,{"wheel [wi:l]","n.轮,车轮"}
                   ,{"when [wen,弱 wən]","ad./pron.何时;当时 conj.那时;然后;而"}
                   ,{"whenever [wen'evə,wən-]","conj.无论何时,随时;每当"}
                   ,{"where [wεə]","ad.在哪/那里 conj./pron.哪里 conj.然而"}
                   ,{"whereas [wεə'æz]","conj.而,却,反之"}
                   ,{"wherever [wεə'evə]","conj.无论在哪里 ad.无论在哪里,究竟在哪里"}
                   ,{"whether ['weð ə]","conj.是否,会不会,不管,无论"}
                   ,{"which [witʃ]","a./pron.哪个,哪些;什么样的;那个,那些"}
                   ,{"whichever [witʃ'evə]","pron./a.无论哪个,无论哪些"}
                   ,{"while [wail]","conj.当„的时候;而;虽然;尽管 n.一会儿"}
                   ,{"whip [wip]","n.鞭子;车夫 v.鞭打,抽打;突然移动"}
                   ,{"whirl [wə:l]","v.(使)旋转,打转 n.旋转;-连串快速的活动"}
                   ,{"whisky ['wiski]","n.威士忌酒"}
                   ,{"whisper ['wispə]","v.耳语;私下说,偷偷告诉 n.耳语;传闻"}
                   ,{"whistle ['wisl]","n.口哨,汽笛;口哨声,汽笛声 v.吹口哨;鸣笛"}
                   ,{"white [wait]","a.白色的;苍白的;白种的 n.白色;白种人"}
                   ,{"who [hu:,弱 hu,u:,u]","pron.谁,什么人;...的人;他,她,他们"}
                   ,{"whoever [hu:'evə]","pron.[引导名词从句]谁;无论谁;究竟是谁"}
                   ,{"whole [həul]","n.全部 a.全体的;全部的;完整的;无缺的"}
                   ,{"wholesome ['həulsəm]","a.卫生的;有益的;健康的,有益健康的"}
                   ,{"wholly ['həuli]","ad.完全地,全部,一概"}
                   ,{"whom [hu:m,弱 hum]","pron.谁;哪个人(who 的宾格)"}
                   ,{"whose [hu:z]","pron.谁的;哪(个)人的,那些(人)的"}
                   ,{"why [wai]","ad./conj.为什么;„的理由 int.咳,哎呀"}
                   ,{"wicked ['wikid]","a.坏的;邪恶的;不道德的;恶劣的;淘气的"}
                   ,{"wide [waid]","a.宽阔的;睁大的;远离的 ad.广阔地;偏差地"}
                   ,{"widespread ['waid'spred]","a.分布广泛的,普遍的"}
                   ,{"widow ['widəu]","n.寡妇"}
                   ,{"width [widθ,witθ]","n.宽度;宽阔,广阔"}
                   ,{"wife [waif]","n.妻子,夫人,太太"}
                   ,{"wild [waild]","a.野性的,野生的;野蛮的;狂热的;荒芜的"}
                   ,{"will [wil,弱 wel]","aux./v. 将;会;愿意 n.意志;决心;愿望"}
                   ,{"willing ['wiliŋ]","a.愿意的,乐意的,心甘情愿的"}
                   ,{"win [win]","vi.获胜,赢 vt.赢得;在...中获胜 n.胜利"}
                   ,{"wind [wind]","n.风;气息 v.转动;缠绕;上发条,;蜿蜒而行"}
                   ,{"window ['windəu]","n.窗,窗口"}
                   ,{"wine [wain]","n.葡萄酒,果酒"}
                   ,{"wing [wiŋ]","n.翅,翅膀;翼,机翼;派别 v.飞过；空运；临时发挥"}
                   ,{"wink [wiŋk]","v.(使)眨眼;眨眼示意 n.眨眼;小睡,打盹"}
                   ,{"winter ['wintə]","n.冬季,冬天"}
                   ,{"wipe [waip]","v./n.擦,揩,抹"}
                   ,{"wire ['waiə]","n.金属线,电线;电报,电信 v.发电报(给)"}
                   ,{"wisdom ['wizdəm]","n.智慧,明智;名言,格言"}
                   ,{"wise [waiz]","a.有智慧的,聪明的"}
                   ,{"wish [wiʃ]","v.希望;但愿;祝 n.愿望,希望;[pl.]祝愿"}
                   ,{"wit [wit]","n.智力,才智,智慧"}
                   ,{"witch [witʃ]","n.女巫, 巫婆,巫师"}
                   ,{"with [wið,wiθ]","prep.跟...一起;用;具有;关于;因;随着"}
                   ,{"withdraw [wið'drɔ:,wiθ-]","v. 收 回 , 撤 消 ; 缩 回 , 退 出 ; 提 取(钱)"}
                   ,{"withhold ['wið'həuld,wiθ-]","vt.使停止;拒给;保留;抑制 vi.忍住"}
                   ,{"within [wi'ðin,wi'θin]","prep.在...里面,在...以内 ad.在内"}
                   ,{"without [wi'ðaut,-'θaut]","prep.无,没有 n.外面,外部"}
                   ,{"withstand [wið'stænd,wiθ-]","vt.抵抗,经受住"}
                   ,{"witness ['witnis]","n.目击者,证人;证据,证明 v.目击,目睹;作证"}
                   ,{"wolf [wulf]","n.狼"}
                   ,{"woman ['wumən]","n.(pl.)women 妇女,成年女子"}
                   ,{"wonder ['wʌndə]","n.惊奇,惊异;奇迹,奇事 v.(at)诧异;想知道"}
                   ,{"wonderful ['wʌndəful]","a.惊人的,奇妙的;极好的"}
                   ,{"wood [wud]","n.木材,木头,木料;(pl.)森林,林地"}
                   ,{"wooden ['wudən]","a.木制的;呆笨的"}
                   ,{"wool [wul]","n.羊毛,毛线,毛织品"}
                   ,{"word [wə:d]","n.词,词语;言语,话;谈话;消息,信息"}
                   ,{"work [wə:k]","n.工作(量);作品;[pl.]工厂 v.工作;运转"}
                   ,{"worker ['wə:kə]","n.工人,工作者,工作人员"}
                   ,{"workshop ['wə:kʃɔp]","n.车间,工场,修理厂;研讨会,讲习班"}
                   ,{"world [wə:ld]","n.世界,地球;...界,领域;世间;全世界"}
                   ,{"worldwide ['wə:ld,waid]","a.全世界的,世界范围的 ad.遍及全世界"}
                   ,{"worm [wə:m]","n.虫,蠕虫"}
                   ,{"worry ['wʌri,'wə:ri]","v.烦恼;(about)对„感到烦恼 n.烦恼,焦虑"}
                   ,{"worse [wə:s,'wə:s]","a./ad.更坏,更差(的/地)"}
                   ,{"worship ['wə:ʃip]","n.礼拜,礼拜仪式;崇拜 v.崇拜,敬仰;做礼拜"}
                   ,{"worst [wə:st,'wə:st]","a./ad.最坏(的),最差(的)"}
                   ,{"worth [wə:θ]","n.价值 a.值...的,价值...的,值得...的"}
                   ,{"worthwhile ['wə:θ'hwail]","a.值得(做)的"}
                   ,{"worthy ['wə:ði]","a.(of)值得...的,配得上...的;有价值的"}
                   ,{"would [wud,弱 wəd]","aux./v.将;可能;将会;总是,总会;宁愿"}
                   ,{"wound [waund]","n.创伤,伤口 v.伤,伤害"}
                   ,{"wrap [ræp]","v.裹,缠,卷,包 n.披肩,围巾"}
                   ,{"wreath [ri:θ]","n.花环,花圈"}
                   ,{"wreck [rek]","n.失事船(或飞机)v.(船等)失事,遇难;破坏"}
                   ,{"wrench [rentʃ]","v.猛拧;挣脱;使扭伤 n.扳手;痛苦,难受"}
                   ,{"wretched ['retʃid]","a.可怜的;悲惨的;肮脏的;恶劣的"}
                   ,{"wrinkle ['riŋkl]","n.皱纹 v.起皱,皱眉"}
                   ,{"wrist [rist]","n.腕,腕关节"}
                   ,{"write [rait]","v.写,书写,写字;写作;写信(给),函告"}
                   ,{"writing ['raitiŋ]","n.写,写作;著作,作品"}
                   ,{"wrong [rɔŋ,rɔ:ŋ]","a.错的 ad.错误地,不正确地 n.错误 v.委屈"}
                   ,{"X-ray ['eksreɪ]","n.X 射线,X 光"}
                   ,{"yard [jɑ:d]","n.院子,场地;码"}
                   ,{"yawn [jɔ:n]","v.打呵欠 n.呵欠"}
                   ,{"year [jə:,jiə]","n.年,年度,学年 a./ad.每年,一年一次"}
                   ,{"yearly ['jə:li,'jiə-]","a.每年的,一年一度的 ad.每年,一年一次地"}
                   ,{"yell [jel]","vi.大叫;呼喊 vt.叫着说 n.叫声;喊声"}
                   ,{"yellow ['jeləu]","a.黄的,黄色的 n.黄色"}
                   ,{"yes [yes]","ad.是[用于肯定句前],是的"}
                   ,{"yesterday ['jestədi,-dei]","n.&ad.昨天;前不久"}
                   ,{"yet [jet]","ad.还,尚,仍然;已经 conj.然而 ad.甚至"}
                   ,{"yield [ji:ld]","v.出产,生长;(to)屈服,服从 n.产量,收获"}
                   ,{"you [ju:,弱 ju,jə]","pron.你;你们;一个人,任何人"}
                   ,{"young [jʌŋ]","a.年轻的,幼小的;没经验的 n.青年人"}
                   ,{"youngster ['jʌŋstə]","n.小伙子,年轻人;少年,儿童"}
                   ,{"your [jɔ:,jəu,弱 jə]","pron.[you 的所有格]你的,你们的"}
                   ,{"yours [jɔ:z,juəz]","pron.[you 的物主代词]你(们)的(所有物)"}
                   ,{"yourself [jɔ:'self,juə-,jə-]","pron.[反身代词]你自己;你亲自"}
                   ,{"youth [ju:θ]","n.青年;年轻人"}
                   ,{"zeal [zi:l]","n.热心,热忱,热情"}
                   ,{"zebra ['zi:brə]","n.斑马"}
                   ,{"zero ['ziərəu,'zi:rəu]","n.零,零度 num.零"}
                   ,{"zigzag ['ziɡzæɡ]","n./a.之字形(的) v.使曲折,曲折盘旋"}
                   ,{"zinc [ziŋk]","n.锌"}
                   ,{"zip [zip]","v.(用拉链或像拉链那样)合上或打开"}
                   ,{"zone [zəun]","n.地区,区域 v.分区,划分地带"}
                   ,{"zoo [zu:]","n.动物园"}
                   ,{"zoom [zu:m]","vi.(飞机)陡升 n.陡升;嗡嗡声;变焦"}};
