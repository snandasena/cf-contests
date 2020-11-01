cmake_minimum_required(VERSION 3.10)
project(codeforces)

set(CMAKE_CXX_STANDARD 17)


# COMMON
#add_executable(codeforces common/b_subsequence_hate.cpp)
#add_executable(codeforces common/a_odd_selection.cpp)
#add_executable(codeforces common/a_berland_poker.cpp)
#add_executable(codeforces common/a_bmail_compter_network.cpp)
#add_executable(codeforces common/a_new_year_traspotation.cpp)
#add_executable(codeforces common/array_with_odd_sum.cpp)
#add_executable(codeforces common/a_minute_before_new_year.cpp)
#add_executable(codeforces common/a_soft_drink.cpp)
#add_executable(codeforces common/a_three_pile_of_candies.cpp)
#add_executable(codeforces common/b_badge.cpp)
#add_executable(codeforces common/b_fence.cpp)
#add_executable(codeforces common/b_card_construction.cpp)
#add_executable(codeforces common/b_perfect_number.cpp)
#add_executable(codeforces common/b_photo_to_remember.cpp)
#add_executable(codeforces common/c1_great_julia_calender.cpp)
#add_executable(codeforces common/b_bersu_ball.cpp)
#add_executable(codeforces common/a_flipping_game.cpp)
#add_executable(codeforces common/c_alternating_subsequence.cpp)
#add_executable(codeforces common/b_ternary_search.cpp)
#add_executable(codeforces common/b_kuriyama_mirai_stone.cpp)
#add_executable(codeforces common/b_petr_conbitation_lock.cpp)
#add_executable(codeforces common/b_fedor_and_new_game.cpp)
#add_executable(codeforces common/c_letters.cpp)
#add_executable(codeforces common/a_lets_watch_football.cpp)
#add_executable(codeforces common/c_frog_jums.cpp)
#add_executable(codeforces common/a_deadline.cpp)
#add_executable(codeforces common/a_connr.cpp)
#add_executable(codeforces common/a_road_to_zero.cpp)
#add_executable(codeforces common/b_maria_breaks_the_self_isolation.cpp)
#add_executable(codeforces common/b_mahmud_and_triangle.cpp)
#add_executable(codeforces common/b_joe_is_on_tv.cpp)
#add_executable(codeforces common/b_assign_to_classes.cpp)
#add_executable(codeforces common/b_ania_and_minizing.cpp)
#add_executable(codeforces common/b_polycarp_training.cpp)
#add_executable(codeforces common/b_dzy_loves_string.cpp)
#add_executable(codeforces common/a_fake_np.cpp)
#add_executable(codeforces common/b_disturbed_people.cpp)
#add_executable(codeforces common/a_2048_game.cpp)
#add_executable(codeforces common/a_find_amir.cpp)
#add_executable(codeforces common/a_ehab_fails_to_be_thanos.cpp)
#add_executable(codeforces common/a_shortest_path_of_the_king.cpp)
#add_executable(codeforces common/a_amr_and_music.cpp)
#add_executable(codeforces common/a_king_escape.cpp)
#add_executable(codeforces common/a_transformation_from_a_to_b.cpp)
#add_executable(codeforces common/a_dzy_loves_chessbord.cpp)
#add_executable(codeforces common/b_weired_sort.cpp)
#add_executable(codeforces common/a_ice_skating.cpp)
#add_executable(codeforces common/b_coloring_a_tree.cpp)
#add_executable(codeforces common/c_rumor.cpp)
#add_executable(codeforces common/a_bear_and_raspberry.cpp)
#add_executable(codeforces common/b_nagetive_prefixes.cpp)
#add_executable(codeforces common/b_maximum_product.cpp)
#add_executable(codeforces common/a_beautiful_string.cpp)
#add_executable(codeforces common/b_roadside_trees.cpp)
#add_executable(codeforces common/d1_sage_birthday.cpp)
#add_executable(codeforces common/b_chocolates.cpp)
#add_executable(codeforces common/b_relatively_prime_pairs.cpp)
#add_executable(codeforces common/a_watching_a_movie.cpp)
#add_executable(codeforces common/a_drinks_choosing.cpp)
#add_executable(codeforces common/a_chunga_changa.cpp)
#add_executable(codeforces common/a_fox_and_number_game.cpp)
#add_executable(codeforces common/a_yellow_cards.cpp)
#add_executable(codeforces common/b_turn_the_rectangles.cpp)
#add_executable(codeforces common/a_mahmoud_and_ehab_and_the_mex.cpp)
#add_executable(codeforces common/b_permutation.cpp)
#add_executable(codeforces common/a_palindrome_dance.cpp)
#add_executable(codeforces common/b_dinner_with_emma.cpp)
#add_executable(codeforces common/a_generate_login.cpp)
#add_executable(codeforces common/a_diversity.cpp)
#add_executable(codeforces common/b_buggy_robot.cpp)
#add_executable(codeforces common/a_ciel_and_dancing.cpp)
#add_executable(codeforces common/a_table.cpp)
#add_executable(codeforces common/a_group_of_students.cpp)
#add_executable(codeforces common/b_pillars.cpp)
#add_executable(codeforces common/a_k_periodic_array.cpp)
#add_executable(codeforces common/a_cableway.cpp)
#add_executable(codeforces common/a_paper_work.cpp)
#add_executable(codeforces common/c_similar_pairs.cpp)
#add_executable(codeforces common/b_middle_class.cpp)
#add_executable(codeforces common/a_cinema_line.cpp)
#add_executable(codeforces common/c_yet_another_broken_keyboard.cpp)
#add_executable(codeforces common/b_creating_the_contest.cpp)
#add_executable(codeforces common/b_block_adventure.cpp)
#add_executable(codeforces common/b_restricted_rps.cpp)
#add_executable(codeforces common/b_lecture_sleep.cpp)
#add_executable(codeforces common/b_cutting.cpp)
#add_executable(codeforces common/b_vitamins.cpp)
#add_executable(codeforces common/b_spotlights.cpp)
#add_executable(codeforces common/b_dreamoon_and_wifi.cpp)
#add_executable(codeforces common/b_just_eat_it.cpp)
#add_executable(codeforces common/c_equalize.cpp)
#add_executable(codeforces common/c1_pokémon_army.cpp)
#add_executable(codeforces common/c_lose_it.cpp)
#add_executable(codeforces common/b_wow_factor.cpp)
#add_executable(codeforces common/b_game_of_credit_cards.cpp)
#add_executable(codeforces common/c_maximum_splitting.cpp)
#add_executable(codeforces common/b_new_skateboard.cpp)
#add_executable(codeforces common/b_mike_and_strings.cpp)

#add_executable(codeforces cf647/b.cpp)
#add_executable(codeforces cf647/c.cpp)

# 674
#add_executable(codeforces cf647/b.cpp)

# 651
#add_executable(codeforces cf651/c.cpp)

# 652
#add_executable(codeforces cf652/c.cpp)
#add_executable(codeforces cf652/b.cpp)

# EDU 89
#add_executable(codeforces ed89/c.cpp)
#add_executable(codeforces ed89/b.cpp)

# EDU 90
#add_executable(codeforces ed90/a.cpp)
#add_executable(codeforces ed90/b.cpp)
#add_executable(codeforces ed90/c.cpp)
#add_executable(codeforces ed90/d.cpp)
#add_executable(codeforces ed90/f.cpp)
#add_executable(codeforces ed90/e.cpp)

# 653
#add_executable(codeforces cf653/a.cpp)
#add_executable(codeforces cf653/b.cpp)
#add_executable(codeforces cf653/c.cpp)
#add_executable(codeforces cf653/d.cpp)
#add_executable(codeforces cf653/e.cpp)
#add_executable(codeforces cf653/f.cpp)

# 654
#add_executable(codeforces cf654/a.cpp)
#add_executable(codeforces cf654/b.cpp)
#add_executable(codeforces cf654/c.cpp)
#add_executable(codeforces cf654/d.cpp)
#add_executable(codeforces cf654/e.cpp)


# GB 8
#add_executable(codeforces gb8/c.cpp)

# GB 9
#add_executable(codeforces gb9/a.cpp)
#add_executable(codeforces gb9/b.cpp )
#add_executable(codeforces gb9/c.cpp )
#add_executable(codeforces gb9/d.cpp )
#add_executable(codeforces gb9/e.cpp )
#add_executable(codeforces gb9/f.cpp )

# 655
#add_executable(codeforces cf655/a.cpp)
#add_executable(codeforces cf655/b.cpp)
#add_executable(codeforces cf655/c.cpp)
#add_executable(codeforces cf655/d.cpp)
#add_executable(codeforces cf655/e.cpp)
#add_executable(codeforces cf655/f.cpp)


# EDU 91
#add_executable(codeforces ed91/a.cpp)
#add_executable(codeforces ed91/b.cpp)
#add_executable(codeforces ed91/c.cpp)
#add_executable(codeforces ed91/d.cpp)
#add_executable(codeforces ed91/e.cpp)

# 649
#add_executable(codeforces cf649/a.cpp)
#add_executable(codeforces cf649/b.cpp)


# 656
#add_executable(codeforces cf656/a.cpp)
# add_executable(codeforces cf656/b.cpp)
#add_executable(codeforces cf656/c.cpp)
#add_executable(codeforces cf656/d.cpp)
#add_executable(codeforces cf656/e.cpp)
#add_executable(codeforces cf656/g.cpp)

# 657
#add_executable(codeforces cf657/a.cpp)
#add_executable(codeforces cf657/b.cpp)
#add_executable(codeforces cf657/c.cpp)
#add_executable(codeforces cf657/d.cpp)

# 658
#add_executable(codeforces cf658/a.cpp)
#add_executable(codeforces cf658/a1.cpp)
#add_executable(codeforces cf658/b.cpp)
#add_executable(codeforces cf658/c.cpp)
#add_executable(codeforces cf658/d.cpp)

# 659
#add_executable(codeforces cf659/a.cpp)


# EDU 92
#add_executable(codeforces ed92/a.cpp)
#add_executable(codeforces ed92/b.cpp)
#add_executable(codeforces ed92/c.cpp)
#add_executable(codeforces ed92/d.cpp)
#add_executable(codeforces ed92/e.cpp)

# 660
#add_executable(codeforces cf660/a.cpp)
#add_executable(codeforces cf660/b.cpp)
#add_executable(codeforces cf660/c.cpp)
#add_executable(codeforces cf660/d.cpp)

# 661
#add_executable(codeforces cf661/a.cpp)
#add_executable(codeforces cf661/b.cpp)
#add_executable(codeforces cf661/c.cpp)
#add_executable(codeforces cf661/d.cpp)


# 662
#add_executable(codeforces cf662/a.cpp)
#add_executable(codeforces cf662/b.cpp)
#add_executable(codeforces cf662/c.cpp)
#add_executable(codeforces cf662/d.cpp)

# 663
#add_executable(codeforces cf663/a.cpp)
#add_executable(codeforces cf663/b.cpp)
#add_executable(codeforces cf663/c.cpp)
#add_executable(codeforces cf663/d.cpp)


# 664
#add_executable(codeforces cf664/a.cpp)
#add_executable(codeforces cf664/b.cpp)
#add_executable(codeforces cf664/c.cpp)
#add_executable(codeforces cf664/d.cpp)

# EDU 93
#add_executable(codeforces ed93/a.cpp)
#add_executable(codeforces ed93/b.cpp)
#add_executable(codeforces ed93/c.cpp)
#add_executable(codeforces ed93/d.cpp)
#add_executable(codeforces ed92/e.cpp)

# GB 10
#add_executable(codeforces gb10/a.cpp)
#add_executable(codeforces gb10/b.cpp )
#add_executable(codeforces gb10/c.cpp )
#add_executable(codeforces gb10/d.cpp )

# 665
#add_executable(codeforces cf665/a.cpp)
#add_executable(codeforces cf665/b.cpp)
#add_executable(codeforces cf665/c.cpp)
#add_executable(codeforces cf665/d.cpp)


# EDU 94
#add_executable(codeforces ed94/a.cpp)
#add_executable(codeforces ed94/b.cpp)
#add_executable(codeforces ed94/c.cpp)
#add_executable(codeforces ed94/d.cpp)int i = 1; i <= 26; ++i


# 666
#add_executable(codeforces cf666/a.cpp)
#add_executable(codeforces cf666/b.cpp)
#add_executable(codeforces cf666/c.cpp)
#add_executable(codeforces cf666/d.cpp)

# 667
#add_executable(codeforces cf667/a.cpp)
#add_executable(codeforces cf667/b.cpp)
#add_executable(codeforces cf667/c.cpp)
#add_executable(codeforces cf667/d.cpp)


# 668
#add_executable(codeforces cf668/a.cpp)
#add_executable(codeforces cf668/b.cpp)
#add_executable(codeforces cf668/c.cpp)
#add_executable(codeforces cf668/d.cpp)

# 669
#add_executable(codeforces cf669/a.cpp)
#add_executable(codeforces cf669/b.cpp)
#add_executable(codeforces cf669/c.cpp)
#add_executable(codeforces cf669/d.cpp)1


# 671
#add_executable(codeforces cf671/a.cpp)
#add_executable(codeforces cf671/b.cpp)
#add_executable(codeforces cf671/c.cpp)

#add_executable(main main.cpp)


#hacker ranck
#add_executable(hacker_rank hacker_rank/anagram.cpp)
#add_executable(hacker_rank hacker_rank/palindrom_index.cpp)
#add_executable(hacker_rank hacker_rank/sherlock_and_the_valid_string.cpp)
#add_executable(hacker_rank hacker_rank/ransome_note.cpp)
#add_executable(hacker_rank hacker_rank/two_string.cpp)
#add_executable(hacker_rank hacker_rank/sherlock_and_anagram.cpp)
#add_executable(hacker_rank hacker_rank/count_triplet.cpp)
#add_executable(hacker_rank hacker_rank/frequency_queries.cpp)
#add_executable(hacker_rank hacker_rank/alternating_characters.cpp)
#add_executable(hacker_rank hacker_rank/special_string_again.cpp)
#add_executable(hacker_rank hacker_rank/bubble_sort.cpp)
#add_executable(hacker_rank hacker_rank/mark_and_toys.cpp)
#add_executable(hacker_rank hacker_rank/comparator.cpp)
#add_executable(hacker_rank hacker_rank/new_year_chaos.cpp)
#add_executable(hacker_rank hacker_rank/minimum_swaps2.cpp)
#add_executable(hacker_rank hacker_rank/array_manipulation.cpp)
#add_executable(hacker_rank hacker_rank/minimum_absolute_difference_in_an_rray.cpp)
#add_executable(hacker_rank hacker_rank/luck_balance.cpp)
#add_executable(hacker_rank hacker_rank/greedy_florist.cpp)
#add_executable(hacker_rank hacker_rank/max_min.cpp)
#add_executable(hacker_rank hacker_rank/ice_cream_parlor.cpp)
#add_executable(hacker_rank hacker_rank/pairs.cpp)
#add_executable(hacker_rank hacker_rank/sales_by_match.cpp)
#add_executable(hacker_rank hacker_rank/max_array_sum.cpp)
#add_executable(hacker_rank hacker_rank/abbreviation.cpp)
#add_executable(hacker_rank hacker_rank/candies.cpp)
#add_executable(hacker_rank hacker_rank/triple_sum.cpp)
#add_executable(hacker_rank hacker_rank/counting_valleys.cpp)
add_executable(hacker_rank hacker_rank/jumping_on_the_clouds.cpp)


# leetcode
#add_executable(leetcode leetcode/template.cpp)
#add_executable(leetcode leetcode/min_frogs.cpp)
#add_executable(leetcode leetcode/island_perimeter.cpp)
#add_executable(leetcode leetcode/smallest_sub_tree_with_all_deepest_nodes.cpp)
#add_executable(leetcode leetcode/maximun_area_of_a_piece_of_cake.cpp)
#add_executable(leetcode leetcode/find_a_corresponding_node_of_a_binary_tree_in_a_clone_of_that_tree.cpp)
#add_executable(leetcode leetcode/find_first_and_last_position_of_element_in_sorted_array.cpp)
#add_executable(leetcode leetcode/longest_sub_string_without_repeating.cpp)
